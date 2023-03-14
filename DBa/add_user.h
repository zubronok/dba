#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>
using std::ofstream;

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� add_user
	/// </summary>
	public ref class add_user : public System::Windows::Forms::Form
	{
	public:
		add_user(void)
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
		~add_user()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ name_tb;
	protected:
	private: System::Windows::Forms::TextBox^ pass_tb;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ save_button;

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
			this->name_tb = (gcnew System::Windows::Forms::TextBox());
			this->pass_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name_tb
			// 
			this->name_tb->Location = System::Drawing::Point(12, 25);
			this->name_tb->Name = L"name_tb";
			this->name_tb->Size = System::Drawing::Size(295, 20);
			this->name_tb->TabIndex = 0;
			// 
			// pass_tb
			// 
			this->pass_tb->Location = System::Drawing::Point(12, 64);
			this->pass_tb->Name = L"pass_tb";
			this->pass_tb->PasswordChar = '*';
			this->pass_tb->Size = System::Drawing::Size(295, 20);
			this->pass_tb->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"��� ������������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"������";
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(12, 90);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(295, 23);
			this->save_button->TabIndex = 4;
			this->save_button->Text = L"���������";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &add_user::save_button_Click);
			// 
			// add_user
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 128);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pass_tb);
			this->Controls->Add(this->name_tb);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"add_user";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���������� ������������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ password = pass_tb->Text;
		System::String^ login = name_tb->Text;

		System::String^ str = login + "-" + password;

		std::fstream out;
		out.open("Z:\\zubr_db\\usr.zb");
		out.seekg(0, std::ios_base::end);
		out << '\n' << msclr::interop::marshal_as<std::string>(str);
		this->Close();
		
	}
};
}
