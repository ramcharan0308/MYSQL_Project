#pragma once

namespace studentsql {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ selectbtn;
	private: System::Windows::Forms::Button^ resultbtn;
	private: System::Windows::Forms::Button^ deletebtn;
	private: System::Windows::Forms::Button^ updatebtn;
	private: System::Windows::Forms::Button^ insertbtn;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ nametb;
	private: System::Windows::Forms::Label^ collegetb;
	private: System::Windows::Forms::Label^ phonetb;
	private: System::Windows::Forms::Label^ emailtb;
	private: System::Windows::Forms::Label^ rollnotb;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ resetbtn;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->resetbtn = (gcnew System::Windows::Forms::Button());
			this->selectbtn = (gcnew System::Windows::Forms::Button());
			this->resultbtn = (gcnew System::Windows::Forms::Button());
			this->deletebtn = (gcnew System::Windows::Forms::Button());
			this->updatebtn = (gcnew System::Windows::Forms::Button());
			this->insertbtn = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->nametb = (gcnew System::Windows::Forms::Label());
			this->collegetb = (gcnew System::Windows::Forms::Label());
			this->phonetb = (gcnew System::Windows::Forms::Label());
			this->emailtb = (gcnew System::Windows::Forms::Label());
			this->rollnotb = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1041, 595);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->resetbtn);
			this->tabPage1->Controls->Add(this->selectbtn);
			this->tabPage1->Controls->Add(this->resultbtn);
			this->tabPage1->Controls->Add(this->deletebtn);
			this->tabPage1->Controls->Add(this->updatebtn);
			this->tabPage1->Controls->Add(this->insertbtn);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->nametb);
			this->tabPage1->Controls->Add(this->collegetb);
			this->tabPage1->Controls->Add(this->phonetb);
			this->tabPage1->Controls->Add(this->emailtb);
			this->tabPage1->Controls->Add(this->rollnotb);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1033, 562);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"College System";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// resetbtn
			// 
			this->resetbtn->BackColor = System::Drawing::Color::LightSteelBlue;
			this->resetbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10, System::Drawing::FontStyle::Bold));
			this->resetbtn->Location = System::Drawing::Point(898, 64);
			this->resetbtn->Name = L"resetbtn";
			this->resetbtn->Size = System::Drawing::Size(96, 42);
			this->resetbtn->TabIndex = 43;
			this->resetbtn->Text = L"RESET";
			this->resetbtn->UseVisualStyleBackColor = false;
			this->resetbtn->Click += gcnew System::EventHandler(this, &MyForm::resetbtn_Click);
			// 
			// selectbtn
			// 
			this->selectbtn->BackColor = System::Drawing::Color::LightSteelBlue;
			this->selectbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10, System::Drawing::FontStyle::Bold));
			this->selectbtn->Location = System::Drawing::Point(337, 427);
			this->selectbtn->Name = L"selectbtn";
			this->selectbtn->Size = System::Drawing::Size(129, 52);
			this->selectbtn->TabIndex = 42;
			this->selectbtn->Text = L"SELECT";
			this->selectbtn->UseVisualStyleBackColor = false;
			this->selectbtn->Click += gcnew System::EventHandler(this, &MyForm::selectbtn_Click);
			// 
			// resultbtn
			// 
			this->resultbtn->BackColor = System::Drawing::Color::LightSteelBlue;
			this->resultbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10, System::Drawing::FontStyle::Bold));
			this->resultbtn->Location = System::Drawing::Point(521, 427);
			this->resultbtn->Name = L"resultbtn";
			this->resultbtn->Size = System::Drawing::Size(129, 52);
			this->resultbtn->TabIndex = 41;
			this->resultbtn->Text = L"RESULT";
			this->resultbtn->UseVisualStyleBackColor = false;
			this->resultbtn->Click += gcnew System::EventHandler(this, &MyForm::resultbtn_Click);
			// 
			// deletebtn
			// 
			this->deletebtn->BackColor = System::Drawing::Color::LightSteelBlue;
			this->deletebtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10, System::Drawing::FontStyle::Bold));
			this->deletebtn->Location = System::Drawing::Point(606, 331);
			this->deletebtn->Name = L"deletebtn";
			this->deletebtn->Size = System::Drawing::Size(129, 52);
			this->deletebtn->TabIndex = 40;
			this->deletebtn->Text = L"DELETE";
			this->deletebtn->UseVisualStyleBackColor = false;
			this->deletebtn->Click += gcnew System::EventHandler(this, &MyForm::deletebtn_Click);
			// 
			// updatebtn
			// 
			this->updatebtn->BackColor = System::Drawing::Color::LightSteelBlue;
			this->updatebtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10, System::Drawing::FontStyle::Bold));
			this->updatebtn->Location = System::Drawing::Point(424, 331);
			this->updatebtn->Name = L"updatebtn";
			this->updatebtn->Size = System::Drawing::Size(129, 52);
			this->updatebtn->TabIndex = 39;
			this->updatebtn->Text = L"UPDATE";
			this->updatebtn->UseVisualStyleBackColor = false;
			this->updatebtn->Click += gcnew System::EventHandler(this, &MyForm::updatebtn_Click);
			// 
			// insertbtn
			// 
			this->insertbtn->BackColor = System::Drawing::Color::LightSteelBlue;
			this->insertbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insertbtn->Location = System::Drawing::Point(251, 331);
			this->insertbtn->Name = L"insertbtn";
			this->insertbtn->Size = System::Drawing::Size(129, 52);
			this->insertbtn->TabIndex = 38;
			this->insertbtn->Text = L"INSERT";
			this->insertbtn->UseVisualStyleBackColor = false;
			this->insertbtn->Click += gcnew System::EventHandler(this, &MyForm::insertbtn_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(405, 251);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(330, 35);
			this->textBox5->TabIndex = 37;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(405, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(330, 35);
			this->textBox4->TabIndex = 36;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(405, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(330, 35);
			this->textBox3->TabIndex = 35;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(405, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(330, 35);
			this->textBox2->TabIndex = 34;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(405, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 35);
			this->textBox1->TabIndex = 33;
			// 
			// nametb
			// 
			this->nametb->BackColor = System::Drawing::Color::LightSlateGray;
			this->nametb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nametb->Location = System::Drawing::Point(233, 112);
			this->nametb->Name = L"nametb";
			this->nametb->Size = System::Drawing::Size(147, 35);
			this->nametb->TabIndex = 32;
			this->nametb->Text = L"NAME";
			this->nametb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->nametb->Click += gcnew System::EventHandler(this, &MyForm::nametb_Click);
			// 
			// collegetb
			// 
			this->collegetb->BackColor = System::Drawing::Color::LightSlateGray;
			this->collegetb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->collegetb->Location = System::Drawing::Point(233, 160);
			this->collegetb->Name = L"collegetb";
			this->collegetb->Size = System::Drawing::Size(147, 35);
			this->collegetb->TabIndex = 31;
			this->collegetb->Text = L"COLLEGE :";
			this->collegetb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// phonetb
			// 
			this->phonetb->BackColor = System::Drawing::Color::LightSlateGray;
			this->phonetb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonetb->Location = System::Drawing::Point(233, 206);
			this->phonetb->Name = L"phonetb";
			this->phonetb->Size = System::Drawing::Size(147, 35);
			this->phonetb->TabIndex = 30;
			this->phonetb->Text = L"PHONE :";
			this->phonetb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// emailtb
			// 
			this->emailtb->BackColor = System::Drawing::Color::LightSlateGray;
			this->emailtb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailtb->Location = System::Drawing::Point(233, 251);
			this->emailtb->Name = L"emailtb";
			this->emailtb->Size = System::Drawing::Size(147, 35);
			this->emailtb->TabIndex = 29;
			this->emailtb->Text = L"EMAIL :";
			this->emailtb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rollnotb
			// 
			this->rollnotb->BackColor = System::Drawing::Color::LightSlateGray;
			this->rollnotb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rollnotb->Location = System::Drawing::Point(233, 66);
			this->rollnotb->Name = L"rollnotb";
			this->rollnotb->Size = System::Drawing::Size(147, 35);
			this->rollnotb->TabIndex = 28;
			this->rollnotb->Text = L"ROLL NO:";
			this->rollnotb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1033, 562);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Student DataBase";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 8);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1019, 546);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1038, 595);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		// insert button click
	private: System::Void insertbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Insert clicked");
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=visualcppdb";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int rollno = Int32::Parse(textBox1->Text);
			String^ name = textBox2->Text;
			String^ college = textBox3->Text;
			String^ phone = textBox4->Text;
			String^ email = textBox5->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("insert into userinfotbl values(" + rollno + ",'" + name + "','" + college + "','" + phone + "','" + email + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("User info saved");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
private: System::Void nametb_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   //Select button
private: System::Void selectbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int rollno = Int32::Parse(textBox1->Text);
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=visualcppdb";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from userinfotbl WHERE rollno =" + rollno + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			textBox2->Text = dr->GetString(1);
			textBox3->Text = dr->GetString(2);
			textBox4->Text = dr->GetString(3);
			textBox5->Text = dr->GetString(4);
		}
		con->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

	   //Result button
private: System::Void resultbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=visualcppdb";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select*from userinfotbl", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
}
	   //Update button
private: System::Void updatebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=visualcppdb";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int rollno = Int32::Parse(textBox1->Text);
		String^ name = textBox2->Text;
		String^ college = textBox3->Text;
		String^ phone = textBox4->Text;
		String^ email = textBox5->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("update userinfotbl set name = '" + name + "', college = '"+college+"' , phone = '" + phone + "' , email = '" + email + "' WHERE rollno = "+ rollno +" ", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("User Info Updated");
		con->Close();

}
	   //Delete button
private: System::Void deletebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=visualcppdb";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int rollno = Int32::Parse(textBox1->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from userinfotbl WHERE rollno = " + rollno + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("User Deleted");
		con->Close();

}

	   //Reset button
private: System::Void resetbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=visualcppdb";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		DateTimePicker ResetText();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=visualcppdb";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	if (e->RowIndex >= 0)
	{
		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

		// Populate TextBox controls with values from the selected row
		textBox1->Text = row->Cells[0]->Value->ToString();
		textBox2->Text = row->Cells[1]->Value->ToString();
		textBox3->Text = row->Cells[2]->Value->ToString();
		textBox4->Text = row->Cells[3]->Value->ToString();
		textBox5->Text = row->Cells[4]->Value->ToString(); 
	}


}
};
}
