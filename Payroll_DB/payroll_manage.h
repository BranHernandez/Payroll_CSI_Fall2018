#pragma once
#include "Payroll.h"
#include "Database.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for payroll_form
	/// </summary>
	public ref class payroll_manage : public System::Windows::Forms::Form
	{
	private: 
		bool check = false;
		bool mouseDown = false;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  address_Label;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  date_Label;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  taxes_Label;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  salary_label2;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  hours_label;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  rate_Label;
	private: System::Windows::Forms::Label^  label9;
			 Point lastLocation;
	public:
		payroll_manage(void)
		{

			InitializeComponent();
			SQLConnect^ db = gcnew SQLConnect();
			try {
				db->openConnection();
				String^ sql = "Select first_name, last_name, Salary from employee inner join paycheck on employee.idEmployee=paycheck.idEmployee;";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					String^ field = field->Format("{0} {1}", reader[0]->ToString(), reader[1]->ToString());
					SelectionMenu->Items->Add(field);
				}
			}
			catch (MySqlException^ err) {
				MessageBox::Show(err->ToString());
			}
			db->closeConnection();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~payroll_manage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;




	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  Salary_Label;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  income_Label;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  Name_Label;


	private: System::Windows::Forms::Label^  label6;








	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  SelectionMenu;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(payroll_manage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->date_Label = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->address_Label = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Salary_Label = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Name_Label = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->income_Label = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SelectionMenu = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rate_Label = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->hours_label = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->taxes_Label = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->salary_label2 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->closePage = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Paid per-hour:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 62);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Number of hours:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 26);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &payroll_manage::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 59);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &payroll_manage::textBox2_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(23, 77);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(308, 105);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"User Inputs";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &payroll_manage::groupBox1_Enter);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->date_Label);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->address_Label);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->Salary_Label);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->Name_Label);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(399, 182);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(404, 162);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Paycheck";
			// 
			// date_Label
			// 
			this->date_Label->AutoSize = true;
			this->date_Label->Location = System::Drawing::Point(274, 51);
			this->date_Label->Name = L"date_Label";
			this->date_Label->Size = System::Drawing::Size(36, 17);
			this->date_Label->TabIndex = 19;
			this->date_Label->Text = L"date";
			this->date_Label->Click += gcnew System::EventHandler(this, &payroll_manage::date_Label_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(201, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Pay date:";
			// 
			// address_Label
			// 
			this->address_Label->AutoSize = true;
			this->address_Label->Location = System::Drawing::Point(105, 23);
			this->address_Label->Name = L"address_Label";
			this->address_Label->Size = System::Drawing::Size(59, 17);
			this->address_Label->TabIndex = 17;
			this->address_Label->Text = L"address";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Address:";
			// 
			// Salary_Label
			// 
			this->Salary_Label->AutoSize = true;
			this->Salary_Label->Location = System::Drawing::Point(115, 119);
			this->Salary_Label->Name = L"Salary_Label";
			this->Salary_Label->Size = System::Drawing::Size(35, 17);
			this->Salary_Label->TabIndex = 14;
			this->Salary_Label->Text = L"paid";
			this->Salary_Label->Click += gcnew System::EventHandler(this, &payroll_manage::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(40, 119);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 17);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Salary:";
			this->label10->Click += gcnew System::EventHandler(this, &payroll_manage::label10_Click);
			// 
			// Name_Label
			// 
			this->Name_Label->AutoSize = true;
			this->Name_Label->Location = System::Drawing::Point(115, 87);
			this->Name_Label->Name = L"Name_Label";
			this->Name_Label->Size = System::Drawing::Size(45, 17);
			this->Name_Label->TabIndex = 14;
			this->Name_Label->Text = L"Name";
			this->Name_Label->Click += gcnew System::EventHandler(this, &payroll_manage::Name_Label_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Employee:";
			// 
			// income_Label
			// 
			this->income_Label->AutoSize = true;
			this->income_Label->Location = System::Drawing::Point(265, 82);
			this->income_Label->Name = L"income_Label";
			this->income_Label->Size = System::Drawing::Size(53, 17);
			this->income_Label->TabIndex = 14;
			this->income_Label->Text = L"income";
			this->income_Label->Click += gcnew System::EventHandler(this, &payroll_manage::Id_Label_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(201, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Income:";
			this->label8->Click += gcnew System::EventHandler(this, &payroll_manage::label8_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(29, 22);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(70, 17);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Employee";
			this->label16->Click += gcnew System::EventHandler(this, &payroll_manage::label16_Click);
			// 
			// SelectionMenu
			// 
			this->SelectionMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SelectionMenu->FormattingEnabled = true;
			this->SelectionMenu->Location = System::Drawing::Point(124, 19);
			this->SelectionMenu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->SelectionMenu->Name = L"SelectionMenu";
			this->SelectionMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SelectionMenu->Size = System::Drawing::Size(183, 24);
			this->SelectionMenu->TabIndex = 18;
			this->SelectionMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &payroll_manage::SelectionMenu_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->SelectionMenu);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Location = System::Drawing::Point(0, 34);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(873, 384);
			this->panel1->TabIndex = 20;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->rate_Label);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->hours_label);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->taxes_Label);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->salary_label2);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->income_Label);
			this->groupBox4->Location = System::Drawing::Point(399, 22);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(404, 131);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Earings";
			// 
			// rate_Label
			// 
			this->rate_Label->AutoSize = true;
			this->rate_Label->Location = System::Drawing::Point(121, 22);
			this->rate_Label->Name = L"rate_Label";
			this->rate_Label->Size = System::Drawing::Size(33, 17);
			this->rate_Label->TabIndex = 23;
			this->rate_Label->Text = L"rate";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 17);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Pay rate:";
			// 
			// hours_label
			// 
			this->hours_label->AutoSize = true;
			this->hours_label->Location = System::Drawing::Point(121, 50);
			this->hours_label->Name = L"hours_label";
			this->hours_label->Size = System::Drawing::Size(44, 17);
			this->hours_label->TabIndex = 21;
			this->hours_label->Text = L"hours";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(33, 50);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(87, 17);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Work Hours:";
			// 
			// taxes_Label
			// 
			this->taxes_Label->AutoSize = true;
			this->taxes_Label->Location = System::Drawing::Point(121, 82);
			this->taxes_Label->Name = L"taxes_Label";
			this->taxes_Label->Size = System::Drawing::Size(41, 17);
			this->taxes_Label->TabIndex = 19;
			this->taxes_Label->Text = L"taxes";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(36, 82);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 17);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Taxes:";
			this->label14->Click += gcnew System::EventHandler(this, &payroll_manage::label14_Click_1);
			// 
			// salary_label2
			// 
			this->salary_label2->AutoSize = true;
			this->salary_label2->Location = System::Drawing::Point(265, 55);
			this->salary_label2->Name = L"salary_label2";
			this->salary_label2->Size = System::Drawing::Size(46, 17);
			this->salary_label2->TabIndex = 17;
			this->salary_label2->Text = L"salary";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(201, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 17);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Salary:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(118, 253);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 48);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Edit Paycheck";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &payroll_manage::button2_Click_1);
			// 
			// closePage
			// 
			this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
			this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closePage->Location = System::Drawing::Point(834, 0);
			this->closePage->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->closePage->Name = L"closePage";
			this->closePage->Size = System::Drawing::Size(40, 32);
			this->closePage->TabIndex = 21;
			this->closePage->TabStop = false;
			this->closePage->Click += gcnew System::EventHandler(this, &payroll_manage::closePage_Click);
			// 
			// payroll_manage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(875, 418);
			this->Controls->Add(this->closePage);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"payroll_manage";
			this->Text = L"payroll_form";
			this->Load += gcnew System::EventHandler(this, &payroll_manage::payroll_form_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &payroll_manage::payroll_form_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &payroll_manage::payroll_form_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &payroll_manage::payroll_form_MouseUp);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void payroll_form_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}

