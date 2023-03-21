#pragma once
#include "remove_user.h"
#include "add_user.h"
#include "change_password.h"
#include "trans.h"
#include "split.h"

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� admins_list
	/// </summary>
	public ref class admins_list : public System::Windows::Forms::Form
	{
	public:
		admins_list(void)
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
		~admins_list()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ users_dg;


	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->users_dg = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->users_dg))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(200, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem1,
					this->�����ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->��������ToolStripMenuItem->Text = L"������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &admins_list::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &admins_list::��������ToolStripMenuItem1_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &admins_list::�������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(116, 20);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &admins_list::��������������ToolStripMenuItem_Click);
			// 
			// users_dg
			// 
			this->users_dg->AllowUserToAddRows = false;
			this->users_dg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->users_dg->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column1, this->name });
			this->users_dg->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->users_dg->Location = System::Drawing::Point(13, 28);
			this->users_dg->Name = L"users_dg";
			this->users_dg->ReadOnly = true;
			this->users_dg->RowHeadersVisible = false;
			this->users_dg->Size = System::Drawing::Size(174, 278);
			this->users_dg->TabIndex = 9;
			this->users_dg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &admins_list::users_dg_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"� �/�";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 45;
			// 
			// name
			// 
			this->name->HeaderText = L"��� ";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 120;
			// 
			// admins_list
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(200, 318);
			this->Controls->Add(this->users_dg);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"admins_list";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������������";
			this->Load += gcnew System::EventHandler(this, &admins_list::admins_list_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->users_dg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		
	}
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		change_password^ f = gcnew change_password;
		f->ShowDialog();
	}
private: System::Void admins_list_Load(System::Object^ sender, System::EventArgs^ e) {
	ifstream inp("Z:\\zubr_db\\usr.zb");
	vector<std::string>* __datas = new vector<std::string>;
	std::string* temp = new std::string;
	while (!inp.eof()) {
		getline(inp, *temp);
		__datas->push_back(*temp);
	}
	delete temp;
	vector<vector<std::string>> data;
	for (int i = 0; i < __datas->size(); i++) {
		data.push_back(split(__datas->at(i), '-'));
	}
	delete __datas;
	for (int i = 0; i < data.size(); i++)
	{
		users_dg->Rows->Add(i+1,  msclr::interop::marshal_as<System::String^>(data[i][0]));
		transf::setLastAddedUserNumber(i+1);
	}
}
private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	add_user^ f = gcnew add_user;
	f->ShowDialog();
	ifstream inp("Z:\\zubr_db\\usr.zb");
	vector<std::string> __datas;
	std::string* temp = new std::string;
	while (!inp.eof()) {
		getline(inp, *temp);
		__datas.push_back(*temp);
	}
	delete temp;
	std::string lastAddedName = split(__datas[__datas.size() - 1], '-')[0];
	users_dg->Rows->Add(transf::getLastAddedUserNumber(), msclr::interop::marshal_as<System::String^>(lastAddedName));
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//
	remove_user^ form = gcnew remove_user;
	form->ShowDialog();
	users_dg->Rows->Clear();
	ifstream inp("Z:\\zubr_db\\usr.zb");
	vector<std::string>* __datas = new vector<std::string>;
	std::string* temp = new std::string;
	while (!inp.eof()) {
		getline(inp, *temp);
		__datas->push_back(*temp);
	}
	delete temp;
	vector<vector<std::string>> data;
	for (int i = 0; i < __datas->size(); i++) {
		data.push_back(split(__datas->at(i), '-'));
	}
	delete __datas;
	for (int i = 0; i < data.size(); i++)
	{
		users_dg->Rows->Add(i + 1, msclr::interop::marshal_as<System::String^>(data[i][0]));
		transf::setLastAddedUserNumber(i + 1);
	}

}
private: System::Void users_dg_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
