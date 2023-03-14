#pragma once

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� groups
	/// </summary>
	public ref class groups : public System::Windows::Forms::Form
	{
	public:
		groups(void)
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
		~groups()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ main_dg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ group;
	private: System::Windows::Forms::TextBox^ rows_num_tb;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ excelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(groups::typeid));
			this->main_dg = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->group = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rows_num_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->excelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_dg
			// 
			this->main_dg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->main_dg->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->num, this->group });
			this->main_dg->Location = System::Drawing::Point(12, 51);
			this->main_dg->Name = L"main_dg";
			this->main_dg->Size = System::Drawing::Size(339, 515);
			this->main_dg->TabIndex = 4;
			this->main_dg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &groups::main_dg_CellContentClick);
			// 
			// num
			// 
			this->num->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->num->HeaderText = L"��/�";
			this->num->Name = L"num";
			this->num->Width = 60;
			// 
			// group
			// 
			this->group->HeaderText = L"�����";
			this->group->Name = L"group";
			this->group->Width = 230;
			// 
			// rows_num_tb
			// 
			this->rows_num_tb->Location = System::Drawing::Point(107, 24);
			this->rows_num_tb->Name = L"rows_num_tb";
			this->rows_num_tb->ReadOnly = true;
			this->rows_num_tb->Size = System::Drawing::Size(64, 20);
			this->rows_num_tb->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"���-�� �������:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(357, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->excelToolStripMenuItem,
					this->wordToolStripMenuItem
			});
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������������ToolStripMenuItem->Text = L"������� � ����";
			// 
			// excelToolStripMenuItem
			// 
			this->excelToolStripMenuItem->Name = L"excelToolStripMenuItem";
			this->excelToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->excelToolStripMenuItem->Text = L"MS Excel";
			// 
			// wordToolStripMenuItem
			// 
			this->wordToolStripMenuItem->Name = L"wordToolStripMenuItem";
			this->wordToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->wordToolStripMenuItem->Text = L"MS Word";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������ToolStripMenuItem,
					this->������������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->��������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�����ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->RightToLeftAutoMirrorImage = true;
			this->��������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Shift | System::Windows::Forms::Keys::Delete));
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Tag = L"";
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�����ToolStripMenuItem.Image")));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Text = L"��������...";
			// 
			// groups
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 578);
			this->Controls->Add(this->rows_num_tb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->main_dg);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"groups";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������";
			this->Load += gcnew System::EventHandler(this, &groups::groups_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groups_Load(System::Object^ sender, System::EventArgs^ e) {
		int rows_num = this->main_dg->Rows->Count;
		this->rows_num_tb->Text = rows_num.ToString();
	}
private: System::Void main_dg_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
