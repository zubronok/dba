#pragma once
#include "trans.h"
#include <msclr/marshal_cppstd.h>
#define sst System::String^
namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� change_password
	/// </summary>
	public ref class change_password : public System::Windows::Forms::Form
	{
	public:
		change_password(void)
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
		~change_password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ pass1_tb;
	private: System::Windows::Forms::TextBox^ pass2_tb;



	private: System::Windows::Forms::Button^ save_button;
	protected:

	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pass1_tb = (gcnew System::Windows::Forms::TextBox());
			this->pass2_tb = (gcnew System::Windows::Forms::TextBox());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��������� ������ ��� ������������ ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����� ������:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"����� ������ ��� ���:";
			// 
			// pass1_tb
			// 
			this->pass1_tb->Location = System::Drawing::Point(13, 43);
			this->pass1_tb->Name = L"pass1_tb";
			this->pass1_tb->Size = System::Drawing::Size(259, 20);
			this->pass1_tb->TabIndex = 3;
			this->pass1_tb->UseSystemPasswordChar = true;
			// 
			// pass2_tb
			// 
			this->pass2_tb->Location = System::Drawing::Point(13, 82);
			this->pass2_tb->Name = L"pass2_tb";
			this->pass2_tb->Size = System::Drawing::Size(259, 20);
			this->pass2_tb->TabIndex = 4;
			this->pass2_tb->UseSystemPasswordChar = true;
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(12, 108);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(260, 23);
			this->save_button->TabIndex = 5;
			this->save_button->Text = L"���������";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &change_password::save_button_Click);
			// 
			// change_password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 145);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->pass2_tb);
			this->Controls->Add(this->pass1_tb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"change_password";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��������� ������";
			this->Load += gcnew System::EventHandler(this, &change_password::change_password_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void change_password_Load(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name = msclr::interop::marshal_as<System::String^>(transf::getName());
		this->label1->Text += name + ":";
	}	

	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		sst pass = pass1_tb->Text;
		sst pass2 = pass2_tb->Text;
		std::string pwd = msclr::interop::marshal_as<std::string>(pass);
		std::string pwd2 = msclr::interop::marshal_as<std::string>(pass2);
		if (pwd != pwd2) {

		}
	}
};
}
