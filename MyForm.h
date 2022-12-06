#pragma once

namespace SredniaOcen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		double sredniaMax = 0;
	private: System::Windows::Forms::Label^ minSrednia;
	public:
	private: System::Windows::Forms::Label^ maxSrednia;
		   double sredniaMin = 7;

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
		int numerStudenta = 0;
	private: System::Windows::Forms::NumericUpDown^ ocena8NUD;
	private: System::Windows::Forms::NumericUpDown^ ocena1NUD;
	protected:

	protected:

	private: System::Windows::Forms::NumericUpDown^ ocena2NUD;

	private: System::Windows::Forms::NumericUpDown^ ocena3NUD;

	private: System::Windows::Forms::NumericUpDown^ ocena4NUD;

	private: System::Windows::Forms::NumericUpDown^ ocena5NUD;

	private: System::Windows::Forms::NumericUpDown^ ocena6NUD;

	private: System::Windows::Forms::NumericUpDown^ ocena7NUD;
	private: System::Windows::Forms::TextBox^ ImieNazwiskoTB;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Student1LB;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Student2LB;
	private: System::Windows::Forms::Label^ Student3LB;
	private: System::Windows::Forms::Label^ Student9LB;



	private: System::Windows::Forms::Label^ Student8LB;

	private: System::Windows::Forms::Label^ Student7LB;

	private: System::Windows::Forms::Label^ Student6LB;

	private: System::Windows::Forms::Label^ Student5LB;

	private: System::Windows::Forms::Label^ Student4LB;
	private: System::Windows::Forms::Label^ Student10LB;























	protected:








	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:













	protected:





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
			this->ocena8NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ocena1NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ocena2NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ocena3NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ocena4NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ocena5NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ocena6NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ocena7NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->ImieNazwiskoTB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Student1LB = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Student2LB = (gcnew System::Windows::Forms::Label());
			this->Student3LB = (gcnew System::Windows::Forms::Label());
			this->Student9LB = (gcnew System::Windows::Forms::Label());
			this->Student8LB = (gcnew System::Windows::Forms::Label());
			this->Student7LB = (gcnew System::Windows::Forms::Label());
			this->Student6LB = (gcnew System::Windows::Forms::Label());
			this->Student5LB = (gcnew System::Windows::Forms::Label());
			this->Student4LB = (gcnew System::Windows::Forms::Label());
			this->Student10LB = (gcnew System::Windows::Forms::Label());
			this->minSrednia = (gcnew System::Windows::Forms::Label());
			this->maxSrednia = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena8NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena1NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena2NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena3NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena4NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena5NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena6NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena7NUD))->BeginInit();
			this->SuspendLayout();
			// 
			// ocena8NUD
			// 
			this->ocena8NUD->Location = System::Drawing::Point(41, 424);
			this->ocena8NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena8NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena8NUD->Name = L"ocena8NUD";
			this->ocena8NUD->Size = System::Drawing::Size(180, 26);
			this->ocena8NUD->TabIndex = 1;
			// 
			// ocena1NUD
			// 
			this->ocena1NUD->Location = System::Drawing::Point(41, 144);
			this->ocena1NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena1NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena1NUD->Name = L"ocena1NUD";
			this->ocena1NUD->Size = System::Drawing::Size(180, 26);
			this->ocena1NUD->TabIndex = 2;
			// 
			// ocena2NUD
			// 
			this->ocena2NUD->Location = System::Drawing::Point(41, 184);
			this->ocena2NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena2NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena2NUD->Name = L"ocena2NUD";
			this->ocena2NUD->Size = System::Drawing::Size(180, 26);
			this->ocena2NUD->TabIndex = 3;
			// 
			// ocena3NUD
			// 
			this->ocena3NUD->Location = System::Drawing::Point(41, 224);
			this->ocena3NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena3NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena3NUD->Name = L"ocena3NUD";
			this->ocena3NUD->Size = System::Drawing::Size(180, 26);
			this->ocena3NUD->TabIndex = 4;
			// 
			// ocena4NUD
			// 
			this->ocena4NUD->Location = System::Drawing::Point(41, 264);
			this->ocena4NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena4NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena4NUD->Name = L"ocena4NUD";
			this->ocena4NUD->Size = System::Drawing::Size(180, 26);
			this->ocena4NUD->TabIndex = 5;
			// 
			// ocena5NUD
			// 
			this->ocena5NUD->Location = System::Drawing::Point(41, 304);
			this->ocena5NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena5NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena5NUD->Name = L"ocena5NUD";
			this->ocena5NUD->Size = System::Drawing::Size(180, 26);
			this->ocena5NUD->TabIndex = 6;
			// 
			// ocena6NUD
			// 
			this->ocena6NUD->Location = System::Drawing::Point(41, 344);
			this->ocena6NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena6NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena6NUD->Name = L"ocena6NUD";
			this->ocena6NUD->Size = System::Drawing::Size(180, 26);
			this->ocena6NUD->TabIndex = 7;
			// 
			// ocena7NUD
			// 
			this->ocena7NUD->Location = System::Drawing::Point(41, 384);
			this->ocena7NUD->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ocena7NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ocena7NUD->Name = L"ocena7NUD";
			this->ocena7NUD->Size = System::Drawing::Size(180, 26);
			this->ocena7NUD->TabIndex = 8;
			// 
			// ImieNazwiskoTB
			// 
			this->ImieNazwiskoTB->Location = System::Drawing::Point(41, 27);
			this->ImieNazwiskoTB->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ImieNazwiskoTB->MaxLength = 40;
			this->ImieNazwiskoTB->Multiline = true;
			this->ImieNazwiskoTB->Name = L"ImieNazwiskoTB";
			this->ImieNazwiskoTB->Size = System::Drawing::Size(228, 46);
			this->ImieNazwiskoTB->TabIndex = 10;
			this->ImieNazwiskoTB->Text = L"Imie i nazwisko studenta";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 106);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Wprowadź oceny w pola poniżej";
			// 
			// Student1LB
			// 
			this->Student1LB->AutoSize = true;
			this->Student1LB->Location = System::Drawing::Point(409, 27);
			this->Student1LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student1LB->Name = L"Student1LB";
			this->Student1LB->Size = System::Drawing::Size(0, 20);
			this->Student1LB->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 471);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 72);
			this->button1->TabIndex = 13;
			this->button1->Text = L"zatwierdź oceny";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Student2LB
			// 
			this->Student2LB->AutoSize = true;
			this->Student2LB->Location = System::Drawing::Point(409, 61);
			this->Student2LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student2LB->Name = L"Student2LB";
			this->Student2LB->Size = System::Drawing::Size(0, 20);
			this->Student2LB->TabIndex = 14;
			// 
			// Student3LB
			// 
			this->Student3LB->AutoSize = true;
			this->Student3LB->Location = System::Drawing::Point(409, 97);
			this->Student3LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student3LB->Name = L"Student3LB";
			this->Student3LB->Size = System::Drawing::Size(0, 20);
			this->Student3LB->TabIndex = 15;
			// 
			// Student9LB
			// 
			this->Student9LB->AutoSize = true;
			this->Student9LB->Location = System::Drawing::Point(409, 310);
			this->Student9LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student9LB->Name = L"Student9LB";
			this->Student9LB->Size = System::Drawing::Size(0, 20);
			this->Student9LB->TabIndex = 16;
			// 
			// Student8LB
			// 
			this->Student8LB->AutoSize = true;
			this->Student8LB->Location = System::Drawing::Point(409, 275);
			this->Student8LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student8LB->Name = L"Student8LB";
			this->Student8LB->Size = System::Drawing::Size(0, 20);
			this->Student8LB->TabIndex = 17;
			// 
			// Student7LB
			// 
			this->Student7LB->AutoSize = true;
			this->Student7LB->Location = System::Drawing::Point(409, 242);
			this->Student7LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student7LB->Name = L"Student7LB";
			this->Student7LB->Size = System::Drawing::Size(0, 20);
			this->Student7LB->TabIndex = 18;
			// 
			// Student6LB
			// 
			this->Student6LB->AutoSize = true;
			this->Student6LB->Location = System::Drawing::Point(409, 206);
			this->Student6LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student6LB->Name = L"Student6LB";
			this->Student6LB->Size = System::Drawing::Size(0, 20);
			this->Student6LB->TabIndex = 19;
			// 
			// Student5LB
			// 
			this->Student5LB->AutoSize = true;
			this->Student5LB->Location = System::Drawing::Point(409, 169);
			this->Student5LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student5LB->Name = L"Student5LB";
			this->Student5LB->Size = System::Drawing::Size(0, 20);
			this->Student5LB->TabIndex = 20;
			// 
			// Student4LB
			// 
			this->Student4LB->AutoSize = true;
			this->Student4LB->Location = System::Drawing::Point(409, 133);
			this->Student4LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student4LB->Name = L"Student4LB";
			this->Student4LB->Size = System::Drawing::Size(0, 20);
			this->Student4LB->TabIndex = 21;
			// 
			// Student10LB
			// 
			this->Student10LB->AutoSize = true;
			this->Student10LB->Location = System::Drawing::Point(409, 341);
			this->Student10LB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Student10LB->Name = L"Student10LB";
			this->Student10LB->Size = System::Drawing::Size(0, 20);
			this->Student10LB->TabIndex = 22;
			// 
			// minSrednia
			// 
			this->minSrednia->AutoSize = true;
			this->minSrednia->Location = System::Drawing::Point(406, 383);
			this->minSrednia->Name = L"minSrednia";
			this->minSrednia->Size = System::Drawing::Size(0, 20);
			this->minSrednia->TabIndex = 23;
			// 
			// maxSrednia
			// 
			this->maxSrednia->AutoSize = true;
			this->maxSrednia->Location = System::Drawing::Point(405, 414);
			this->maxSrednia->Name = L"maxSrednia";
			this->maxSrednia->Size = System::Drawing::Size(0, 20);
			this->maxSrednia->TabIndex = 24;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1110, 949);
			this->Controls->Add(this->maxSrednia);
			this->Controls->Add(this->minSrednia);
			this->Controls->Add(this->Student10LB);
			this->Controls->Add(this->Student4LB);
			this->Controls->Add(this->Student5LB);
			this->Controls->Add(this->Student6LB);
			this->Controls->Add(this->Student7LB);
			this->Controls->Add(this->Student8LB);
			this->Controls->Add(this->Student9LB);
			this->Controls->Add(this->Student3LB);
			this->Controls->Add(this->Student2LB);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Student1LB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ImieNazwiskoTB);
			this->Controls->Add(this->ocena7NUD);
			this->Controls->Add(this->ocena6NUD);
			this->Controls->Add(this->ocena5NUD);
			this->Controls->Add(this->ocena4NUD);
			this->Controls->Add(this->ocena3NUD);
			this->Controls->Add(this->ocena2NUD);
			this->Controls->Add(this->ocena1NUD);
			this->Controls->Add(this->ocena8NUD);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena8NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena1NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena2NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena3NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena4NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena5NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena6NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ocena7NUD))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double srednia = 0;
		int suma = 0;
		int numerOceny = 0;
		String^ ocenyStudenta = nullptr;
		String^ daneStudenta = nullptr;
		numerStudenta++;
		if (numerStudenta>10)
		{
			MessageBox::Show("Mozesz dodac tylko 10 studentów.");
			return;
		}
		for (int i = 1; i < 9; i++)
		{
			String^ namei = "ocena" + System::Convert::ToString(i) + "NUD";
			Control^ temp = Controls->Find(namei, true)[0];
			if (System::Convert::ToInt16(temp->Text)>0)
			{


				suma = suma + System::Convert::ToInt16(temp->Text);
				ocenyStudenta = ocenyStudenta + System::Convert::ToString(temp->Text) + ", ";
				numerOceny++;
				temp->Text = "0";
			}
		}
		srednia = System::Convert::ToDouble(suma)/ System::Convert::ToDouble(numerOceny);
		String^ nazwaLB = "Student" + System::Convert::ToString(numerStudenta) + "LB";
		Control^ temp = Controls->Find(nazwaLB, true)[0];
		temp->Text =ImieNazwiskoTB->Text +" Oceny: " + ocenyStudenta + " srednia: "+ System::Convert::ToString(srednia);
		if (srednia<sredniaMin)
		{
			sredniaMin = srednia;
		}if (srednia > sredniaMax)
		{
			sredniaMax = srednia;
		}
		ImieNazwiskoTB->Text = "";
		minSrednia->Text ="najnizsza srednia: "+ System::Convert::ToString(sredniaMin);
		maxSrednia->Text = "najwysza srednia: " + System::Convert::ToString(sredniaMax);
	};

	


};
}