#pragma once
#include "Backend/Users.h"
#include "Backend/FileStream.h"
#include <list>
#include <msclr/marshal_cppstd.h>

namespace VaccineTrackingSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for ViewAllUsers
	/// </summary>
	public ref class ViewAllUsers : public System::Windows::Forms::Form
	{
	public:
		FileStream* fs;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	public:
		   DataTable^ table;
		   DataTable^ FirstDoseTable;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	public:
		DataTable^ SecondDoseTable;

		  
		ViewAllUsers(FileStream* fs)
		{
			this->fs = fs;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewAllUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Eras Bold ITC", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(416, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 47);
			this->label1->TabIndex = 23;
			this->label1->Text = L"View all users";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(166, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 22);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ViewAllUsers::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Search By National ID:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(0, 203);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::White;
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::White;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1501, 835);
			this->dataGridView1->TabIndex = 40;
			this->dataGridView1->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &ViewAllUsers::dataGridView1_UserDeletingRow);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 16);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Search By Age:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(166, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 22);
			this->textBox2->TabIndex = 41;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ViewAllUsers::textBox2_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(27) {
				L"Cairo", L"Giza", L"Alexandria",
					L"Dakahlia", L"RedSea", L"Beheira", L"Fayoum", L"Gharbiya", L"Ismailia", L"Menofia", L"Minya", L"Qaliubiya", L"NewValley", L"Suez",
					L"Aswan", L"Assiut", L"Beni Suef", L"Port Said", L"Damietta", L"Sharkia", L"SouthSinai", L"KafrAlsheikh", L"Matrouh", L"Luxor",
					L"Qena", L"NorthSinai", L"Sohag"
			});
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"Cairo", L"Giza", L"Alexandria", L"Dakahlia",
					L"RedSea", L"Beheira", L"Fayoum", L"Gharbiya", L"Ismailia", L"Menofia", L"Minya", L"Qaliubiya", L"NewValley", L"Suez", L"Aswan",
					L"Assiut", L"Beni Suef", L"Port Said", L"Damietta", L"Sharkia", L"SouthSinai", L"KafrAlsheikh", L"Matrouh", L"Luxor", L"Qena",
					L"NorthSinai", L"Sohag"
			});
			this->comboBox2->Location = System::Drawing::Point(779, 119);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(300, 24);
			this->comboBox2->TabIndex = 44;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewAllUsers::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox1->Location = System::Drawing::Point(779, 84);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(117, 24);
			this->comboBox1->TabIndex = 43;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewAllUsers::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(592, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Filter By Gender:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(592, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 16);
			this->label5->TabIndex = 46;
			this->label5->Text = L"Filter By Governorate";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(15, 163);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(284, 24);
			this->checkBox1->TabIndex = 48;
			this->checkBox1->Text = L"View First Dose Waiting List Only";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ViewAllUsers::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(666, 163);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(306, 24);
			this->checkBox2->TabIndex = 49;
			this->checkBox2->Text = L"View Second Dose Waiting List Only";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &ViewAllUsers::checkBox2_CheckedChanged);
			// 
			// ViewAllUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1528, 1063);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ViewAllUsers";
			this->Load += gcnew System::EventHandler(this, &ViewAllUsers::ViewAllUsers_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void ViewAllUsers_Load(System::Object^ sender, System::EventArgs^ e) {
		table = gcnew DataTable();
		table->Columns->Add("National ID");
		table->Columns->Add("First Name");
		table->Columns->Add("Last Name");
		table->Columns->Add("Gender");
		table->Columns->Add("Age");
		table->Columns->Add("Governorate");
		table->Columns->Add("First Dose");
		table->Columns->Add("Second Dose");

		std::list<User> userList = this->fs->getUsers();
		std::queue<User> FWaitingList = this->fs->getFirstDoseWaitingList();
		std::queue<User> SWaitingList = this->fs->getSecondDoseWaitingList();

		FirstDoseTable = gcnew DataTable();

		FirstDoseTable->Columns->Add("National ID");
		FirstDoseTable->Columns->Add("First Name");
		FirstDoseTable->Columns->Add("Last Name");
		FirstDoseTable->Columns->Add("Gender");
		FirstDoseTable->Columns->Add("Age");
		FirstDoseTable->Columns->Add("Governorate");
		FirstDoseTable->Columns->Add("First Dose");
		FirstDoseTable->Columns->Add("Second Dose");

		SecondDoseTable = gcnew DataTable();

		SecondDoseTable->Columns->Add("National ID");
		SecondDoseTable->Columns->Add("First Name");
		SecondDoseTable->Columns->Add("Last Name");
		SecondDoseTable->Columns->Add("Gender");
		SecondDoseTable->Columns->Add("Age");
		SecondDoseTable->Columns->Add("Governorate");
		SecondDoseTable->Columns->Add("First Dose");
		SecondDoseTable->Columns->Add("Second Dose");
		while (!FWaitingList.empty()) {
			User currentUser = FWaitingList.front();
			FWaitingList.pop();
			FirstDoseTable->Rows->Add(
				marshal_as<String^>(currentUser.getNationalID()),
				marshal_as<String^>(currentUser.getFirstName()),
				marshal_as<String^>(currentUser.getLastName()),
				marshal_as<String^>(currentUser.getGender()),
				marshal_as<String^>(currentUser.getAge()),
				marshal_as<String^>(currentUser.getGovernorate()),
				marshal_as<String^>(currentUser.getFirstDose() ? "true" : "false"),
				marshal_as<String^>(currentUser.getSecondDose() ? "true" : "false")
			);
		}

		while (!SWaitingList.empty()) {
			User currentUser = SWaitingList.front();
			SWaitingList.pop();
			SecondDoseTable->Rows->Add(
				marshal_as<String^>(currentUser.getNationalID()),
				marshal_as<String^>(currentUser.getFirstName()),
				marshal_as<String^>(currentUser.getLastName()),
				marshal_as<String^>(currentUser.getGender()),
				marshal_as<String^>(currentUser.getAge()),
				marshal_as<String^>(currentUser.getGovernorate()),
				marshal_as<String^>(currentUser.getFirstDose() ? "true" : "false"),
				marshal_as<String^>(currentUser.getSecondDose() ? "true" : "false")
			);
		}

		for (auto i : userList) {

			table->Rows->Add(
				marshal_as<String^>(i.getNationalID()),
				marshal_as<String^>(i.getFirstName()),
				marshal_as<String^>(i.getLastName()),
				marshal_as<String^>(i.getGender()),
				marshal_as<String^>(i.getAge()),
				marshal_as<String^>(i.getGovernorate()),
				marshal_as<String^>(i.getFirstDose() ? "true" : "false"),
				marshal_as<String^>(i.getSecondDose() ? "true" : "false")
			);
		}

		dataGridView1->DataSource = table;
		
	}
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		comboBox1->Text = "";
		comboBox2->Text = "";
		textBox2->Text = "";
		checkBox1->Checked = false;
		if (textBox1->Text != "") {
			safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = "[National ID] LIKE '" + textBox1->Text + "%'";
		}
		else {
			safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = String::Empty;
		}
		
		dataGridView1->Refresh();

	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	comboBox1->Text = "";
	comboBox2->Text = "";
	textBox1->Text = "";
	checkBox1->Checked = false;
	if (textBox2->Text != "") {

		safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = "[Age] = '" + textBox2->Text + "'";
	}
	else {
		safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = String::Empty;
	}

	dataGridView1->Refresh();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	comboBox2->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	checkBox1->Checked = false;
	if (comboBox1->Text != "") {
		safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = "[Gender] = '" + comboBox1->Text + "'";
	}
	else {
		safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = String::Empty;
	}

	dataGridView1->Refresh();

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	comboBox1->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	checkBox1->Checked = false;
	if (comboBox2->Text != "") {
		safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = "[Governorate] = '" + comboBox2->Text + "'";
	}
	else {
		safe_cast<DataTable^>(dataGridView1->DataSource)->DefaultView->RowFilter = String::Empty;
	}

	dataGridView1->Refresh();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Text = "";
	comboBox2->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	checkBox2->Checked = false;
	if (checkBox1->Checked) {
		dataGridView1->DataSource = FirstDoseTable;
	}
	else {
		dataGridView1->DataSource = table;

	}
	dataGridView1->Refresh();
}

private: System::Void dataGridView1_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
	std::string NationalId = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[0]->Value->ToString());
	std::string FirstName = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[1]->Value->ToString());
	std::string LastName = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[2]->Value->ToString());
	std::string Gender = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[3]->Value->ToString());
	std::string Age = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[4]->Value->ToString());
	std::string Governorate = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[5]->Value->ToString());
	std::string FirstDose = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[6]->Value->ToString());
	std::string SecondDose = marshal_as<std::string>(dataGridView1->Rows[e->Row->Index]->Cells[7]->Value->ToString());

	User u(NationalId, FirstName, LastName, 
		Gender, Age, Governorate, 
		FirstDose == "true" ? true: false, SecondDose == "true" ? true : false);

	this->fs->deleteUser(u);

}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Text = "";
	comboBox2->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	checkBox1->Checked = false;
	if (checkBox2->Checked) {
		dataGridView1->DataSource = SecondDoseTable;
	}
	else {
		dataGridView1->DataSource = table;

	}
	dataGridView1->Refresh();
}
};
}
