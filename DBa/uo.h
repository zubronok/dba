#pragma once
#include "add_uo.h"

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ uo
	/// </summary>
	public ref class uo : public System::Windows::Forms::Form
	{
	public:
		uo(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~uo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ main_dg;










	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ rows_num_tb;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pod;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ org;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ org_form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ leader;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ site;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ unp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ contact;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adress;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàìåíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïå÷àòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòÂÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ excelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wordToolStripMenuItem;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;












	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:












	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(uo::typeid));
			this->main_dg = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->org = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->org_form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->leader = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->site = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->unp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contact = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rows_num_tb = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàìåíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïå÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->excelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_dg
			// 
			this->main_dg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->main_dg->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->num, this->name,
					this->pod, this->org, this->org_form, this->leader, this->email, this->site, this->unp, this->contact, this->adress
			});
			this->main_dg->Location = System::Drawing::Point(8, 30);
			this->main_dg->Name = L"main_dg";
			this->main_dg->Size = System::Drawing::Size(1304, 601);
			this->main_dg->TabIndex = 0;
			this->main_dg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &uo::dataGridView1_CellContentClick);
			// 
			// num
			// 
			this->num->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->num->HeaderText = L"¹ï/ï";
			this->num->Name = L"num";
			this->num->Width = 60;
			// 
			// name
			// 
			this->name->HeaderText = L"Íàèìåíîâàíèå";
			this->name->Name = L"name";
			this->name->Width = 110;
			// 
			// pod
			// 
			this->pod->HeaderText = L"Ïîä÷èíåíèå";
			this->pod->Name = L"pod";
			this->pod->Width = 130;
			// 
			// org
			// 
			this->org->HeaderText = L"Âûøåñòîÿùèé îğãàí";
			this->org->Name = L"org";
			this->org->Width = 140;
			// 
			// org_form
			// 
			this->org_form->HeaderText = L"Îğãàíèçàöèîííî-ïğàâîâàÿ ôîğìà";
			this->org_form->Name = L"org_form";
			this->org_form->Width = 150;
			// 
			// leader
			// 
			this->leader->HeaderText = L"Ğóêîâîäèòåëü";
			this->leader->Name = L"leader";
			this->leader->Width = 150;
			// 
			// email
			// 
			this->email->HeaderText = L"İëåêòğîííàÿ ïî÷òà";
			this->email->Name = L"email";
			this->email->Width = 110;
			// 
			// site
			// 
			this->site->HeaderText = L"Ñàéò";
			this->site->Name = L"site";
			// 
			// unp
			// 
			this->unp->HeaderText = L"ÓÍÏ";
			this->unp->Name = L"unp";
			this->unp->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// contact
			// 
			this->contact->HeaderText = L"Êîíòàêòû";
			this->contact->Name = L"contact";
			// 
			// adress
			// 
			this->adress->HeaderText = L"Àäğåñ";
			this->adress->Name = L"adress";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1153, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Êîë-âî çàïèñåé:";
			this->label1->Click += gcnew System::EventHandler(this, &uo::label1_Click);
			// 
			// rows_num_tb
			// 
			this->rows_num_tb->Location = System::Drawing::Point(1248, 4);
			this->rows_num_tb->Name = L"rows_num_tb";
			this->rows_num_tb->ReadOnly = true;
			this->rows_num_tb->Size = System::Drawing::Size(64, 20);
			this->rows_num_tb->TabIndex = 2;
			this->rows_num_tb->TextChanged += gcnew System::EventHandler(this, &uo::rows_num_tb_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ïğàâêàToolStripMenuItem,
					this->äîáàâèòüToolStripMenuItem, this->ıêñïîğòToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1324, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->âûğåçàòüToolStripMenuItem,
					this->êîïèğîâàòüToolStripMenuItem, this->âñòàâèòüToolStripMenuItem, this->íàéòèToolStripMenuItem, this->çàìåíèòüToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// âûğåçàòüToolStripMenuItem
			// 
			this->âûğåçàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûğåçàòüToolStripMenuItem.Image")));
			this->âûğåçàòüToolStripMenuItem->Name = L"âûğåçàòüToolStripMenuItem";
			this->âûğåçàòüToolStripMenuItem->RightToLeftAutoMirrorImage = true;
			this->âûğåçàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Shift | System::Windows::Forms::Keys::Delete));
			this->âûğåçàòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->âûğåçàòüToolStripMenuItem->Tag = L"";
			this->âûğåçàòüToolStripMenuItem->Text = L"Âûğåçàòü";
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->êîïèğîâàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"êîïèğîâàòüToolStripMenuItem.Image")));
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"Êîïèğîâàòü";
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âñòàâèòüToolStripMenuItem.Image")));
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->âñòàâèòüToolStripMenuItem->Text = L"Âñòàâèòü";
			// 
			// íàéòèToolStripMenuItem
			// 
			this->íàéòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"íàéòèToolStripMenuItem.Image")));
			this->íàéòèToolStripMenuItem->Name = L"íàéòèToolStripMenuItem";
			this->íàéòèToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->íàéòèToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->íàéòèToolStripMenuItem->Text = L"Íàéòè";
			// 
			// çàìåíèòüToolStripMenuItem
			// 
			this->çàìåíèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"çàìåíèòüToolStripMenuItem.Image")));
			this->çàìåíèòüToolStripMenuItem->Name = L"çàìåíèòüToolStripMenuItem";
			this->çàìåíèòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->çàìåíèòüToolStripMenuItem->Text = L"Çàìåíèòü...";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü";
			this->äîáàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &uo::äîáàâèòüToolStripMenuItem_Click);
			// 
			// ıêñïîğòToolStripMenuItem
			// 
			this->ıêñïîğòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïå÷àòüToolStripMenuItem,
					this->ıêñïîğòÂÔàéëToolStripMenuItem
			});
			this->ıêñïîğòToolStripMenuItem->Name = L"ıêñïîğòToolStripMenuItem";
			this->ıêñïîğòToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->ıêñïîğòToolStripMenuItem->Text = L"İêñïîğò";
			// 
			// ïå÷àòüToolStripMenuItem
			// 
			this->ïå÷àòüToolStripMenuItem->Name = L"ïå÷àòüToolStripMenuItem";
			this->ïå÷àòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïå÷àòüToolStripMenuItem->Text = L"Ïå÷àòü";
			// 
			// ıêñïîğòÂÔàéëToolStripMenuItem
			// 
			this->ıêñïîğòÂÔàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->excelToolStripMenuItem,
					this->wordToolStripMenuItem
			});
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Name = L"ıêñïîğòÂÔàéëToolStripMenuItem";
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Text = L"İêñïîğò â ôàéë";
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
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &uo::printDocument1_PrintPage);
			// 
			// uo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1324, 637);
			this->Controls->Add(this->rows_num_tb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->main_dg);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"uo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ó÷ğåæäåíèå îáğàçîâàíèÿ";
			this->Load += gcnew System::EventHandler(this, &uo::uo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void uo_Load(System::Object^ sender, System::EventArgs^ e) {
		int rows_num = this->main_dg->Rows->Count;
		this->rows_num_tb->Text = rows_num.ToString();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void rows_num_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void äîáàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	add_uo^ form = gcnew add_uo;
	form->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
}
};
}

ref class uo
{
};
