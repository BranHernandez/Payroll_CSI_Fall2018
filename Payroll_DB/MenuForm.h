#pragma once
#ifndef MENUFORM_H_INCLUDED__
#define MENUFORM_H_INCLUDED__
#include "NewEmployee.h"
#include "payroll_manage.h"
#include "BenefitsForm.h"
#include "SearchForm.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	private:
		String^ name = "";
		bool mouseDown = false;
		Point lastLocation;
		String^ username = "";
	private: System::Windows::Forms::Button^  NewEmpButton;
	private: System::Windows::Forms::Button^  SearchButton;
	private: System::Windows::Forms::Button^  PayrollButton;
	private: System::Windows::Forms::Button^  BenefitsButton;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;

			 
	public:
		MenuForm(void)
		{
			InitializeComponent();
			DateLabel->Text = System::DateTime::Now.ToString();
			
		}

		MenuForm(String^ name, String^ user)
		{
			InitializeComponent();
			DateLabel->Text = System::DateTime::Now.ToString();
			this->name = name;
			this->username = user;
			NameLabel->Text = this->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  NameLabel;

	protected:

	private: System::Windows::Forms::Label^  DateLabel;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->DateLabel = (gcnew System::Windows::Forms::Label());
			this->NewEmpButton = (gcnew System::Windows::Forms::Button());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->PayrollButton = (gcnew System::Windows::Forms::Button());
			this->BenefitsButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->closePage = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->Location = System::Drawing::Point(110, 11);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(71, 30);
			this->NameLabel->TabIndex = 1;
			this->NameLabel->Text = L"Name";
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateLabel->Location = System::Drawing::Point(13, 41);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(62, 30);
			this->DateLabel->TabIndex = 2;
			this->DateLabel->Text = L"Date";
			// 
			// NewEmpButton
			// 
			this->NewEmpButton->Location = System::Drawing::Point(206, 107);
			this->NewEmpButton->Name = L"NewEmpButton";
			this->NewEmpButton->Size = System::Drawing::Size(125, 42);
			this->NewEmpButton->TabIndex = 3;
			this->NewEmpButton->Text = L"New Employee";
			this->NewEmpButton->UseVisualStyleBackColor = true;
			this->NewEmpButton->Click += gcnew System::EventHandler(this, &MenuForm::NewEmpButton_Click);
			// 
			// SearchButton
			// 
			this->SearchButton->Location = System::Drawing::Point(206, 155);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(125, 42);
			this->SearchButton->TabIndex = 4;
			this->SearchButton->Text = L"Search Employee";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MenuForm::SearchButton_Click);
			// 
			// PayrollButton
			// 
			this->PayrollButton->Location = System::Drawing::Point(206, 251);
			this->PayrollButton->Name = L"PayrollButton";
			this->PayrollButton->Size = System::Drawing::Size(125, 42);
			this->PayrollButton->TabIndex = 6;
			this->PayrollButton->Text = L"Payroll";
			this->PayrollButton->UseVisualStyleBackColor = true;
			this->PayrollButton->Click += gcnew System::EventHandler(this, &MenuForm::PayrollButton_Click);
			// 
			// BenefitsButton
			// 
			this->BenefitsButton->Location = System::Drawing::Point(206, 203);
			this->BenefitsButton->Name = L"BenefitsButton";
			this->BenefitsButton->Size = System::Drawing::Size(125, 42);
			this->BenefitsButton->TabIndex = 5;
			this->BenefitsButton->Text = L"Benefits";
			this->BenefitsButton->UseVisualStyleBackColor = true;
			this->BenefitsButton->Click += gcnew System::EventHandler(this, &MenuForm::BenefitsButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->PayrollButton);
			this->panel1->Controls->Add(this->NameLabel);
			this->panel1->Controls->Add(this->BenefitsButton);
			this->panel1->Controls->Add(this->DateLabel);
			this->panel1->Controls->Add(this->SearchButton);
			this->panel1->Controls->Add(this->NewEmpButton);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(541, 346);
			this->panel1->TabIndex = 7;
			// 
			// closePage
			// 
			this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
			this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closePage->Location = System::Drawing::Point(508, 0);
			this->closePage->Name = L"closePage";
			this->closePage->Size = System::Drawing::Size(30, 26);
			this->closePage->TabIndex = 18;
			this->closePage->TabStop = false;
			this->closePage->Click += gcnew System::EventHandler(this, &MenuForm::closePage_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(539, 372);
			this->Controls->Add(this->closePage);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MenuForm::MenuForm_FormClosing);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuForm::MenuForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuForm::MenuForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuForm::MenuForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (MessageBox::Show("Do you want to exit?", "Payroll System", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
		{
			Application::ExitThread();
		}
		else
			e->Cancel = true;
	}
	private: System::Void NewEmpButton_Click(System::Object^  sender, System::EventArgs^  e) {
		NewEmployee^ ne = gcnew NewEmployee();
		ne->ShowDialog();
	}
private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SearchForm^ sf = gcnew SearchForm();
	sf->ShowDialog();
}
private: System::Void BenefitsButton_Click(System::Object^  sender, System::EventArgs^  e) {
	BenefitsForm^ bf = gcnew BenefitsForm();
	bf->ShowDialog();
}
private: System::Void PayrollButton_Click(System::Object^  sender, System::EventArgs^  e) {
	payroll_manage^ pf = gcnew payroll_manage();
	pf->ShowDialog();
}
private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Do you want to exit?", "Payroll System", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
	{
		Application::ExitThread();
	}
}
private: System::Void MenuForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void MenuForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();
	}
}
private: System::Void MenuForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
};
}

#endif
