#pragma once

namespace Try1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	void SolveEquation(String^ selectedFunction, double A, double B, double C, String^% solution)
	{
		Stopwatch^ stopwatch = gcnew Stopwatch();
		stopwatch->Start();

		if (selectedFunction == "0*x = 0")
		{
			solution = "Ответом является любое значение Х";
			return;
		}
		else if (selectedFunction == "A * x^2 = 0")
		{
			if (A == 0)
			{
				solution = "Ответом является любое значение Х";
				return;
			}
			else
			{
				double x = 0;
				solution = "x = " + x.ToString();
				return;
			}
		}
		else if (selectedFunction == "C = 0")
		{
			if (C == 0)
			{
				solution = "Корней нет";
				return;
			}
			else
			{
				solution = "Корней нет";
				return;
			}
		}
		else if (selectedFunction == "A * x^2 + C = 0")
		{
			if (A == 0 && C == 0)
			{
				solution = "Ответом является любое значение Х";
				return;
			}
			else if (A == 0)
			{
				solution = "Нет решений";
				return;
			}
			else if ((A > 0 && C < 0) || (A < 0 && C > 0))
			{
				double x = Math::Sqrt(-C / A);
				solution = "x = " + x.ToString() + " или x = " + (-x).ToString();
				return;
			}
			else
			{
				solution = "Нет решений";
				return;
			}

		}
		else if (selectedFunction == "B * x + C = 0")
		{
			if (B == 0 && C == 0)
			{
				solution = "Ответом является любое значение Х";
				return;
			}
			else if (B == 0)
			{
				solution = "Нет решений";
				return;
			}
			else
			{
				double x = -C / B;
				solution = "x = " + x.ToString();
				return;
			}
		}
		else if (selectedFunction == "A * x^2 + B * x + C = 0")
		{
			double D = Math::Pow(B, 2) - 4 * A * C;

			if (D > 0)
			{
				double x1 = (-B + Math::Sqrt(D)) / (2 * A);
				double x2 = (-B - Math::Sqrt(D)) / (2 * A);
				solution = "x1 = " + x1.ToString() + ", x2 = " + x2.ToString();
			}
			else if (A == 0 && B == 0 && C == 0)
			{
				solution = "Ответом является любое значение X";
			}
			else if (D == 0)
			{
				double x = -B / (2 * A);
				solution = "x = " + x.ToString();
			}
			else
			{
				solution = "Нет реальных корней";
			}

			return;
		}
		else if (selectedFunction == "B * x = 0")
		{
			if (B == 0)
			{
				solution = "Ответом является любое значение Х";
				return;
			}

			else
			{
				double x = 0;
				solution = "x = " + x.ToString();
				return;
			}
		}
		else if (selectedFunction == "A * x^2 + B * x = 0")
		{
			double D = Math::Pow(B, 2) - 4 * A * 0;

			if (D > 0)
			{
				double x1 = (-B + Math::Sqrt(D)) / (2 * A);
				double x2 = (-B - Math::Sqrt(D)) / (2 * A);
				solution = "x1 = " + x1.ToString() + ", x2 = " + x2.ToString();
			}
			else if (A == 0 && B == 0)
			{
				solution = "Ответом является любое значение X";
			}

			else if (D == 0)
			{
				double x = -B / (2 * A);
				solution = "x = " + x.ToString();
			}
			else
			{
				solution = "Нет реальных корней";
			}

			return;
		}

		

	}

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ buttonSolve;

	private: System::Windows::Forms::Label^ lbSolve;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->buttonSolve = (gcnew System::Windows::Forms::Button());
			this->lbSolve = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(70, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Решение квадратных уравнений";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"0 * x = 0", L"A * x^2 = 0", L"C = 0", L"A * x^2 + C = 0",
					L"B * x + C = 0", L"A * x^2 + B * x + C = 0", L"B * x = 0", L"A * x^2 + B * x = 0"
			});
			this->comboBox1->Location = System::Drawing::Point(135, 107);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(194, 29);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(130, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Выберите тип уравнения:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(144, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введите коэффициенты";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(71, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 21);
			this->label4->TabIndex = 4;
			this->label4->Text = L"A :";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 273);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 21);
			this->label6->TabIndex = 6;
			this->label6->Text = L"B :";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(71, 343);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 21);
			this->label7->TabIndex = 7;
			this->label7->Text = L"C :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(78, 516);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 21);
			this->label8->TabIndex = 8;
			this->label8->Text = L"ОТВЕТ :";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(105, 207);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(296, 27);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(105, 270);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(297, 27);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(105, 340);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(296, 27);
			this->textBox3->TabIndex = 11;
			// 
			// buttonSolve
			// 
			this->buttonSolve->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSolve->Location = System::Drawing::Point(3, 4);
			this->buttonSolve->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonSolve->Name = L"buttonSolve";
			this->buttonSolve->Size = System::Drawing::Size(175, 47);
			this->buttonSolve->TabIndex = 12;
			this->buttonSolve->Text = L"Решить";
			this->buttonSolve->UseVisualStyleBackColor = true;
			this->buttonSolve->Click += gcnew System::EventHandler(this, &MyForm::buttonSolve_Click);
			// 
			// lbSolve
			// 
			this->lbSolve->AutoSize = true;
			this->lbSolve->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSolve->Location = System::Drawing::Point(148, 516);
			this->lbSolve->Name = L"lbSolve";
			this->lbSolve->Size = System::Drawing::Size(0, 21);
			this->lbSolve->TabIndex = 13;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->buttonSolve, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(148, 412);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(181, 55);
			this->tableLayoutPanel1->TabIndex = 14;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(478, 599);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbSolve);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(496, 646);
			this->Name = L"MyForm";
			this->Text = L"MathPoint";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonSolve_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double A, B, C;

		try {
			A = double::Parse(textBox1->Text);
		}
		catch (FormatException^) {
			lbSolve->Text = "Ошибка: Неверный формат ввода для коэффициента A";
			return;
		}

		try {
			B = double::Parse(textBox1->Text);
		}
		catch (FormatException^) {
			lbSolve->Text = "Ошибка: Неверный формат ввода для коэффициента B";
			return;
		}

		try {
			C = double::Parse(textBox3->Text);
		}
		catch (FormatException^) {
			lbSolve->Text = "Ошибка: Неверный формат ввода для коэффициента C";
			return;
		}


		String^ selectedFunction = comboBox1->SelectedItem->ToString();
		String^ solution;


		SolveEquation(selectedFunction, A, B, C, solution);


		lbSolve->Text = solution;

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ selectedFunction = comboBox1->SelectedItem->ToString();
		if (selectedFunction == "0 * x = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		else if (selectedFunction == "C = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		else if (selectedFunction == "B * x = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		else if (selectedFunction == "A * x^2 = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		else if (selectedFunction == "A * x^2 + C = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		else if (selectedFunction == "A * x^2 + B * x + C = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		else if (selectedFunction == "A * x^2 + B * x = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		else if (selectedFunction == "B * x + C = 0")
		{
			textBox1->Text = "0";
			textBox2->Text = "0";
			textBox3->Text = "0";
		}
		if (selectedFunction == "0 * x = 0")
		{
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
		}
		else if (selectedFunction == "C = 0")
		{
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = true;
		}
		else if (selectedFunction == "B * x = 0")
		{
			textBox1->Enabled = false;
			textBox2->Enabled = true;
			textBox3->Enabled = false;
		}
		else if (selectedFunction == "A * x^2 = 0")
		{
			textBox1->Enabled = true;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
		}
		else if (selectedFunction == "A * x^2 + C = 0")
		{
			textBox1->Enabled = true;
			textBox2->Enabled = false;
			textBox3->Enabled = true;
		}
		else if (selectedFunction == "A * x^2 + B * x + C = 0")
		{
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
		}
		else if (selectedFunction == "A * x^2 + B * x = 0")
		{
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = false;
		}
		else if (selectedFunction == "B * x + C = 0")
		{
			textBox1->Enabled = false;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
		}

	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
	}
