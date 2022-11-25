#pragma once
#include "Header.h"

std::vector<Table> tables;
std::vector<Waiter> waiters;

namespace KR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Beige;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10));
			this->textBox1->Location = System::Drawing::Point(632, 58);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(658, 295);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10));
			this->textBox2->Location = System::Drawing::Point(28, 58);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(250, 656);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10));
			this->textBox3->Location = System::Drawing::Point(341, 58);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(250, 656);
			this->textBox3->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Beige;
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(632, 364);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(658, 354);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Панель управления";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->numericUpDown5);
			this->groupBox4->Location = System::Drawing::Point(426, 50);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 212);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Персонал";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkKhaki;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Transparent;
			this->button5->Location = System::Drawing::Point(15, 146);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Уволить";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Уволить сотрудника";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(15, 103);
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 29);
			this->numericUpDown5->TabIndex = 7;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Beige;
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10));
			this->groupBox3->Location = System::Drawing::Point(220, 50);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 212);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Рассчитаться";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 22);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Номер столика";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 22);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Номер официанта";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(24, 103);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 28);
			this->numericUpDown4->TabIndex = 3;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(24, 57);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 28);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkKhaki;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(24, 146);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 50);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Рассчитать";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Beige;
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10));
			this->groupBox2->Location = System::Drawing::Point(10, 50);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 212);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Отдать столик";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Номер столика";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10));
			this->label4->Location = System::Drawing::Point(6, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Номер официанта";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(9, 103);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 28);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(9, 57);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 28);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkKhaki;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(26, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 50);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Отдать";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Olive;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(341, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Столик";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(28, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Официант";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10));
			this->textBox4->Location = System::Drawing::Point(632, 21);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(210, 28);
			this->textBox4->TabIndex = 7;
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(848, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Поиск официанта";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkKhaki;
			this->ClientSize = System::Drawing::Size(1316, 726);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->Text = L"Cafe \"Kupidon\"";
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Waiter ob;
		waiters.push_back(ob);
		textBox2->Text = "";
		for (int i = 0; i < waiters.size(); i++) {
			textBox2->Text += (i + 1) + ") ";
			waiters[i].print(textBox2);
			textBox2->Text += "\r\n";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		static int i = 1;
		if (tables.size() >= 10)
			textBox1->Text = "В кафе всего 10 столиков!\r\n";
		else {
			Table ob1(i);
			tables.push_back(ob1);
			++i;
			textBox3->Text = "";
			for (int i = 0; i < tables.size(); i++) {
				textBox3->Text += (i + 1) + ") ";
				tables[i].print(textBox3);
				textBox3->Text += "\r\n";
			}
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n1 = (int)numericUpDown1->Value;
		int n2 = (int)numericUpDown2->Value;
		if (n1 <= 0 || n1 > waiters.size() || n2 <= 0 || n2 > tables.size()) {
			textBox1->Text += "\r\nНеправильное значение";
		}
		else if (tables[n2 - 1].is_waiter()) {
			textBox1->Text += "\r\nСтолик привязан за другим работником";
		}
		else if (waiters[n1 - 1].get_post() == "Администратор" && waiters[n1 - 1].get_size() >= 1) {
			textBox1->Text += "\r\nАдминистраторы могут обслуживать только один столик";
		}
		else if ((tables[n2 - 1].is_vip()) && waiters[n1 - 1].get_post() == "Официант") {
			textBox1->Text += "\r\nЭто вип столик, выделите старшого работника";
		}
		else {
			textBox1->Text = "";
			waiters[n1 - 1](tables[n2 - 1]);
			waiters[n1 - 1].print_arr(textBox1);
			textBox2->Text = "";

			for (int i = 0; i < waiters.size(); i++) {
				textBox2->Text += (i + 1) + ") ";
				waiters[i].print(textBox2);
				textBox2->Text += "\r\n";
			}
			textBox3->Text = "";
			for (int i = 0; i < tables.size(); i++) {
				textBox3->Text += (i + 1) + ") ";
				tables[i].print(textBox3);
				textBox3->Text += "\r\n";
			}
		}
	}
	private: System::Void textBox4_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		String^ str = textBox4->Text;
		textBox1->Text = "";
		for (int i = 0; i < waiters.size(); i++) {

			if (waiters[i].get_name() == msclr::interop::marshal_as<std::string>(str)) {
				textBox1->Text += (i + 1) + ") ";
				waiters[i].print_arr(textBox1);
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int n1 = (int)numericUpDown3->Value;
		int n2 = (int)numericUpDown4->Value;
		textBox1->Text = "";
		if (n1 <= 0 || n1 > waiters.size() || n2 <= 0 || n2 > tables.size()) {
			textBox1->Text += "Введеное число некоректное";
		}
		else {

			if (waiters[n1 - 1].is_idx(n2)) {

				tables[n2 - 1].set_waiter(false);
				tables[n2 - 1].set_count();
				waiters[n1 - 1] - n2;
				waiters[n1 - 1].print_arr(textBox1);
			}
		}
		textBox2->Text = "";
		for (int i = 0; i < waiters.size(); i++) {
			textBox2->Text += (i + 1) + ") ";
			waiters[i].print(textBox2);
			textBox2->Text += "\r\n";
		}
		textBox3->Text = "";
		for (int i = 0; i < tables.size(); i++) {
			textBox3->Text += (i + 1) + ") ";
			tables[i].print(textBox3);
			textBox3->Text += "\r\n";
		}
	}



	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int n1 = (int)numericUpDown5->Value;
		if (n1 > waiters.size())
			textBox1->Text += "Неправильное значение";
		else if (n1 == 0)
			textBox1->Text += "Неправильное значение";
		else {
			;
			for (int i = 0; i < tables.size(); i++) {
				if (waiters[n1 - 1].is_idx(i)) {
					tables[i - 1].set_waiter(false);
					tables[i - 1].set_count();
				}
			}

			waiters.erase(waiters.begin() + (n1 - 1));
			textBox1->Text = "";
			textBox2->Text = "";
			for (int i = 0; i < waiters.size(); i++) {
				textBox2->Text += (i + 1) + ") ";
				waiters[i].print(textBox2);
				textBox2->Text += "\r\n";
			}
			textBox3->Text = "";
			for (int i = 0; i < tables.size(); i++) {
				textBox3->Text += (i + 1) + ") ";
				tables[i].print(textBox3);
				textBox3->Text += "\r\n";
			}
		}
	}

	};
}
