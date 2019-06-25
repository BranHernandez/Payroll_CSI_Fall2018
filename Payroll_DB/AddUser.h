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
	/// Summary for AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	private:
		String^ position;
		bool mouseDown;
		Point lastLocation;
	public:
		AddUser(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddUser(String^ position)
		{
			InitializeComponent();
			this->position = position;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  userLabel;
	private: System::Windows::Forms::TextBox^  userField;
	private: System::Windows::Forms::TextBox^  passField;
	private: System::Windows::Forms::TextBox^  confirmField;
	protected:



	private: System::Windows::Forms::Label^  passLabel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  submitButton;

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
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->userField = (gcnew System::Windows::Forms::TextBox());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->confirmField = (gcnew System::Windows::Forms::TextBox());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Location = System::Drawing::Point(110, 65);
			this->userLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(87, 20);
			this->userLabel->TabIndex = 0;
			this->userLabel->Text = L"Username:";
			// 
			// userField
			// 
			this->userField->Location = System::Drawing::Point(206, 60);
			this->userField->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->userField->Name = L"userField";
			this->userField->Size = System::Drawing::Size(148, 26);
			this->userField->TabIndex = 1;
			// 
			// passField
			// 
			this->passField->Location = System::Drawing::Point(206, 125);
			this->passField->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->passField->Name = L"passField";
			this->passField->Size = System::Drawing::Size(148, 26);
			this->passField->TabIndex = 2;
			// 
			// confirmField
			// 
			this->confirmField->Location = System::Drawing::Point(206, 182);
			this->confirmField->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->confirmField->Name = L"confirmField";
			this->confirmField->Size = System::Drawing::Size(148, 26);
			this->confirmField->TabIndex = 3;
			// 
			// passLabel
			// 
			this->passLabel->AutoSize = true;
			this->passLabel->Location = System::Drawing::Point(112, 129);
			this->passLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(82, 20);
			this->passLabel->TabIndex = 4;
			this->passLabel->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 186);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Confirm Password:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->submitButton);
			this->panel1->Controls->Add(this->userField);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->userLabel);
			this->panel1->Controls->Add(this->passLabel);
			this->panel1->Controls->Add(this->passField);
			this->panel1->Controls->Add(this->confirmField);
			this->panel1->Location = System::Drawing::Point(0, 42);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(536, 365);
			this->panel1->TabIndex = 6;
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(206, 252);
			this->submitButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(112, 35);
			this->submitButton->TabIndex = 6;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &AddUser::submitButton_Click);
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(537, 402);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AddUser";
			this->Text = L"AddUser";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddUser::AddUser_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddUser::AddUser_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AddUser::AddUser_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (userField->Text->Length > 0 && passField->Text->Length > 0 && confirmField->Text->Length > 0) {
			if (passField->Text == confirmField->Text) {
				SQLConnect^ db = gcnew SQLConnect();
				db->createUser(userField->Text, passField->Text, position);
				this->Close();
			}
		}
	}

private: System::Void AddUser_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void AddUser_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();

	}
}
private: System::Void AddUser_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
};
}
