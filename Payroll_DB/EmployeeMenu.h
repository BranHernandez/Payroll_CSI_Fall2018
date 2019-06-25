#pragma once
#include "payroll_form.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeMenu
	/// </summary>
	public ref class EmployeeMenu : public System::Windows::Forms::Form
	{
	private:
		String^ name = "";
		String^ username = "";
		bool mouseDown = false;
		Point lastLocation;
	public:
		EmployeeMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		EmployeeMenu(String^ name, String^ user)
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
		~EmployeeMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  NameLabel;
	private: System::Windows::Forms::Button^  BenefitsButton;
	private: System::Windows::Forms::Label^  DateLabel;
	private: System::Windows::Forms::Button^  SearchButton;

	private: System::Windows::Forms::PictureBox^  closePage;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeMenu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->BenefitsButton = (gcnew System::Windows::Forms::Button());
			this->DateLabel = (gcnew System::Windows::Forms::Label());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->closePage = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->NameLabel);
			this->panel1->Controls->Add(this->BenefitsButton);
			this->panel1->Controls->Add(this->DateLabel);
			this->panel1->Controls->Add(this->SearchButton);
			this->panel1->Location = System::Drawing::Point(0, 42);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(488, 598);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->Location = System::Drawing::Point(165, 17);
			this->NameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(105, 45);
			this->NameLabel->TabIndex = 1;
			this->NameLabel->Text = L"Name";
			// 
			// BenefitsButton
			// 
			this->BenefitsButton->Location = System::Drawing::Point(138, 275);
			this->BenefitsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BenefitsButton->Name = L"BenefitsButton";
			this->BenefitsButton->Size = System::Drawing::Size(188, 65);
			this->BenefitsButton->TabIndex = 5;
			this->BenefitsButton->Text = L"User Settings";
			this->BenefitsButton->UseVisualStyleBackColor = true;
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateLabel->Location = System::Drawing::Point(20, 63);
			this->DateLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(92, 45);
			this->DateLabel->TabIndex = 2;
			this->DateLabel->Text = L"Date";
			// 
			// SearchButton
			// 
			this->SearchButton->Location = System::Drawing::Point(138, 200);
			this->SearchButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(188, 65);
			this->SearchButton->TabIndex = 4;
			this->SearchButton->Text = L"Current Pay Period";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &EmployeeMenu::SearchButton_Click);
			// 
			// closePage
			// 
			this->closePage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
			this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closePage->Location = System::Drawing::Point(432, 0);
			this->closePage->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->closePage->Name = L"closePage";
			this->closePage->Size = System::Drawing::Size(45, 40);
			this->closePage->TabIndex = 19;
			this->closePage->TabStop = false;
			this->closePage->Click += gcnew System::EventHandler(this, &EmployeeMenu::closePage_Click);
			this->closePage->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &EmployeeMenu::closePage_MouseDown);
			this->closePage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &EmployeeMenu::closePage_MouseMove);
			this->closePage->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &EmployeeMenu::closePage_MouseUp);
			// 
			// EmployeeMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(483, 637);
			this->Controls->Add(this->closePage);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"EmployeeMenu";
			this->Text = L"EmployeeMenu";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Do you want to exit?", "Payroll System", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
		{
			Application::ExitThread();
		}
	}
private: System::Void closePage_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void closePage_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();
	}
}
private: System::Void closePage_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	payroll_form^ pf = gcnew payroll_form(name);
	pf->ShowDialog();
}
};
}
