#pragma once
#ifndef USERLOGIN_H_INCLUDED__
#define USERLOGIN_H_INCLUDED__
#include "Database.h"
#include "DbTest.h"
#include "MenuForm.h"
#include "NewUser.h"
#include "EmployeeMenu.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for User_Login
	/// </summary>
	public ref class User_Login : public System::Windows::Forms::Form
	{
	public: String^ username;

	private: System::Windows::Forms::Timer^  animTimer;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Label^  label1;
	private: bool mouseDown;
	private: Point lastLocation;
	private: int fadeCounter;
	private: System::Windows::Forms::PictureBox^  LoginButton;
	private: System::Windows::Forms::Panel^  panel1;
	public: String^ name;
	public:
		User_Login(void)
		{
			InitializeComponent();
			this->TransparencyKey = Color::LightCoral;
			fadeCounter = 0;
			animTimer->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~User_Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  RegisterButton;
	private: System::Windows::Forms::TextBox^  UserField;
	private: System::Windows::Forms::TextBox^  passField;
	private: void logoAnim(Object^ sender, EventArgs^ e) {

	}
	protected:





	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(User_Login::typeid));
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->UserField = (gcnew System::Windows::Forms::TextBox());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->animTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LoginButton = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LoginButton))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->RegisterButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->RegisterButton->Location = System::Drawing::Point(123, 211);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(113, 40);
			this->RegisterButton->TabIndex = 1;
			this->RegisterButton->Text = L"New User";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &User_Login::RegisterButton_Click);
			// 
			// UserField
			// 
			this->UserField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UserField->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserField->Location = System::Drawing::Point(83, 121);
			this->UserField->Name = L"UserField";
			this->UserField->Size = System::Drawing::Size(180, 34);
			this->UserField->TabIndex = 2;
			this->UserField->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// passField
			// 
			this->passField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passField->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passField->Location = System::Drawing::Point(83, 156);
			this->passField->Name = L"passField";
			this->passField->PasswordChar = '*';
			this->passField->Size = System::Drawing::Size(180, 34);
			this->passField->TabIndex = 3;
			this->passField->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->passField->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button1->Location = System::Drawing::Point(113, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Test Connection";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &User_Login::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(524, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 44);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &User_Login::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(50, 119);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(36, 36);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->Location = System::Drawing::Point(50, 153);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(36, 36);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::Color::Transparent;
			this->Logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.BackgroundImage")));
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logo->Location = System::Drawing::Point(375, 0);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(196, 261);
			this->Logo->TabIndex = 8;
			this->Logo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 42);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Tracker Management";
			// 
			// LoginButton
			// 
			this->LoginButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginButton.BackgroundImage")));
			this->LoginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LoginButton->Location = System::Drawing::Point(269, 127);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(50, 50);
			this->LoginButton->TabIndex = 13;
			this->LoginButton->TabStop = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &User_Login::LoginButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->RegisterButton);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->LoginButton);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->passField);
			this->panel1->Controls->Add(this->Logo);
			this->panel1->Controls->Add(this->UserField);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Location = System::Drawing::Point(0, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(574, 365);
			this->panel1->TabIndex = 14;
			// 
			// User_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(571, 409);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"User_Login";
			this->Text = L"User_Login";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &User_Login::User_Login_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &User_Login::User_Login_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &User_Login::User_Login_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LoginButton))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RegisterButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		NewUser^ reg = gcnew NewUser();
		reg->ShowDialog();
		this->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		DbTest^ db = gcnew DbTest();
		db->ShowDialog();
		this->Show();
	}
	/*private: System::Void Login_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (MessageBox::Show("Do you want to exit?", "Payroll System", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
		{
			Application::ExitThread();
		}
		else
			e->Cancel = true;
	}*/

	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Do you want to exit?", "Payroll System", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
		{
			Application::ExitThread();
		}
	}
	private: System::Void User_Login_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = true;
		lastLocation = e->Location;
	}
private: System::Void User_Login_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y)+e->Y);
		this->Update();
		
	}
}
private: System::Void User_Login_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}

private: System::Void LoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SQLConnect^ sql = gcnew SQLConnect();
	int check = sql->login(UserField->Text, passField->Text);
	name = sql->getName(UserField->Text);
	username = UserField->Text;
	if (check != -1)
	{
		if (check == 0) {
			this->Hide();
			MenuForm^ menu = gcnew MenuForm(name, username);
			menu->ShowDialog();
		}
		else {
			this->Hide();
			EmployeeMenu^ emenu = gcnew EmployeeMenu(name, username);
			emenu->ShowDialog();
		}
	}
	else
	{
		MessageBox::Show("Invalid User or Password!", "Invalid!", MessageBoxButtons::OK);
	}
}
};
}
#endif