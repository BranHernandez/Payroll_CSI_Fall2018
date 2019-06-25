#pragma once
#ifndef DBTEST_H_INCLUDED
#define DBTEST_H_INCLUDED
#include "Database.h"
namespace PayrollDB {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class DbTest : public System::Windows::Forms::Form
	{
	public:
		DbTest(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DbTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  connectButton;
	private: System::Windows::Forms::Button^  backupButton;
	private: System::Windows::Forms::Button^  restoreButton;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^  restoreField;

	private: System::Windows::Forms::TextBox^  backupField;

	private: System::Windows::Forms::TextBox^  connectStatus;
	private: System::Windows::Forms::Button^  folderBrowse;
	private: System::Windows::Forms::Button^  fileBrowse;
	private: System::Windows::Forms::Button^  disconnectButton;




	protected:

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
			this->connectButton = (gcnew System::Windows::Forms::Button());
			this->backupButton = (gcnew System::Windows::Forms::Button());
			this->restoreButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->restoreField = (gcnew System::Windows::Forms::TextBox());
			this->backupField = (gcnew System::Windows::Forms::TextBox());
			this->connectStatus = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowse = (gcnew System::Windows::Forms::Button());
			this->fileBrowse = (gcnew System::Windows::Forms::Button());
			this->disconnectButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// connectButton
			// 
			this->connectButton->Location = System::Drawing::Point(52, 27);
			this->connectButton->Name = L"connectButton";
			this->connectButton->Size = System::Drawing::Size(75, 23);
			this->connectButton->TabIndex = 0;
			this->connectButton->Text = L"Connect";
			this->connectButton->UseVisualStyleBackColor = true;
			this->connectButton->Click += gcnew System::EventHandler(this, &DbTest::connectButton_Click);
			// 
			// backupButton
			// 
			this->backupButton->Location = System::Drawing::Point(52, 104);
			this->backupButton->Name = L"backupButton";
			this->backupButton->Size = System::Drawing::Size(75, 23);
			this->backupButton->TabIndex = 1;
			this->backupButton->Text = L"Backup";
			this->backupButton->UseVisualStyleBackColor = true;
			this->backupButton->Click += gcnew System::EventHandler(this, &DbTest::backupButton_Click);
			// 
			// restoreButton
			// 
			this->restoreButton->Location = System::Drawing::Point(52, 150);
			this->restoreButton->Name = L"restoreButton";
			this->restoreButton->Size = System::Drawing::Size(75, 23);
			this->restoreButton->TabIndex = 2;
			this->restoreButton->Text = L"Restore";
			this->restoreButton->UseVisualStyleBackColor = true;
			this->restoreButton->Click += gcnew System::EventHandler(this, &DbTest::restoreButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// restoreField
			// 
			this->restoreField->Location = System::Drawing::Point(156, 152);
			this->restoreField->Name = L"restoreField";
			this->restoreField->Size = System::Drawing::Size(195, 20);
			this->restoreField->TabIndex = 3;
			// 
			// backupField
			// 
			this->backupField->Location = System::Drawing::Point(156, 104);
			this->backupField->Name = L"backupField";
			this->backupField->Size = System::Drawing::Size(195, 20);
			this->backupField->TabIndex = 4;
			// 
			// connectStatus
			// 
			this->connectStatus->BackColor = System::Drawing::Color::LightCoral;
			this->connectStatus->Location = System::Drawing::Point(156, 45);
			this->connectStatus->Name = L"connectStatus";
			this->connectStatus->Size = System::Drawing::Size(195, 20);
			this->connectStatus->TabIndex = 5;
			this->connectStatus->Text = L"Connection: Disconnected";
			this->connectStatus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// folderBrowse
			// 
			this->folderBrowse->Location = System::Drawing::Point(354, 102);
			this->folderBrowse->Name = L"folderBrowse";
			this->folderBrowse->Size = System::Drawing::Size(26, 22);
			this->folderBrowse->TabIndex = 6;
			this->folderBrowse->Text = L"...";
			this->folderBrowse->UseVisualStyleBackColor = true;
			this->folderBrowse->Click += gcnew System::EventHandler(this, &DbTest::folderBrowse_Click);
			// 
			// fileBrowse
			// 
			this->fileBrowse->Location = System::Drawing::Point(354, 151);
			this->fileBrowse->Name = L"fileBrowse";
			this->fileBrowse->Size = System::Drawing::Size(26, 22);
			this->fileBrowse->TabIndex = 7;
			this->fileBrowse->Text = L"...";
			this->fileBrowse->UseVisualStyleBackColor = true;
			this->fileBrowse->Click += gcnew System::EventHandler(this, &DbTest::fileBrowse_Click);
			// 
			// disconnectButton
			// 
			this->disconnectButton->Location = System::Drawing::Point(52, 61);
			this->disconnectButton->Name = L"disconnectButton";
			this->disconnectButton->Size = System::Drawing::Size(75, 23);
			this->disconnectButton->TabIndex = 8;
			this->disconnectButton->Text = L"Disconnect";
			this->disconnectButton->UseVisualStyleBackColor = true;
			this->disconnectButton->Click += gcnew System::EventHandler(this, &DbTest::disconnectButton_Click);
			// 
			// DbTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 261);
			this->Controls->Add(this->disconnectButton);
			this->Controls->Add(this->fileBrowse);
			this->Controls->Add(this->folderBrowse);
			this->Controls->Add(this->connectStatus);
			this->Controls->Add(this->backupField);
			this->Controls->Add(this->restoreField);
			this->Controls->Add(this->restoreButton);
			this->Controls->Add(this->backupButton);
			this->Controls->Add(this->connectButton);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DbTest";
			this->Text = L"Test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void connectButton_Click(System::Object^  sender, System::EventArgs^  e) {
		SQLConnect ^client = gcnew SQLConnect();
		if (client->openConnection())
		{
			connectStatus->BackColor = Color::LawnGreen;
			connectStatus->Text = "Connection: Connect!";
		}
		else
			connectStatus->Text = "Cannot connect!!";
	}
	private: System::Void backupButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (backupField->Text->Length > 0)
		{
			SQLConnect^ client = gcnew SQLConnect();
			client->backup(backupField->Text);
		}
	}
	private: System::Void restoreButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (restoreField->Text->Length > 0)
		{
			SQLConnect^ client = gcnew SQLConnect();
			client->restore(restoreField->Text);
		}
		
	}
private: System::Void folderBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult action = folderBrowserDialog1->ShowDialog();
	if (action == System::Windows::Forms::DialogResult::OK)
	{
		backupField->Text = folderBrowserDialog1->SelectedPath;
	}
}
private: System::Void fileBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::Desktop);
	openFileDialog1->Title = "Select file to restore";
	openFileDialog1->Filter = "All Files | *.*";
	openFileDialog1->RestoreDirectory = true;
	System::Windows::Forms::DialogResult action = openFileDialog1->ShowDialog();
	if (action == System::Windows::Forms::DialogResult::OK)
	{
		restoreField->Text = System::IO::Path::GetFullPath(openFileDialog1->FileName);
	}
}
private: System::Void disconnectButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SQLConnect ^client = gcnew SQLConnect();
	bool closed = client->closeConnection();
	if (closed)
	{
		connectStatus->BackColor = Color::LightCoral;
		connectStatus->Text = "Connection: Disconnected";
	}
}
};
}
#endif