private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {

}


private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void SelectionMenu_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	Payroll payroll_obj;
	//Current date of the paycheck.
	DateTime Time = DateTime::Now;
	int year = Time.Year;
	int month = Time.Month;
	int day = Time.Day;

	date_Label->Text = (month + "/" + day + "/" + year);

	
	//Pulls our name from the ComboBox and formats it for our statement
	String^ fullname = SelectionMenu->Text;
	float salary;
	array< String^ >^ names = gcnew array< String^ >(2);
	names = fullname->Split(' ');
	Name_Label->Text = fullname;

	//Query our data from the database
	SQLConnect^ db = gcnew SQLConnect();
	try {
		db->openConnection();
		String^ query = query->Format("Select first_name, last_name, address, Salary, Income, hours, pay_per_hour from employee inner join paycheck on employee.idEmployee=paycheck.idEmployee where first_name='{0}' and last_name='{1}';", 
			names[0], names[1]);
		MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();

		



		int ID = payroll_obj.getID(names[0], names[1]);
		
		while (reader->Read()) {
			float salary = (float)(Convert::ToDouble(reader[3]->ToString()));
			bool marry = payroll_obj.getMarriage();
			float taxes = payroll_obj.get_taxes(marry, salary);


			address_Label->Text = reader[2]->ToString();
			Salary_Label->Text = ("$ " + reader[3]->ToString());
			salary_label2->Text = ("$ " + reader[3]->ToString());
			income_Label->Text = ("$ " + reader[4]->ToString());
			taxes_Label->Text = ("$ " + (salary*taxes));
			hours_label->Text = reader[5]->ToString();
			rate_Label->Text = ("$ " + reader[6]->ToString());
		}
	}
	catch (MySqlException^ err) {
		MessageBox::Show(err->ToString());
	}
	db->closeConnection();
}
private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void payroll_form_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void payroll_form_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();
	}
}

