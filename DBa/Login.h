#pragma once
#include <fstream>
#include <string>
#include "db_error.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "login_err.h"
#include <stdlib.h>
#include "Main_form.h"
#include <string>
#include "exts.h"
#include "trans.h"

extern std::string username;

using std::ifstream;
using std::string;
std::vector<string> split(string text, char delimeter);

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ login_tb;
	private: System::Windows::Forms::TextBox^ pass_tb;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ auth_butt;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->login_tb = (gcnew System::Windows::Forms::TextBox());
			this->pass_tb = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->auth_butt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�����";
			// 
			// login_tb
			// 
			this->login_tb->Location = System::Drawing::Point(16, 25);
			this->login_tb->Name = L"login_tb";
			this->login_tb->Size = System::Drawing::Size(256, 20);
			this->login_tb->TabIndex = 1;
			// 
			// pass_tb
			// 
			this->pass_tb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pass_tb->Location = System::Drawing::Point(16, 64);
			this->pass_tb->Name = L"pass_tb";
			this->pass_tb->Size = System::Drawing::Size(256, 20);
			this->pass_tb->TabIndex = 3;
			this->pass_tb->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"������";
			// 
			// auth_butt
			// 
			this->auth_butt->Location = System::Drawing::Point(16, 90);
			this->auth_butt->Name = L"auth_butt";
			this->auth_butt->Size = System::Drawing::Size(256, 23);
			this->auth_butt->TabIndex = 4;
			this->auth_butt->Text = L"�����������";
			this->auth_butt->UseVisualStyleBackColor = true;
			this->auth_butt->Click += gcnew System::EventHandler(this, &Login::auth_butt_Click);
			// 
			// Login
			// 
			this->AcceptButton = this->auth_butt;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 126);
			this->Controls->Add(this->auth_butt);
			this->Controls->Add(this->pass_tb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->login_tb);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� � �������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void auth_butt_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream db("Z:\\zubr_db\\usr.zb");
		if (!db.is_open())
		{
			db_error^ dbe = gcnew db_error;
			dbe->ShowDialog();
		}
		string data;
		std::vector<std::vector<string>> datas;
		while (!db.eof()) {
			getline(db, data);
			std::vector<string> data_v = split(data, '-');
			datas.push_back(data_v);
		}
		String^ login_ = login_tb->Text;
		String^ passw_ = pass_tb->Text;
		bool auth = false;
		for (int i = 0; i < datas.size(); i++) {
			System::String^ login_sys = msclr::interop::marshal_as<System::String^>(datas[i][0]);
			System::String^ pass_sys = msclr::interop::marshal_as<System::String^>(datas[i][1]);
			if (login_sys == login_ && pass_sys == passw_)
			{
				auth = true;
			}
		}
		if (!auth) {
			
			login_err^ lef = gcnew login_err;
			lef->ShowDialog();
			
		}
		else 
		{
			transf::setName(msclr::interop::marshal_as<std::string>(login_));
			Main_form^ mf = gcnew Main_form;
			mf->Show();
			this->Hide();
		}
	}

};
}


