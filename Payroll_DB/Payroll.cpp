// Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stdafx.h"
#include "Database.h"
#include "Payroll.h"
#include "Deductibles.h"
#include "string"

using namespace System;
using namespace System::Windows::Forms;

//Functions from class Payroll
bool Payroll::getMarriage()
{
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		sql = sql->Format("SELECT marriage_status FROM payroll.employee;");
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read())
		{
			if (reader[0]->ToString() == "0")
				marry = false;
			else if (reader[0]->ToString() == "1")
				marry = true;
		}
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
	}
	db->closeConnection();
	return marry;
}

void Payroll::newPaycheck(int hours, float phsalary, int id)
{
	Deductibles Taxes;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		new_salary = hours * phsalary;
		marry = getMarriage();

		Taxes.calculateFedTaxes(marry, (new_salary*50));
		Taxes.calculateStateTaxes(marry, (new_salary * 50));
		Taxes.calculateFICA((new_salary * 50));
		float taxes = Taxes.getTaxes();

		new_income = new_salary - (new_salary * taxes);
		db->openConnection();
		String^ sql;
		sql = sql->Format("Insert into paycheck(idEmployee, Salary, Income, hours, pay_per_hour) Values('{0}', '{1}', '{2}', '{3}', '{4}');"
			,id, new_salary, new_income, hours, phsalary);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
	}
	db->closeConnection();
}

float Payroll::get_taxes(bool marry, float pay)
{
	Deductibles Taxes;
	Taxes.calculateFedTaxes(marry, pay);
	Taxes.calculateStateTaxes(marry, pay);
	Taxes.calculateFICA(pay);
	taxes = Taxes.getTaxes();
	return taxes;
}

float Payroll::updateSalary(int hours, float phsalary, int id)
{
	new_salary = hours * phsalary;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		String^ newSalary = new_salary.ToString();
		db->openConnection();
		String^ sql;
		// Storing the salary values in the database.
		sql = sql->Format("Update paycheck Set Salary = '{0}', hours = '{1}', pay_per_hour = '{2}' where idEmployee='{3}';",
			new_salary, hours, phsalary, id);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	db->closeConnection();
	return new_salary;
}

float Payroll::updateIncome(float Salary, int id)
{
	Deductibles Taxes;
	marry = getMarriage();
	Taxes.calculateFedTaxes(marry, (Salary * 50));
	Taxes.calculateStateTaxes(marry, (Salary * 50));
	Taxes.calculateFICA((Salary * 50));
	taxes = Taxes.getTaxes();

	new_income = Salary - (Salary * taxes);
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		// Storing the income values in the database.
		sql = sql->Format("Update paycheck Set Income = '{0}' where idEmployee='{1}';",
			new_income, id);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	db->closeConnection();
	return new_income;
}

int Payroll::getID(String^ fname, String^ lname)
{
	int ID;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		// reader[0],  reader[1]
		sql = sql->Format("SELECT first_name, last_name, idEmployee FROM employee where first_name='{0}' and last_name='{1}';",
			fname, lname);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read())
		{
			String^ employee_ID = reader[2]->ToString();
			ID = (int)(Convert::ToDouble(employee_ID));
		}
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	db->closeConnection();
	return ID;
}