private: System::Void payroll_form_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}

//Code for the edit button
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Payroll payroll_obj;
	String^ fullname = SelectionMenu->Text;
	String^ num_of_hours = textBox2->Text;
	String^ wages = textBox1->Text;
	
	if (num_of_hours != "" && wages != "" && fullname != "") {

		array< String^ >^ names = gcnew array< String^ >(2);
		names = fullname->Split(' ');

		//Values of the input boxes that will calculate the Salary
		float paid = (float)(Convert::ToDouble(wages));
		int hours = (int)(Convert::ToDouble(num_of_hours));

		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ query = query->Format("SELECT first_name, last_name, idEmployee from employee where first_name='{0}' and last_name='{1}';",
				names[0], names[1]);
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read()) {
				String^ id = reader[2]->ToString();
				int Id = (int)(Convert::ToDouble(id));

				//Payroll functions that will calculate and store the salary and income values in the database.
				float Salary = payroll_obj.updateSalary(hours, paid, Id);
				float Income = payroll_obj.updateIncome(Salary, Id);

				bool marry = payroll_obj.getMarriage();
				float taxes = payroll_obj.get_taxes(marry, Salary);

				//Setting the new Paycheck values to the payroll form.
				Salary_Label->Text = ("$ " + Salary.ToString());
				salary_label2->Text = ("$ " + Salary.ToString());
				income_Label->Text = ("$ " + Income.ToString());
				hours_label->Text = hours.ToString();
				taxes_Label->Text = ("$ " + (Salary*taxes));
				rate_Label->Text = ("$ " + paid.ToString());
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();
	}
	else 
	{
		MessageBox::Show("Error: all textboxes need to be fill in.");
	}
}
private: System::Void Name_Label_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Id_Label_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void date_Label_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label14_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
