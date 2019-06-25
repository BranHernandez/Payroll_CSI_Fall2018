#pragma once
#ifndef NEWUSER_H_INCLUDED__
#define NEWUSER_H_INCLUDED__
#include "Database.h"
#include "Payroll.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewUser
	/// </summary>
	public ref class NewUser : public System::Windows::Forms::Form
	{
	private: bool mouseDown;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  AddrField;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  AddressLabel;
	private: System::Windows::Forms::TextBox^  CityField;
	private: System::Windows::Forms::TextBox^  FNameField;
	private: System::Windows::Forms::TextBox^  userField;
	private: System::Windows::Forms::Label^  userLabel;
	private: System::Windows::Forms::TextBox^  ZipField;
	private: System::Windows::Forms::Label^  PassLabel;
	private: System::Windows::Forms::TextBox^  LNameField;
	private: System::Windows::Forms::TextBox^  PassField;
	private: System::Windows::Forms::Label^  StateLabel;
	private: System::Windows::Forms::TextBox^  ConfirmField;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  ConfirmPassLabel;
	private: System::Windows::Forms::Label^  ZipLabel;
	private: System::Windows::Forms::Label^  LNameLabel;
	private: System::Windows::Forms::ComboBox^  StateCBox;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  wageField;
	private: System::Windows::Forms::CheckBox^  checkBox1;


	private: Point lastLocation;
			 String^ married = "0";
	public:
		NewUser(void)
		{
			InitializeComponent();
		}

	private:
		bool check = false;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewUser()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NewUser::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->wageField = (gcnew System::Windows::Forms::TextBox());
			this->AddrField = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddressLabel = (gcnew System::Windows::Forms::Label());
			this->CityField = (gcnew System::Windows::Forms::TextBox());
			this->FNameField = (gcnew System::Windows::Forms::TextBox());
			this->userField = (gcnew System::Windows::Forms::TextBox());
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->ZipField = (gcnew System::Windows::Forms::TextBox());
			this->PassLabel = (gcnew System::Windows::Forms::Label());
			this->LNameField = (gcnew System::Windows::Forms::TextBox());
			this->PassField = (gcnew System::Windows::Forms::TextBox());
			this->StateLabel = (gcnew System::Windows::Forms::Label());
			this->ConfirmField = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ConfirmPassLabel = (gcnew System::Windows::Forms::Label());
			this->ZipLabel = (gcnew System::Windows::Forms::Label());
			this->LNameLabel = (gcnew System::Windows::Forms::Label());
			this->StateCBox = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->wageField);
			this->panel1->Controls->Add(this->AddrField);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->AddressLabel);
			this->panel1->Controls->Add(this->CityField);
			this->panel1->Controls->Add(this->FNameField);
			this->panel1->Controls->Add(this->userField);
			this->panel1->Controls->Add(this->userLabel);
			this->panel1->Controls->Add(this->ZipField);
			this->panel1->Controls->Add(this->PassLabel);
			this->panel1->Controls->Add(this->LNameField);
			this->panel1->Controls->Add(this->PassField);
			this->panel1->Controls->Add(this->StateLabel);
			this->panel1->Controls->Add(this->ConfirmField);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->ConfirmPassLabel);
			this->panel1->Controls->Add(this->ZipLabel);
			this->panel1->Controls->Add(this->LNameLabel);
			this->panel1->Controls->Add(this->StateCBox);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(895, 380);
			this->panel1->TabIndex = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label1->Location = System::Drawing::Point(475, 159);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 25);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Salary Per Hour";
			// 
			// wageField
			// 
			this->wageField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wageField->Location = System::Drawing::Point(635, 154);
			this->wageField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->wageField->Name = L"wageField";
			this->wageField->Size = System::Drawing::Size(213, 34);
			this->wageField->TabIndex = 65;
			// 
			// AddrField
			// 
			this->AddrField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddrField->Location = System::Drawing::Point(168, 111);
			this->AddrField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AddrField->Name = L"AddrField";
			this->AddrField->Size = System::Drawing::Size(261, 34);
			this->AddrField->TabIndex = 48;
			this->AddrField->TextChanged += gcnew System::EventHandler(this, &NewUser::AddrField_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label2->Location = System::Drawing::Point(119, 165);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 25);
			this->label2->TabIndex = 58;
			this->label2->Text = L"City";
			// 
			// AddressLabel
			// 
			this->AddressLabel->AutoSize = true;
			this->AddressLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->AddressLabel->Location = System::Drawing::Point(105, 116);
			this->AddressLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddressLabel->Name = L"AddressLabel";
			this->AddressLabel->Size = System::Drawing::Size(60, 25);
			this->AddressLabel->TabIndex = 52;
			this->AddressLabel->Text = L"Street";
			// 
			// CityField
			// 
			this->CityField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityField->Location = System::Drawing::Point(168, 154);
			this->CityField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CityField->Name = L"CityField";
			this->CityField->Size = System::Drawing::Size(211, 34);
			this->CityField->TabIndex = 57;
			this->CityField->TextChanged += gcnew System::EventHandler(this, &NewUser::CityField_TextChanged);
			// 
			// FNameField
			// 
			this->FNameField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FNameField->Location = System::Drawing::Point(168, 23);
			this->FNameField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->FNameField->Name = L"FNameField";
			this->FNameField->Size = System::Drawing::Size(211, 34);
			this->FNameField->TabIndex = 47;
			this->FNameField->TextChanged += gcnew System::EventHandler(this, &NewUser::FNameField_TextChanged);
			// 
			// userField
			// 
			this->userField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userField->Location = System::Drawing::Point(635, 23);
			this->userField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->userField->Name = L"userField";
			this->userField->Size = System::Drawing::Size(213, 34);
			this->userField->TabIndex = 63;
			this->userField->TextChanged += gcnew System::EventHandler(this, &NewUser::userField_TextChanged);
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->userLabel->Location = System::Drawing::Point(521, 28);
			this->userLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(97, 25);
			this->userLabel->TabIndex = 64;
			this->userLabel->Text = L"Username";
			// 
			// ZipField
			// 
			this->ZipField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZipField->Location = System::Drawing::Point(168, 240);
			this->ZipField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ZipField->Name = L"ZipField";
			this->ZipField->Size = System::Drawing::Size(211, 34);
			this->ZipField->TabIndex = 53;
			this->ZipField->TextChanged += gcnew System::EventHandler(this, &NewUser::ZipField_TextChanged);
			// 
			// PassLabel
			// 
			this->PassLabel->AutoSize = true;
			this->PassLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->PassLabel->Location = System::Drawing::Point(521, 78);
			this->PassLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PassLabel->Name = L"PassLabel";
			this->PassLabel->Size = System::Drawing::Size(91, 25);
			this->PassLabel->TabIndex = 61;
			this->PassLabel->Text = L"Password";
			// 
			// LNameField
			// 
			this->LNameField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LNameField->Location = System::Drawing::Point(168, 66);
			this->LNameField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->LNameField->Name = L"LNameField";
			this->LNameField->Size = System::Drawing::Size(211, 34);
			this->LNameField->TabIndex = 49;
			this->LNameField->TextChanged += gcnew System::EventHandler(this, &NewUser::LNameField_TextChanged);
			// 
			// PassField
			// 
			this->PassField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassField->Location = System::Drawing::Point(635, 66);
			this->PassField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->PassField->Name = L"PassField";
			this->PassField->PasswordChar = '*';
			this->PassField->Size = System::Drawing::Size(213, 34);
			this->PassField->TabIndex = 59;
			this->PassField->TextChanged += gcnew System::EventHandler(this, &NewUser::PassField_TextChanged);
			// 
			// StateLabel
			// 
			this->StateLabel->AutoSize = true;
			this->StateLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->StateLabel->Location = System::Drawing::Point(105, 206);
			this->StateLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->StateLabel->Name = L"StateLabel";
			this->StateLabel->Size = System::Drawing::Size(53, 25);
			this->StateLabel->TabIndex = 56;
			this->StateLabel->Text = L"State";
			// 
			// ConfirmField
			// 
			this->ConfirmField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmField->Location = System::Drawing::Point(635, 110);
			this->ConfirmField->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ConfirmField->Name = L"ConfirmField";
			this->ConfirmField->PasswordChar = '*';
			this->ConfirmField->Size = System::Drawing::Size(213, 34);
			this->ConfirmField->TabIndex = 60;
			this->ConfirmField->TextChanged += gcnew System::EventHandler(this, &NewUser::ConfirmField_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label3->Location = System::Drawing::Point(61, 31);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 25);
			this->label3->TabIndex = 50;
			this->label3->Text = L"First Name";
			// 
			// ConfirmPassLabel
			// 
			this->ConfirmPassLabel->AutoSize = true;
			this->ConfirmPassLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->ConfirmPassLabel->Location = System::Drawing::Point(444, 116);
			this->ConfirmPassLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ConfirmPassLabel->Name = L"ConfirmPassLabel";
			this->ConfirmPassLabel->Size = System::Drawing::Size(163, 25);
			this->ConfirmPassLabel->TabIndex = 62;
			this->ConfirmPassLabel->Text = L"Re-Type Password";
			// 
			// ZipLabel
			// 
			this->ZipLabel->AutoSize = true;
			this->ZipLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->ZipLabel->Location = System::Drawing::Point(68, 246);
			this->ZipLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ZipLabel->Name = L"ZipLabel";
			this->ZipLabel->Size = System::Drawing::Size(88, 25);
			this->ZipLabel->TabIndex = 54;
			this->ZipLabel->Text = L"Zip Code";
			// 
			// LNameLabel
			// 
			this->LNameLabel->AutoSize = true;
			this->LNameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->LNameLabel->Location = System::Drawing::Point(64, 71);
			this->LNameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LNameLabel->Name = L"LNameLabel";
			this->LNameLabel->Size = System::Drawing::Size(100, 25);
			this->LNameLabel->TabIndex = 51;
			this->LNameLabel->Text = L"Last Name";
			// 
			// StateCBox
			// 
			this->StateCBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StateCBox->FormattingEnabled = true;
			this->StateCBox->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"Florida - FL", L"Georgia - GA", L"Hawaii - HI",
					L"Idaho - ID", L"Illinois - IL", L"Indiana - IN", L"Iowa - IA", L"Kansas - KS", L"Kentucky - KY", L"Louisiana - LA", L"Maine - ME",
					L"Maryland - MD", L"Massachusetts - MA", L"Michigan - MI", L"Minnesota - MN", L"Mississippi - MS", L"Missouri - MO", L"Montana - MT",
					L"Nebraska - NE", L"Nevada - NV", L"New Hampshire - NH", L"New Jersey - NJ", L"New Mexico - NM", L"New York - NY"
			});
			this->StateCBox->Location = System::Drawing::Point(168, 197);
			this->StateCBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->StateCBox->Name = L"StateCBox";
			this->StateCBox->Size = System::Drawing::Size(211, 36);
			this->StateCBox->TabIndex = 55;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button2->Location = System::Drawing::Point(687, 245);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 41);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &NewUser::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(582, 245);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 41);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &NewUser::button1_Click_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->checkBox1->Location = System::Drawing::Point(635, 202);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(101, 29);
			this->checkBox1->TabIndex = 67;
			this->checkBox1->Text = L"Married";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &NewUser::checkBox1_CheckedChanged);
			// 
			// NewUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(895, 406);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"NewUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NewUser";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NewUser::NewUser_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NewUser::NewUser_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NewUser::NewUser_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void FNameField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void LNameField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void userField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void PassField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void ConfirmField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void AddrField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void CityField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void ZipField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void wageBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void NewUser_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void NewUser_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();

	}
}
private: System::Void NewUser_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ state = StateCBox->Text;
	state = state->Substring(state->Length - 3);
	MessageBox::Show(state);
	String^ address = AddrField->Text + ", " + CityField->Text + ", " + state + ", " + ZipField->Text;
	if (check)
	{
		SQLConnect^ sql = gcnew SQLConnect();
		sql->createEmployee(FNameField->Text, LNameField->Text, address, wageField->Text, married);
		sql->createUser(userField->Text, PassField->Text, "0");
		String^ id = sql->getLastID();
		Payroll^ pay = gcnew Payroll();
		pay->newPaycheck(0, float::Parse(wageField->Text), int::Parse(id));
		this->Close();
	}
	else
	{
		MessageBox::Show("Please properly fill in all fields!");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked) {
		married = "1";
	}
	else {
		married = "0";
	}
}
};
}
#endif