#pragma once
#include "Backend/FileStream.h"
#include "Backend/Users.h"
#include "ViewAllUsers.h"
#include "ViewStatistics.h"

namespace VaccineTrackingSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminPanel
	/// </summary>
	public ref class AdminPanel : public System::Windows::Forms::Form
	{
		ViewAllUsers^ viewUsers;
		ViewStatistics^ Viewstatistics;
	public:
		FileStream* fs;
		AdminPanel(FileStream* fs)
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
		~AdminPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(212, 971);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Crimson;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(3, 822);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(212, 64);
			this->button4->TabIndex = 61;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPanel::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(39, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 88);
			this->label1->TabIndex = 2;
			this->label1->Text = L" Admin\r\nPanel\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(0, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 49);
			this->button3->TabIndex = 40;
			this->button3->Text = L"View Statistics";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminPanel::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(0, 293);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 49);
			this->button2->TabIndex = 39;
			this->button2->Text = L"View all users";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPanel::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(699, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(8, 8);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(215, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1528, 968);
			this->panel2->TabIndex = 2;
			// 
			// AdminPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1743, 969);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminPanel";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AdminPanel::AdminPanel_FormClosing);
			this->Load += gcnew System::EventHandler(this, &AdminPanel::AdminPanel_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void AdminPanel_Load(System::Object^ sender, System::EventArgs^ e) {
			button2->Enabled = false;

			viewUsers = gcnew ViewAllUsers(this->fs);
			viewUsers->TopLevel = false;
			viewUsers->AutoScroll = false;
			this->panel2->Controls->Add(viewUsers);
			viewUsers->Show();
		}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			
			button3->Enabled = false;
			button2->Enabled = true;

			viewUsers->Close();
			this->panel2->Controls->Remove(viewUsers);
			Viewstatistics = gcnew ViewStatistics();
			Viewstatistics->fs = this->fs;
			Viewstatistics->TopLevel = false;
			this->panel2->Controls->Add(Viewstatistics);
			this->panel2->AutoScroll = false;
			this->panel2->VerticalScroll->Enabled = true;
			this->panel2->VerticalScroll->Visible = true;
			this->panel2->AutoScroll = true;
			Viewstatistics->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void AdminPanel_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->fs->rewriteUsersFile();
	this->fs->rewriteUsersLoginFile();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			button2->Enabled = false;
			button3->Enabled = true;

			Viewstatistics->Close();
			this->panel2->Controls->Remove(Viewstatistics);
			viewUsers = gcnew ViewAllUsers(this->fs);
			viewUsers->TopLevel = false;
			this->panel2->Controls->Add(viewUsers);
			this->panel2->AutoScroll = false;
			this->panel2->VerticalScroll->Enabled = true;
			this->panel2->VerticalScroll->Visible = true;
			this->panel2->AutoScroll = true;
			viewUsers->Show();
}
};
}
