#pragma once
#ifndef NEWEMPLOYEE_H_INCLUDED__
#define NEWEMPLOYEE_H_INCLUDED__
#include "Database.h"
#include "AddUser.h"
#include "Payroll.h"
namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class NewEmployee : public System::Windows::Forms::Form
	{
	public:
		String^ position = "0";
		double wage = 0;
		String^ married = "0";
	private: bool mouseDown;
	private: Point lastLocation;
	private: System::Windows::Forms::TextBox^  wageBox;
	public:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;

	public:

	public:

			 bool filled = false;


	public:
		NewEmployee(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  FNameField;
	private: System::Windows::Forms::TextBox^  AddrField;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^  LNameField;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  LNameLabel;
	private: System::Windows::Forms::Label^  AddressLabel;











	private: System::Windows::Forms::GroupBox^  PositionGB;
	private: System::Windows::Forms::RadioButton^  TeamLeadRadio;

	private: System::Windows::Forms::RadioButton^  WorkerRadio;




	private: System::Windows::Forms::Button^  SubmitButton;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  ZipLabel;
	private: System::Windows::Forms::TextBox^  ZipField;


	private: System::Windows::Forms::ComboBox^  StateCBox;

	private: System::Windows::Forms::Label^  StateLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  CityField;
	private: System::Windows::Forms::GroupBox^  userInfoGB;




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
			this->FNameField = (gcnew System::Windows::Forms::TextBox());
			this->AddrField = (gcnew System::Windows::Forms::TextBox());
			this->LNameField = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LNameLabel = (gcnew System::Windows::Forms::Label());
			this->AddressLabel = (gcnew System::Windows::Forms::Label());
			this->PositionGB = (gcnew System::Windows::Forms::GroupBox());
			this->TeamLeadRadio = (gcnew System::Windows::Forms::RadioButton());
			this->WorkerRadio = (gcnew System::Windows::Forms::RadioButton());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ZipLabel = (gcnew System::Windows::Forms::Label());
			this->ZipField = (gcnew System::Windows::Forms::TextBox());
			this->StateCBox = (gcnew System::Windows::Forms::ComboBox());
			this->StateLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CityField = (gcnew System::Windows::Forms::TextBox());
			this->userInfoGB = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->wageBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->PositionGB->SuspendLayout();
			this->userInfoGB->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// FNameField
			// 
			this->FNameField->Location = System::Drawing::Point(124, 41);
			this->FNameField->Margin = System::Windows::Forms::Padding(4);
			this->FNameField->Name = L"FNameField";
			this->FNameField->Size = System::Drawing::Size(181, 22);
			this->FNameField->TabIndex = 0;
			this->FNameField->TextChanged += gcnew System::EventHandler(this, &NewEmployee::FNameField_TextChanged);
			// 
			// AddrField
			// 
			this->AddrField->Location = System::Drawing::Point(459, 41);
			this->AddrField->Margin = System::Windows::Forms::Padding(4);
			this->AddrField->Name = L"AddrField";
			this->AddrField->Size = System::Drawing::Size(249, 22);
			this->AddrField->TabIndex = 1;
			this->AddrField->TextChanged += gcnew System::EventHandler(this, &NewEmployee::AddrField_TextChanged);
			// 
			// LNameField
			// 
			this->LNameField->Location = System::Drawing::Point(124, 91);
			this->LNameField->Margin = System::Windows::Forms::Padding(4);
			this->LNameField->Name = L"LNameField";
			this->LNameField->Size = System::Drawing::Size(181, 22);
			this->LNameField->TabIndex = 2;
			this->LNameField->TextChanged += gcnew System::EventHandler(this, &NewEmployee::LNameField_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"First Name";
			// 
			// LNameLabel
			// 
			this->LNameLabel->AutoSize = true;
			this->LNameLabel->Location = System::Drawing::Point(37, 100);
			this->LNameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LNameLabel->Name = L"LNameLabel";
			this->LNameLabel->Size = System::Drawing::Size(76, 17);
			this->LNameLabel->TabIndex = 4;
			this->LNameLabel->Text = L"Last Name";
			// 
			// AddressLabel
			// 
			this->AddressLabel->AutoSize = true;
			this->AddressLabel->Location = System::Drawing::Point(389, 49);
			this->AddressLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddressLabel->Name = L"AddressLabel";
			this->AddressLabel->Size = System::Drawing::Size(46, 17);
			this->AddressLabel->TabIndex = 5;
			this->AddressLabel->Text = L"Street";
			// 
			// PositionGB
			// 
			this->PositionGB->Controls->Add(this->TeamLeadRadio);
			this->PositionGB->Controls->Add(this->WorkerRadio);
			this->PositionGB->Location = System::Drawing::Point(42, 169);
			this->PositionGB->Margin = System::Windows::Forms::Padding(4);
			this->PositionGB->Name = L"PositionGB";
			this->PositionGB->Padding = System::Windows::Forms::Padding(4);
			this->PositionGB->Size = System::Drawing::Size(155, 123);
			this->PositionGB->TabIndex = 12;
			this->PositionGB->TabStop = false;
			this->PositionGB->Text = L"Position";
			// 
			// TeamLeadRadio
			// 
			this->TeamLeadRadio->AutoSize = true;
			this->TeamLeadRadio->Checked = true;
			this->TeamLeadRadio->Location = System::Drawing::Point(35, 41);
			this->TeamLeadRadio->Margin = System::Windows::Forms::Padding(4);
			this->TeamLeadRadio->Name = L"TeamLeadRadio";
			this->TeamLeadRadio->Size = System::Drawing::Size(101, 21);
			this->TeamLeadRadio->TabIndex = 4;
			this->TeamLeadRadio->TabStop = true;
			this->TeamLeadRadio->Text = L"Team Lead";
			this->TeamLeadRadio->UseVisualStyleBackColor = true;
			this->TeamLeadRadio->CheckedChanged += gcnew System::EventHandler(this, &NewEmployee::TeamLeadRadio_CheckedChanged);
			// 
			// WorkerRadio
			// 
			this->WorkerRadio->AutoSize = true;
			this->WorkerRadio->Location = System::Drawing::Point(35, 69);
			this->WorkerRadio->Margin = System::Windows::Forms::Padding(4);
			this->WorkerRadio->Name = L"WorkerRadio";
			this->WorkerRadio->Size = System::Drawing::Size(75, 21);
			this->WorkerRadio->TabIndex = 2;
			this->WorkerRadio->Text = L"Worker";
			this->WorkerRadio->UseVisualStyleBackColor = true;
			this->WorkerRadio->CheckedChanged += gcnew System::EventHandler(this, &NewEmployee::WorkerRadio_CheckedChanged);
			// 
			// SubmitButton
			// 
			this->SubmitButton->Location = System::Drawing::Point(476, 222);
			this->SubmitButton->Margin = System::Windows::Forms::Padding(4);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(100, 28);
			this->SubmitButton->TabIndex = 13;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &NewEmployee::SubmitButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(476, 272);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NewEmployee::button2_Click);
			// 
			// ZipLabel
			// 
			this->ZipLabel->AutoSize = true;
			this->ZipLabel->Location = System::Drawing::Point(381, 144);
			this->ZipLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ZipLabel->Name = L"ZipLabel";
			this->ZipLabel->Size = System::Drawing::Size(65, 17);
			this->ZipLabel->TabIndex = 11;
			this->ZipLabel->Text = L"Zip Code";
			// 
			// ZipField
			// 
			this->ZipField->Location = System::Drawing::Point(459, 138);
			this->ZipField->Margin = System::Windows::Forms::Padding(4);
			this->ZipField->Name = L"ZipField";
			this->ZipField->Size = System::Drawing::Size(179, 22);
			this->ZipField->TabIndex = 7;
			this->ZipField->TextChanged += gcnew System::EventHandler(this, &NewEmployee::ZipField_TextChanged);
			// 
			// StateCBox
			// 
			this->StateCBox->FormattingEnabled = true;
			this->StateCBox->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"Alabama - AL", L"Alaska - AK", L"Arizona - AZ",
					L"Arkansas - AR", L"California - CA", L"Colorado - CO", L"Connecticut - CT", L"Delaware - DE", L"Florida - FL", L"Georgia - GA",
					L"Hawaii - HI", L"Idaho - ID", L"Illinois - IL", L"Indiana - IN", L"Iowa - IA", L"Kansas - KS", L"Kentucky - KY", L"Louisiana - LA",
					L"Maine - ME", L"Maryland - MD", L"Massachusetts - MA", L"Michigan - MI", L"Minnesota - MN", L"Mississippi - MS", L"Missouri - MO",
					L"Montana - MT", L"Nebraska - NE", L"Nevada - NV", L"New Hampshire - NH", L"New Jersey - NJ", L"New Mexico - NM", L"New York - NY",
					L"North Carolina - NC", L"North Dakota - ND", L"Ohio - OH", L"Oklahoma - OK", L"Oregon - OR", L"Pennsylvania - PA", L"Rhode Island - RI",
					L"South Carolina - SC", L"South Dakota - SD", L"Tennessee - TN", L"Texas - TX", L"Utah - UT", L"Vermont - VT", L"Virginia - VA",
					L"Washington - WA", L"West Virginia - WV", L"Wisconsin - WI", L"Wyoming - WY"
			});
			this->StateCBox->Location = System::Drawing::Point(459, 105);
			this->StateCBox->Margin = System::Windows::Forms::Padding(4);
			this->StateCBox->Name = L"StateCBox";
			this->StateCBox->Size = System::Drawing::Size(179, 24);
			this->StateCBox->TabIndex = 15;
			this->StateCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &NewEmployee::StateCBox_SelectedIndexChanged);
			// 
			// StateLabel
			// 
			this->StateLabel->AutoSize = true;
			this->StateLabel->Location = System::Drawing::Point(393, 114);
			this->StateLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->StateLabel->Name = L"StateLabel";
			this->StateLabel->Size = System::Drawing::Size(41, 17);
			this->StateLabel->TabIndex = 16;
			this->StateLabel->Text = L"State";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(396, 76);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"City";
			// 
			// CityField
			// 
			this->CityField->Location = System::Drawing::Point(459, 73);
			this->CityField->Margin = System::Windows::Forms::Padding(4);
			this->CityField->Name = L"CityField";
			this->CityField->Size = System::Drawing::Size(179, 22);
			this->CityField->TabIndex = 17;
			this->CityField->TextChanged += gcnew System::EventHandler(this, &NewEmployee::CityField_TextChanged);
			// 
			// userInfoGB
			// 
			this->userInfoGB->Controls->Add(this->groupBox1);
			this->userInfoGB->Controls->Add(this->wageBox);
			this->userInfoGB->Controls->Add(this->label3);
			this->userInfoGB->Controls->Add(this->AddrField);
			this->userInfoGB->Controls->Add(this->button2);
			this->userInfoGB->Controls->Add(this->label2);
			this->userInfoGB->Controls->Add(this->SubmitButton);
			this->userInfoGB->Controls->Add(this->PositionGB);
			this->userInfoGB->Controls->Add(this->AddressLabel);
			this->userInfoGB->Controls->Add(this->CityField);
			this->userInfoGB->Controls->Add(this->FNameField);
			this->userInfoGB->Controls->Add(this->ZipField);
			this->userInfoGB->Controls->Add(this->LNameField);
			this->userInfoGB->Controls->Add(this->StateLabel);
			this->userInfoGB->Controls->Add(this->label1);
			this->userInfoGB->Controls->Add(this->ZipLabel);
			this->userInfoGB->Controls->Add(this->LNameLabel);
			this->userInfoGB->Controls->Add(this->StateCBox);
			this->userInfoGB->Location = System::Drawing::Point(24, 21);
			this->userInfoGB->Margin = System::Windows::Forms::Padding(4);
			this->userInfoGB->Name = L"userInfoGB";
			this->userInfoGB->Padding = System::Windows::Forms::Padding(4);
			this->userInfoGB->Size = System::Drawing::Size(764, 331);
			this->userInfoGB->TabIndex = 20;
			this->userInfoGB->TabStop = false;
			this->userInfoGB->Text = L"User Info";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(217, 169);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(155, 123);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Marriage Status";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(35, 41);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 21);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Single";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &NewEmployee::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(35, 69);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(77, 21);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"Married";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &NewEmployee::radioButton2_CheckedChanged);
			// 
			// wageBox
			// 
			this->wageBox->Location = System::Drawing::Point(459, 169);
			this->wageBox->Margin = System::Windows::Forms::Padding(4);
			this->wageBox->Name = L"wageBox";
			this->wageBox->Size = System::Drawing::Size(179, 22);
			this->wageBox->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(403, 177);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Wage";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->userInfoGB);
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(825, 400);
			this->panel1->TabIndex = 21;
			// 
			// NewEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(825, 432);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"NewEmployee";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NewEmployee::NewEmployee_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewEmployee::NewEmployee_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NewEmployee::NewEmployee_MouseUp);
			this->PositionGB->ResumeLayout(false);
			this->PositionGB->PerformLayout();
			this->userInfoGB->ResumeLayout(false);
			this->userInfoGB->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SubmitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String ^ state = StateCBox->Text;
		state = state->Substring(state->Length - 3);
		String^ address = AddrField->Text + ", " + CityField->Text + ", " + state + ", " + ZipField->Text;
		if (filled)
		{
			String^ id;
			SQLConnect^ sql = gcnew SQLConnect();
			sql->createEmployee(FNameField->Text, LNameField->Text, address, wageBox->Text, married);
			AddUser^ add = gcnew AddUser(position);
			id = sql->getLastID();
			Payroll^ pay = gcnew Payroll();
			pay->newPaycheck(0, float::Parse(wageBox->Text), int::Parse(id));
			this->Close();
			add->ShowDialog();
			
		}
		else
		{
			MessageBox::Show("Please properly fill in all fields!");
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}



private: System::Void WorkerRadio_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (WorkerRadio->Checked) {
		for each (RadioButton^ button in PositionGB->Controls)
		{
			if (button->Name != "WorkerRadio")
				button->Checked = false;
		}
		position = "1";
	}

}

private: System::Void TeamLeadRadio_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (TeamLeadRadio->Checked)
	{
		for each (RadioButton^ button in PositionGB->Controls)
		{
			if (button->Name != "TeamLeadRadio")
				button->Checked = false;
		}
		position = "0";
	}

}
private: System::Void FNameField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void LNameField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void PassField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void ConfirmField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void AddrField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void CityField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void StateCBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void ZipField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(ZipField->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		ZipField->Text = "";
	}
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void NewEmployee_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}

private: System::Void NewEmployee_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();
	}
}
private: System::Void NewEmployee_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
married = "0";
}	
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	married = "1";
}
};
}
#endif