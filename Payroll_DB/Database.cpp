#include "stdafx.h"
#include "Database.h"


SQLConnect::SQLConnect()
{
	
}

bool SQLConnect::openConnection()
{
	try {
		connection->Open();
		return true;
	}
	catch (MySqlException^ ex)
	{
		switch (ex->Number)
		{
		case 0:
			MessageBox::Show("Cannot connect to database.");
			break;
		case 1:
			MessageBox::Show("Invalid username/password, please try again");
			break;
		}
	}
	return false;
}

bool SQLConnect::closeConnection()
{
	try {
		connection->Close();
		return true;
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
		return false;
	}
}

void SQLConnect::backup(String^ path)
{
	try
	{
		DateTime Time = DateTime::Now;
		int year = Time.Year;
		int month = Time.Month;
		int day = Time.Day;
		int hour = Time.Hour;
		int minute = Time.Minute;
		int second = Time.Second;
		int millisecond = Time.Millisecond;

		//Save file to C:\ with the current date as a filename
		path = path + "\\" + year + "-" + month + "-" + day +
			"-" + hour + "-" + minute + "-" + second + "-" + millisecond + ".sql";
		StreamWriter^ file = gcnew StreamWriter(path);

		//Create our process...
		ProcessStartInfo^ psi = gcnew ProcessStartInfo();
		psi->FileName = "D:\\xampp\\mysql\\bin\\mysqldump";
		psi->RedirectStandardInput = false;
		psi->RedirectStandardOutput = true;
		psi->Arguments = String::Format(" -u {0} -p {1} -h {2} {3}", user, pass, server, database);
		psi->UseShellExecute = false;
		//...and run it
		Process^ process = Process::Start(psi);
		String^ output;
		output = process->StandardOutput->ReadToEnd();
		file->WriteLine(output);
		process->WaitForExit();
		file->Close();
		process->Close();
		MessageBox::Show("Successfully backed up!");
	}
	catch (IOException^ ex)
	{
		MessageBox::Show("Error , unable to backup!\n" + ex->ToString());

	}
}

bool SQLConnect::createUser(String^ user,String^ pass, String^ position)
{
	try {
		openConnection();
		String^ sql;

		sql = sql->Format("Insert into users(username, pass_hash, position, idEmployee) values('{0}', AES_ENCRYPT('{1}','{2}'), '{3}', LAST_INSERT_ID())",
			user, pass, secret, position);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, connection);
		cmd->ExecuteNonQuery();

		String^ msg;
		msg = msg->Format("New user created!");
		MessageBox::Show(msg);

	}
	catch(MySqlException^ err){
		MessageBox::Show(err->ToString());
		return false;
	}
	closeConnection();
	return true;
}

MySqlConnection^ SQLConnect::getConnection() {
	return connection;
}

/*MySqlDataReader^ SQLConnect::fillEmployee() {
	std::auto_ptr<MySqlDataReader^>dataset;
	try {
		openConnection();
		String^ sql;
		sql = sql->Format("SELECT first_name, last_name, password, address, wages, position FROM employee");
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, connection);
		//cmd->ExecuteNonQuery();
		*dataset.get()=cmd->ExecuteReader();
	}
	catch(MySqlException^ err){
		MessageBox::Show(err->ToString());
	}
	closeConnection();
	return dataset;
}*/

bool SQLConnect::createEmployee(String^ first_name, String^ last_name, String^ address, String^ wage, String^ married)
{
	try {
		openConnection();
		String^ sql;
		sql = sql->Format("Insert into employee(first_name, last_name, address, wages, marriage_status) values('{0}','{1}','{2}','{3}','{4}')",
			first_name, last_name, address, wage, married);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, connection);
		//MessageBox::Show(sql);
		cmd->ExecuteNonQuery();
		String^ msg;
		msg = msg->Format("{0} {1} has been added!", first_name, last_name);
		MessageBox::Show(msg);
		closeConnection();
		return true;
	}
	catch (MySqlException^ err) {
		MessageBox::Show(err->ToString());
		closeConnection();
		return false;
	}
}

String^ SQLConnect::getName(String^ user) {
	String^ name;
	try {
		openConnection();	
		String^ sql = sql->Format("SELECT first_name, last_name FROM employee INNER JOIN users ON employee.idEmployee=users.idEmployee WHERE users.username='{0}';", user);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, connection);
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			String^ first = reader[0]->ToString();
			String^ last = reader[1]->ToString();
			name = name->Format("{0} {1}", first,last);
		}
	}
	catch (MySqlException^ err)
	{
		MessageBox::Show(err->ToString());
	}
	closeConnection();
	return name;
	
}
String^ SQLConnect::getID(String^ user) {
	String^ empid;
	try {
		openConnection();
		String^ sql = sql->Format("SELECT idEmployee FROM users WHERE username='{0}';", user);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, connection);
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			empid = reader[0]->ToString();
		}
	}
	catch (MySqlException^ err)
	{
		MessageBox::Show(err->ToString());
	}
	closeConnection();
	return empid;

}
String^ SQLConnect::getLastID() {
	String^ empid;
	try {
		openConnection();
		String^ sql = sql->Format("SELECT LAST_INSERT_ID() FROM users;");
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, connection);
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			empid = reader[0]->ToString();
		}
	}
	catch (MySqlException^ err)
	{
		MessageBox::Show(err->ToString());
	}
	closeConnection();
	return empid;

}
int SQLConnect::login(String^ user, String^ pass)
{
	String^ userCheck;
	String^ passCheck;
	String^ position;
	try
	{
		openConnection();
		String^ sql;
		sql = sql->Format("Select username, CAST(AES_DECRYPT(pass_hash, '{0}') AS CHAR), position from users where username='{1}'", secret, user);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, connection);
		MySqlDataReader^ reader = cmd->ExecuteReader();
		//MessageBox::Show(sql);

		while (reader->Read())
		{
			userCheck = reader[0]->ToString();
			passCheck = reader[1]->ToString();
			position = reader[2]->ToString();
		}
	}
	catch (MySqlException^ err)
	{
		MessageBox::Show(err->ToString());
		closeConnection();
		return -1;
	}
	closeConnection();
	if (user == userCheck && pass == passCheck)
	{
		return int::Parse(position);
	}
	else {
		return -1;
	}
}

void SQLConnect::restore(String^ path)
{

	try
	{
		StreamReader^ file = gcnew StreamReader(path);
		String^ input = file->ReadToEnd();
		file->Close();

		//Create our process...
		ProcessStartInfo^ psi = gcnew ProcessStartInfo();
		psi->FileName = "D:\\xampp\\mysql\\bin\\mysql";
		psi->RedirectStandardInput = true;
		psi->RedirectStandardOutput = false;
		psi->Arguments = String::Format("-u {0} -p {1} -h {2} {3}", user, pass, server, database);
		psi->UseShellExecute = false;
		//...and run it
		Process^ process = Process::Start(psi);
		process->StandardInput->WriteLine(input);
		process->StandardInput->Close();
		process->WaitForExit();
		process->Close();
		MessageBox::Show("Successful restore.");
	}
	catch (IOException^ ex)
	{
		MessageBox::Show("Error , unable to Restore!\n" + ex->ToString());
	}
}
