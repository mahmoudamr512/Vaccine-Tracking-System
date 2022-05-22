#pragma once
#include "Backend/Users.h"
#include "Backend/FileStream.h"
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
	/// Summary for UserPanel
	/// </summary>
	public ref class UserPanel : public System::Windows::Forms::Form
	{
	public:
		User* user;
		FileStream* fs;
		String^ password;

		UserPanel(User* user, FileStream* fs, String^ password)
		{
			this->user = user;
			this->fs = fs;
			this->password = password;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(367, 608);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 27);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Password:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(371, 638);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(738, 22);
			this->textBox5->TabIndex = 58;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1233, 578);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 82);
			this->button1->TabIndex = 57;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserPanel::button1_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"First", L"Second" });
			this->comboBox4->Location = System::Drawing::Point(452, 524);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(300, 24);
			this->comboBox4->TabIndex = 55;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(366, 521);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 27);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Dose:";
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
			this->comboBox2->Location = System::Drawing::Point(371, 465);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(738, 24);
			this->comboBox2->TabIndex = 53;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(366, 435);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 27);
			this->label7->TabIndex = 52;
			this->label7->Text = L"Governorate:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(979, 215);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 35);
			this->textBox4->TabIndex = 51;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(900, 221);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 27);
			this->label6->TabIndex = 50;
			this->label6->Text = L"Age:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox1->Location = System::Drawing::Point(992, 345);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(117, 24);
			this->comboBox1->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(900, 340);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 27);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Gender:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(595, 343);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(210, 36);
			this->textBox3->TabIndex = 47;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(590, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 27);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Last Name:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(371, 340);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 36);
			this->textBox2->TabIndex = 45;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(366, 310);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 27);
			this->label3->TabIndex = 44;
			this->label3->Text = L"First Name:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(371, 226);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(434, 22);
			this->textBox1->TabIndex = 43;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(366, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 27);
			this->label2->TabIndex = 42;
			this->label2->Text = L"National ID:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Eras Bold ITC", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(598, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 54);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Welcome, ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1233, 666);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 89);
			this->button2->TabIndex = 60;
			this->button2->Text = L"Delete account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserPanel::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(24, 669);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(187, 86);
			this->button3->TabIndex = 61;
			this->button3->Text = L"Signout";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserPanel::button3_Click);
			// 
			// UserPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1456, 778);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UserPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserPanel";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UserPanel::UserPanel_FormClosing);
			this->Load += gcnew System::EventHandler(this, &UserPanel::UserPanel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserPanel_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ dose = "";
		textBox1->Text = marshal_as<String^>(user->getNationalID());
		textBox2->Text = marshal_as<String^>(user->getFirstName());
		textBox3->Text = marshal_as<String^>(user->getLastName());
		textBox4->Text = marshal_as<String^>(user->getAge());
		textBox5->Text = this->password;
		comboBox1->Text = marshal_as<String^>(user->getGender());
		comboBox2->Text = marshal_as<String^>(user->getGovernorate());
		if (this->user->getFirstDose() && this->user->getSecondDose()) {
			dose = "Second";
		}
		else if (this->user->getFirstDose()) {
			dose = "First";
		}
		else {
			dose = "None";
		}
		comboBox4->Text = dose;
		label1->Text = "Welcome, \n" + marshal_as<String^>(user->getFirstName());
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == ""
		|| textBox3->Text == "" || textBox4->Text == ""
		|| textBox5->Text == "" || comboBox1->Text == "" || comboBox2->Text == "" || comboBox4->Text == "") {
		MessageBox::Show("Please enter all your information. ");
	}
	else {
		bool fDose = false, sDose = false;
		if (comboBox4->SelectedItem->ToString() == "First") {
			fDose = true;
		}
		else if (comboBox4->SelectedItem->ToString() == "Second") {
			fDose = true;
			sDose = true;
		}
		User newUser(marshal_as<std::string>(textBox1->Text),
			marshal_as<std::string>(textBox2->Text),
			marshal_as<std::string>(textBox3->Text),
			marshal_as<std::string>(comboBox1->SelectedItem->ToString()),
			marshal_as<std::string>(textBox4->Text),
			marshal_as<std::string>(comboBox2->SelectedItem->ToString()),
			fDose, sDose);
		this->fs->editUser(User(this->user), newUser, marshal_as<std::string>(textBox5->Text));
		label1->Text = "Welcome, \n" + marshal_as<String^>(newUser.getFirstName());
	}
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->fs->deleteUser(User(this->user));
		MessageBox::Show("Your account has been deleted...application is exiting now.");

		Application::Restart();
		Environment::Exit(0);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Restart();
		Environment::Exit(0);
	}
private: System::Void UserPanel_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->fs->rewriteUsersFile();
	this->fs->rewriteUsersLoginFile();
}
};
}
