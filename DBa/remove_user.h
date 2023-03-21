#pragma once
#include <fstream>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <string>
#include "split.h"
using std::ifstream;
using std::vector;
using std::ofstream;

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� remove_user
	/// </summary>
	public ref class remove_user : public System::Windows::Forms::Form
	{
	public:
		remove_user(void)
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
		~remove_user()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��� ������������:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &remove_user::button1_Click);
			// 
			// remove_user
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(167, 87);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"remove_user";
			this->Text = L"��������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream inp("Z:\\zubr_db\\usr.zb");
		vector<std::string>* __datas = new vector<std::string>;
		std::string* temp = new std::string;
		while (!inp.eof()) {
			std::getline(inp, *temp);
			__datas->push_back(*temp);
		}
		delete temp;
		vector<vector<std::string>> data;
		for (int i = 0; i < __datas->size(); i++) {
			data.push_back(split(__datas->at(i), '-'));
		}
		delete __datas;
		std::string nameToDelete = msclr::interop::marshal_as<std::string>(textBox1->Text);
		for (int i = 0; i < data.size(); i++) {
			if (data[i][0] == nameToDelete) {
				data.erase(data.begin() + i);
				break; break;
			}
		}
		ofstream out("Z:\\zubr_db\\usr.zb");
		for (int i = 0; i < data.size() - 1; i++) {
			out << data[i][0] << '-' << data[i][1] << '\n';
		}
		out << data[data.size() - 1][0] << '-' << data[data.size() - 1][1];
		this->Close();
	}
	};
}
