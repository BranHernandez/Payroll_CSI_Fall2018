#pragma once
#include "Database.h"
namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Benefits
	/// </summary>
	public ref class BenefitsForm : public System::Windows::Forms::Form
	{
	public:
		BenefitsForm(void)
		{
			InitializeComponent();
			SQLConnect^ db = gcnew SQLConnect();
			try {	
				db->openConnection();
				String^ sql = "Select idEmployee, first_name, last_name from employee;";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					String^ field = field->Format("{0}: {1} {2}", reader[0]->ToString(), reader[1]->ToString(), reader[2]->ToString());
					SelectionMenu->Items->Add(field);
				}	
			}
			catch (MySqlException^ err) {
				MessageBox::Show(err->ToString());
			}
			db->closeConnection();
		}

		BenefitsForm(String^ ID)
		{ 
			
			InitializeComponent();
			//Pass employee's ID to query their data from the database. Unsure if String^ or int is correct for a primary key
			//employeeID = ID;
			/*Implement this query
			SELECT firstName, lastName
			FROM employees
			WHERE employees.id = employeeID
			Put those strings into Name_Label
			*/

			//Need query to get gross income as well -- unsure which table this will be in
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BenefitsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  OK_Button;
	private: System::Windows::Forms::Button^  Cancel_Button;
	private: System::Windows::Forms::Button^  Apply_Button;

	private: System::Windows::Forms::Label^  Name_Label;
	private: System::Windows::Forms::Label^  Gross_Income_Label;
	private: System::Windows::Forms::Label^  Medical_Cost_Label;
	private: System::Windows::Forms::Label^  Net_Income_Label;




	protected:

	private:
		/// <summary>
		double totalCostOfInsurance;
		String^ employeeID;

	private: System::Windows::Forms::Label^  New_Cost_Label;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  SelectionMenu;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;

			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BenefitsForm::typeid));
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->OK_Button = (gcnew System::Windows::Forms::Button());
				 this->Cancel_Button = (gcnew System::Windows::Forms::Button());
				 this->Apply_Button = (gcnew System::Windows::Forms::Button());
				 this->Name_Label = (gcnew System::Windows::Forms::Label());
				 this->Gross_Income_Label = (gcnew System::Windows::Forms::Label());
				 this->Medical_Cost_Label = (gcnew System::Windows::Forms::Label());
				 this->Net_Income_Label = (gcnew System::Windows::Forms::Label());
				 this->New_Cost_Label = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->SelectionMenu = (gcnew System::Windows::Forms::ComboBox());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->closePage = (gcnew System::Windows::Forms::PictureBox());
				 this->groupBox1->SuspendLayout();
				 this->panel1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(67, 29);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(87, 13);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Employee Name:";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(67, 52);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(78, 13);
				 this->label2->TabIndex = 1;
				 this->label2->Text = L"Gross Income: ";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(67, 75);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(121, 13);
				 this->label3->TabIndex = 2;
				 this->label3->Text = L"Medical Insurance Tier: ";
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"No Medical Coverage", L"Bronze", L"Silver", L"Gold" });
				 this->comboBox1->Location = System::Drawing::Point(194, 75);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->comboBox1->Size = System::Drawing::Size(138, 21);
				 this->comboBox1->TabIndex = 3;
				 this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &BenefitsForm::comboBox1_SelectedIndexChanged);
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(67, 124);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(132, 13);
				 this->label4->TabIndex = 4;
				 this->label4->Text = L"Cost of Medical Coverage:";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(67, 147);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(169, 13);
				 this->label5->TabIndex = 5;
				 this->label5->Text = L"Net Income after Cost of Benefits: ";
				 // 
				 // OK_Button
				 // 
				 this->OK_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->OK_Button->Location = System::Drawing::Point(27, 275);
				 this->OK_Button->Name = L"OK_Button";
				 this->OK_Button->Size = System::Drawing::Size(75, 23);
				 this->OK_Button->TabIndex = 6;
				 this->OK_Button->Text = L"OK";
				 this->OK_Button->UseVisualStyleBackColor = true;
				 this->OK_Button->Click += gcnew System::EventHandler(this, &BenefitsForm::OK_Button_Click);
				 // 
				 // Cancel_Button
				 // 
				 this->Cancel_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->Cancel_Button->Location = System::Drawing::Point(108, 275);
				 this->Cancel_Button->Name = L"Cancel_Button";
				 this->Cancel_Button->Size = System::Drawing::Size(75, 23);
				 this->Cancel_Button->TabIndex = 7;
				 this->Cancel_Button->Text = L"Cancel";
				 this->Cancel_Button->UseVisualStyleBackColor = true;
				 this->Cancel_Button->Click += gcnew System::EventHandler(this, &BenefitsForm::Cancel_Button_Click);
				 // 
				 // Apply_Button
				 // 
				 this->Apply_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->Apply_Button->Location = System::Drawing::Point(189, 275);
				 this->Apply_Button->Name = L"Apply_Button";
				 this->Apply_Button->Size = System::Drawing::Size(75, 23);
				 this->Apply_Button->TabIndex = 8;
				 this->Apply_Button->Text = L"Apply";
				 this->Apply_Button->UseVisualStyleBackColor = true;
				 this->Apply_Button->Click += gcnew System::EventHandler(this, &BenefitsForm::Apply_Button_Click);
				 // 
				 // Name_Label
				 // 
				 this->Name_Label->AutoSize = true;
				 this->Name_Label->Location = System::Drawing::Point(156, 29);
				 this->Name_Label->Name = L"Name_Label";
				 this->Name_Label->Size = System::Drawing::Size(35, 13);
				 this->Name_Label->TabIndex = 9;
				 this->Name_Label->Text = L"Name";
				 // 
				 // Gross_Income_Label
				 // 
				 this->Gross_Income_Label->AutoSize = true;
				 this->Gross_Income_Label->Location = System::Drawing::Point(151, 52);
				 this->Gross_Income_Label->Name = L"Gross_Income_Label";
				 this->Gross_Income_Label->Size = System::Drawing::Size(34, 13);
				 this->Gross_Income_Label->TabIndex = 10;
				 this->Gross_Income_Label->Text = L"Gross";
				 // 
				 // Medical_Cost_Label
				 // 
				 this->Medical_Cost_Label->AutoSize = true;
				 this->Medical_Cost_Label->Location = System::Drawing::Point(199, 124);
				 this->Medical_Cost_Label->Name = L"Medical_Cost_Label";
				 this->Medical_Cost_Label->Size = System::Drawing::Size(78, 13);
				 this->Medical_Cost_Label->TabIndex = 11;
				 this->Medical_Cost_Label->Text = L"Insurance Cost";
				 // 
				 // Net_Income_Label
				 // 
				 this->Net_Income_Label->AutoSize = true;
				 this->Net_Income_Label->Location = System::Drawing::Point(237, 147);
				 this->Net_Income_Label->Name = L"Net_Income_Label";
				 this->Net_Income_Label->Size = System::Drawing::Size(62, 13);
				 this->Net_Income_Label->TabIndex = 12;
				 this->Net_Income_Label->Text = L"Net Income";
				 // 
				 // New_Cost_Label
				 // 
				 this->New_Cost_Label->AutoSize = true;
				 this->New_Cost_Label->Location = System::Drawing::Point(191, 99);
				 this->New_Cost_Label->Name = L"New_Cost_Label";
				 this->New_Cost_Label->Size = System::Drawing::Size(76, 13);
				 this->New_Cost_Label->TabIndex = 13;
				 this->New_Cost_Label->Text = L"New Selection";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(67, 99);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(115, 13);
				 this->label6->TabIndex = 14;
				 this->label6->Text = L"Cost of New Selection:";
				 // 
				 // SelectionMenu
				 // 
				 this->SelectionMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->SelectionMenu->FormattingEnabled = true;
				 this->SelectionMenu->Location = System::Drawing::Point(298, 13);
				 this->SelectionMenu->Name = L"SelectionMenu";
				 this->SelectionMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->SelectionMenu->Size = System::Drawing::Size(138, 21);
				 this->SelectionMenu->TabIndex = 15;
				 this->SelectionMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &BenefitsForm::SelectionMenu_SelectedIndexChanged);
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->label1);
				 this->groupBox1->Controls->Add(this->label2);
				 this->groupBox1->Controls->Add(this->label6);
				 this->groupBox1->Controls->Add(this->label3);
				 this->groupBox1->Controls->Add(this->New_Cost_Label);
				 this->groupBox1->Controls->Add(this->comboBox1);
				 this->groupBox1->Controls->Add(this->Net_Income_Label);
				 this->groupBox1->Controls->Add(this->label4);
				 this->groupBox1->Controls->Add(this->Medical_Cost_Label);
				 this->groupBox1->Controls->Add(this->label5);
				 this->groupBox1->Controls->Add(this->Gross_Income_Label);
				 this->groupBox1->Controls->Add(this->Name_Label);
				 this->groupBox1->Location = System::Drawing::Point(38, 44);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(369, 185);
				 this->groupBox1->TabIndex = 16;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Info";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(239, 16);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(53, 13);
				 this->label7->TabIndex = 17;
				 this->label7->Text = L"Employee";
				 // 
				 // panel1
				 // 
				 this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->panel1->Controls->Add(this->groupBox1);
				 this->panel1->Controls->Add(this->label7);
				 this->panel1->Controls->Add(this->OK_Button);
				 this->panel1->Controls->Add(this->Cancel_Button);
				 this->panel1->Controls->Add(this->SelectionMenu);
				 this->panel1->Controls->Add(this->Apply_Button);
				 this->panel1->Location = System::Drawing::Point(0, 27);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(505, 317);
				 this->panel1->TabIndex = 18;
				 // 
				 // closePage
				 // 
				 this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
				 this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->closePage->Location = System::Drawing::Point(473, 0);
				 this->closePage->Name = L"closePage";
				 this->closePage->Size = System::Drawing::Size(30, 26);
				 this->closePage->TabIndex = 19;
				 this->closePage->TabStop = false;
				 this->closePage->Click += gcnew System::EventHandler(this, &BenefitsForm::closePage_Click);
				 // 
				 // BenefitsForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
					 static_cast<System::Int32>(static_cast<System::Byte>(38)));
				 this->ClientSize = System::Drawing::Size(504, 343);
				 this->Controls->Add(this->closePage);
				 this->Controls->Add(this->panel1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				 this->Name = L"BenefitsForm";
				 this->Text = L"Benefits";
				 this->Load += gcnew System::EventHandler(this, &BenefitsForm::BenefitsForm_Load);
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->panel1->ResumeLayout(false);
				 this->panel1->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private: System::Void OK_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		//DATABASE PLACEHOLDER: Query to commit changes to cost of benefits 
		BenefitsForm::Hide();
	}
	private: System::Void Cancel_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		BenefitsForm::Hide();
	}
	private: System::Void Apply_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		//DATABASE PLACEHOLDER: Query to commit changes to cost of benefits / gross income
		MessageBox::Show("Employee's benefit settings saved ", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		this->Medical_Cost_Label->Text = "$" + Convert::ToString(totalCostOfInsurance);
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		switch (comboBox1->SelectedIndex)
		{
		case 0:
			totalCostOfInsurance = 0;
			this->New_Cost_Label->Text = "$" + Convert::ToString(totalCostOfInsurance);
			break;
		case 1:
			totalCostOfInsurance = 90.08;
			this->New_Cost_Label->Text = "$" + Convert::ToString(totalCostOfInsurance);
			break;
		case 2:
			totalCostOfInsurance = 90.08 * 1.5;
			this->New_Cost_Label->Text = "$" + Convert::ToString(totalCostOfInsurance);
			break;
		case 3:
			totalCostOfInsurance = 90.08 * 2.0;
			this->New_Cost_Label->Text = "$" + Convert::ToString(totalCostOfInsurance);
			break;
		default:
			totalCostOfInsurance = 0;
			this->New_Cost_Label->Text = " ";
		}
	}
	private: System::Void BenefitsForm_Load(System::Object^  sender, System::EventArgs^  e) {
		totalCostOfInsurance = 0;
		this->Name_Label->Text = "Name";
		this->Gross_Income_Label->Text = "Gross";
		this->New_Cost_Label->Text = " ";
		this->Medical_Cost_Label->Text = "Med Cost";
		this->Net_Income_Label->Text = "Net";
	}
	private: System::Void SelectionMenu_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		//Pulls our name from the ComboBox and formats it for our statement
		String^ name = SelectionMenu->Text;
		array< String^ >^ names = gcnew array< String^ >(3);
		names = name->Split(' ');
		names[0] = names[0]->TrimEnd(':');            //This gives us the employee id
		name = name->Substring(name->IndexOf(":") + 1);	//Trims the id off the name
		Name_Label->Text = name;
		
		//Query our data from the database
		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ query = query->Format("Select wages from employee where idEmployee={0}", names[0]);
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				Gross_Income_Label->Text = reader[0]->ToString();
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
};
}

