#pragma once

namespace proj2 {
using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Data;
	/// <summary>
	/// Summary for Manager
	/// </summary>
	public ref class Manager : public System::Windows::Forms::Form
	{

	public:
		Manager(void)
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
		~Manager()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	public: System::Windows::Forms::Label^  label33;
	private: 
	private: System::Windows::Forms::Label^  label32;
	public: 
	public: System::Windows::Forms::Label^  label31;
	private: 
	public: System::Windows::Forms::Label^  label30;
	public: System::Windows::Forms::Label^  label29;
	public: System::Windows::Forms::Label^  label28;
	public: System::Windows::Forms::Label^  label27;
	public: System::Windows::Forms::Label^  label26;
	public: System::Windows::Forms::Label^  label25;
	public: System::Windows::Forms::Label^  label24;
	public: System::Windows::Forms::Label^  label23;
	public: System::Windows::Forms::Label^  label22;
	public: System::Windows::Forms::Label^  label21;
	public: System::Windows::Forms::Label^  label20;
	public: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	public: 
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Label^  label17;
	private: 
	private: System::Windows::Forms::Label^  label16;
	public: 
	public: System::Windows::Forms::Label^  label15;
	private: 
	private: System::Windows::Forms::Label^  label14;
	public: 
	public: System::Windows::Forms::Label^  label13;
	private: 
	private: System::Windows::Forms::Label^  label12;
	public: 
	public: System::Windows::Forms::Label^  label11;
	private: 
	private: System::Windows::Forms::Label^  label10;
	public: 
	public: System::Windows::Forms::Label^  label9;
	private: 
	private: System::Windows::Forms::Label^  label8;
	public: 
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Label^  label6;
	private: 
	public: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TabPage^  tabPage1;
	public: 
	public: System::Windows::Forms::Label^  empemail;
	private: 
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  empcontact;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  empaddress;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  empdob;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  empname;
	public: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  mantabcontrol;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::DataGridView^  dataGridView1;
	public: 

	protected: 

	protected: 







	private: 
















	private: 



	private: 



	private: 



	private: 



	private: 

















	private: 



























private: 







	public: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->empemail = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->empcontact = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->empaddress = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->empdob = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->empname = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mantabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->mantabcontrol->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button13);
			this->tabPage5->Controls->Add(this->dataGridView1);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(860, 514);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Reports  ";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->tabPage5->Click += gcnew System::EventHandler(this, &Manager::tabPage5_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(138, 111);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Load Table";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Manager::button13_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(349, 86);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label37);
			this->tabPage4->Controls->Add(this->label36);
			this->tabPage4->Controls->Add(this->label35);
			this->tabPage4->Controls->Add(this->label34);
			this->tabPage4->Controls->Add(this->label33);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Controls->Add(this->label29);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(860, 514);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Pay Slip   ";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &Manager::tabPage4_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(345, 377);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(17, 18);
			this->label37->TabIndex = 19;
			this->label37->Text = L"=";
			this->label37->Click += gcnew System::EventHandler(this, &Manager::label37_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(366, 345);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(172, 18);
			this->label36->TabIndex = 18;
			this->label36->Text = L"Net Pay - Provident Fund";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(320, 299);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(17, 18);
			this->label35->TabIndex = 17;
			this->label35->Text = L"=";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(343, 272);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(404, 18);
			this->label34->TabIndex = 16;
			this->label34->Text = L"Basic Pay + Dearness Allowance + House Rental Allowance";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(366, 136);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(54, 18);
			this->label33->TabIndex = 15;
			this->label33->Text = L"label33";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(268, 136);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(83, 18);
			this->label32->TabIndex = 14;
			this->label32->Text = L"Basic Pay=";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(366, 377);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(54, 18);
			this->label31->TabIndex = 13;
			this->label31->Text = L"label31";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(262, 345);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(98, 18);
			this->label30->TabIndex = 12;
			this->label30->Text = L"Gross Pay=";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(343, 299);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(54, 18);
			this->label29->TabIndex = 11;
			this->label29->Text = L"label29";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(268, 272);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(77, 18);
			this->label28->TabIndex = 10;
			this->label28->Text = L"Net Pay=";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(392, 236);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(54, 18);
			this->label27->TabIndex = 9;
			this->label27->Text = L"label27";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(268, 236);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(116, 18);
			this->label26->TabIndex = 8;
			this->label26->Text = L"Provident Fund=";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(452, 202);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 18);
			this->label25->TabIndex = 7;
			this->label25->Text = L"label25";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(268, 202);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(178, 18);
			this->label24->TabIndex = 6;
			this->label24->Text = L"House Rental Allowance=";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(426, 170);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 18);
			this->label23->TabIndex = 5;
			this->label23->Text = L"label23";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(268, 170);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(152, 18);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Dearness Allowance=";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(680, 35);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 18);
			this->label21->TabIndex = 3;
			this->label21->Text = L"label21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(513, 35);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(161, 18);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Bank Account Number:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(159, 35);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 18);
			this->label19->TabIndex = 1;
			this->label19->Text = L"label19";
			this->label19->Click += gcnew System::EventHandler(this, &Manager::label19_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(34, 35);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(114, 18);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Manager Name:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(860, 514);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Set Timings   ";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Manager::tabPage3_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(597, 204);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 23);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Submit";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &Manager::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(597, 165);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 23);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Submit";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &Manager::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(597, 127);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 23);
			this->button10->TabIndex = 22;
			this->button10->Text = L"Submit";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &Manager::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(597, 93);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 23);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Submit";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &Manager::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(597, 51);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 23);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Submit";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &Manager::button8_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(413, 207);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(139, 24);
			this->textBox6->TabIndex = 19;
			this->textBox6->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(413, 165);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(139, 24);
			this->textBox5->TabIndex = 18;
			this->textBox5->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(413, 130);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 24);
			this->textBox4->TabIndex = 17;
			this->textBox4->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(413, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(139, 24);
			this->textBox3->TabIndex = 16;
			this->textBox3->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(413, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 24);
			this->textBox2->TabIndex = 15;
			this->textBox2->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(273, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 23);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Change";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Manager::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(273, 160);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Change";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Manager::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(273, 123);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Change";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Manager::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(273, 90);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Change";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Manager::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(273, 51);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Change";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Manager::button3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(173, 206);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 18);
			this->label17->TabIndex = 9;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(62, 208);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 18);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Friday:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(173, 166);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 18);
			this->label15->TabIndex = 7;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(46, 168);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(73, 18);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Thursday:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(173, 129);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 18);
			this->label13->TabIndex = 5;
			this->label13->Text = L"label13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(29, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 18);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Wednesday:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(168, 90);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 18);
			this->label11->TabIndex = 3;
			this->label11->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(46, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 18);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Tuesday:";
			this->label10->Click += gcnew System::EventHandler(this, &Manager::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(165, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 18);
			this->label9->TabIndex = 1;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(46, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 18);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Monday:";
			this->label8->Click += gcnew System::EventHandler(this, &Manager::label8_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(860, 514);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Bank A/C   ";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Manager::tabPage2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 224);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 24);
			this->textBox1->TabIndex = 14;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Manager::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(321, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 33);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Manager::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Update Account Number";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Manager::button1_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(188, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Account Number:";
			this->label6->Click += gcnew System::EventHandler(this, &Manager::label6_Click);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(54, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 22);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Account Number:";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->empemail);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->empcontact);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->empaddress);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->empdob);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->empname);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(860, 514);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Personal Info";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Manager::tabPage1_Click);
			// 
			// empemail
			// 
			this->empemail->Location = System::Drawing::Point(213, 372);
			this->empemail->Name = L"empemail";
			this->empemail->Size = System::Drawing::Size(112, 22);
			this->empemail->TabIndex = 17;
			this->empemail->Text = L"Email";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(79, 372);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 22);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Email :";
			// 
			// empcontact
			// 
			this->empcontact->Location = System::Drawing::Point(213, 273);
			this->empcontact->Name = L"empcontact";
			this->empcontact->Size = System::Drawing::Size(112, 22);
			this->empcontact->TabIndex = 15;
			this->empcontact->Text = L"contact :";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(79, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 22);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Contact :";
			// 
			// empaddress
			// 
			this->empaddress->Location = System::Drawing::Point(213, 180);
			this->empaddress->Name = L"empaddress";
			this->empaddress->Size = System::Drawing::Size(278, 46);
			this->empaddress->TabIndex = 13;
			this->empaddress->Text = L"Address :";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(79, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 22);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Address :";
			// 
			// empdob
			// 
			this->empdob->Location = System::Drawing::Point(213, 116);
			this->empdob->Name = L"empdob";
			this->empdob->Size = System::Drawing::Size(146, 22);
			this->empdob->TabIndex = 11;
			this->empdob->Text = L"Dob";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(79, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 22);
			this->label2->TabIndex = 10;
			this->label2->Text = L"DOB :";
			// 
			// empname
			// 
			this->empname->Location = System::Drawing::Point(213, 55);
			this->empname->Name = L"empname";
			this->empname->Size = System::Drawing::Size(126, 22);
			this->empname->TabIndex = 9;
			this->empname->Text = L"Name :";
			this->empname->Click += gcnew System::EventHandler(this, &Manager::empname_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(79, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Name :";
			// 
			// mantabcontrol
			// 
			this->mantabcontrol->Controls->Add(this->tabPage1);
			this->mantabcontrol->Controls->Add(this->tabPage2);
			this->mantabcontrol->Controls->Add(this->tabPage3);
			this->mantabcontrol->Controls->Add(this->tabPage4);
			this->mantabcontrol->Controls->Add(this->tabPage5);
			this->mantabcontrol->Location = System::Drawing::Point(12, 12);
			this->mantabcontrol->Name = L"mantabcontrol";
			this->mantabcontrol->Padding = System::Drawing::Point(22, 4);
			this->mantabcontrol->SelectedIndex = 0;
			this->mantabcontrol->Size = System::Drawing::Size(868, 547);
			this->mantabcontrol->TabIndex = 1;
			// 
			// Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 580);
			this->Controls->Add(this->mantabcontrol);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Manager";
			this->Text = L"Manager";
			this->Load += gcnew System::EventHandler(this, &Manager::Manager_Load);
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->mantabcontrol->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Manager_Load(System::Object^  sender, System::EventArgs^  e) {
						 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void empname_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
					
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text="";
	this->textBox1->Visible=true;
	this->button2->Visible=true;
		 }
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
					conDataBase1->Open();
					MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee.managers where username='a.anand';",conDataBase1);
					MySqlDataReader^ myReader;
					myReader=cmdDataBase2->ExecuteReader();
					myReader->Read();
					int count2;
					count2 = System::Convert::ToInt32(myReader->GetString(8));
					myReader->Close();
						int counter = 0;
					MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee.managers;",conDataBase1);
//					MySqlDataReader^ myReader;
					
						myReader=cmdDataBase3->ExecuteReader();
						while(myReader->Read()){
							if(counter++!=(count2-1)) continue;
								break;
						}
					
						String^ pass = myReader->GetString(1);
						String^ new1 = this->textBox1->Text;
						myReader->Close();
						MySqlCommand^ cmdDataBase1;
					//	cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.keshri';",conDataBase1);
					
						cmdDataBase1 =gcnew MySqlCommand("update employee.managers set bankacc=" + new1+ " where password='"+pass+"';",conDataBase1);
						myReader=cmdDataBase1->ExecuteReader();
						this->label6->Text=new1;
						this->textBox1->Visible=false;
						this->button2->Visible=false;
						myReader->Close();
						conDataBase1->Close();
		}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	this->textBox2->Text="";
	this->textBox2->Visible=true;
	this->button8->Visible=true;

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 this->textBox3->Text="";
	this->textBox3->Visible=true;
	this->button9->Visible=true;}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox4->Text="";
	this->textBox4->Visible=true;
	this->button10->Visible=true;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox5->Text="";
	this->textBox5->Visible=true;
	this->button11->Visible=true;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox6->Text="";
	this->textBox6->Visible=true;
	this->button12->Visible=true;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
					conDataBase1->Open();
					MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee.managers where username='a.anand';",conDataBase1);
					MySqlDataReader^ myReader;
					myReader=cmdDataBase2->ExecuteReader();
					myReader->Read();
					int count2;
					count2 = System::Convert::ToInt32(myReader->GetString(8));
					myReader->Close();
						int counter = 0;
					MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee.managers;",conDataBase1);
//					MySqlDataReader^ myReader;
					
						myReader=cmdDataBase3->ExecuteReader();
						while(myReader->Read()){
							if(counter++!=(count2-1)) continue;
								break;
						}
					
						String^ pass = myReader->GetString(1);
						String^ new1 = this->textBox2->Text;
						myReader->Close();
						MySqlCommand^ cmdDataBase1;
					//	cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.keshri';",conDataBase1);
					
						cmdDataBase1 =gcnew MySqlCommand("update employee.managers set mon='" + new1+ "' where password='"+pass+"';",conDataBase1);
						myReader=cmdDataBase1->ExecuteReader();
						this->label9->Text=new1;
						this->textBox2->Visible=false;
						this->button8->Visible=false;
						myReader->Close();
						conDataBase1->Close();

		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
					conDataBase1->Open();
					MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee.managers where username='a.anand';",conDataBase1);
					MySqlDataReader^ myReader;
					myReader=cmdDataBase2->ExecuteReader();
					myReader->Read();
					int count2;
					count2 = System::Convert::ToInt32(myReader->GetString(8));
					myReader->Close();
						int counter = 0;
					MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee.managers;",conDataBase1);
//					MySqlDataReader^ myReader;
					
						myReader=cmdDataBase3->ExecuteReader();
						while(myReader->Read()){
							if(counter++!=(count2-1)) continue;
								break;
						}
					
						String^ pass = myReader->GetString(1);
						String^ new1 = this->textBox3->Text;
						myReader->Close();
						MySqlCommand^ cmdDataBase1;
					//	cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.keshri';",conDataBase1);
					
						cmdDataBase1 =gcnew MySqlCommand("update employee.managers set tue='" + new1+ "' where password='"+pass+"';",conDataBase1);
						myReader=cmdDataBase1->ExecuteReader();
						this->label11->Text=new1;
						this->textBox3->Visible=false;
						this->button9->Visible=false;
						myReader->Close();
						conDataBase1->Close();

		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			  		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
					conDataBase1->Open();
					MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee.managers where username='a.anand';",conDataBase1);
					MySqlDataReader^ myReader;
					myReader=cmdDataBase2->ExecuteReader();
					myReader->Read();
					int count2;
					count2 = System::Convert::ToInt32(myReader->GetString(8));
					myReader->Close();
						int counter = 0;
					MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee.managers;",conDataBase1);
//					MySqlDataReader^ myReader;
					
						myReader=cmdDataBase3->ExecuteReader();
						while(myReader->Read()){
							if(counter++!=(count2-1)) continue;
								break;
						}
					
						String^ pass = myReader->GetString(1);
						String^ new1 = this->textBox4->Text;
						myReader->Close();
						MySqlCommand^ cmdDataBase1;
					//	cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.keshri';",conDataBase1);
					
						cmdDataBase1 =gcnew MySqlCommand("update employee.managers set wed='" + new1+ "' where password='"+pass+"';",conDataBase1);
						myReader=cmdDataBase1->ExecuteReader();
						this->label13->Text=new1;
						this->textBox4->Visible=false;
						this->button10->Visible=false;
						myReader->Close();
						conDataBase1->Close();

		 }
		 private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
					conDataBase1->Open();
					MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee.managers where username='a.anand';",conDataBase1);
					MySqlDataReader^ myReader;
					myReader=cmdDataBase2->ExecuteReader();
					myReader->Read();
					int count2;
					count2 = System::Convert::ToInt32(myReader->GetString(8));
					myReader->Close();
						int counter = 0;
					MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee.managers;",conDataBase1);
//					MySqlDataReader^ myReader;
					
						myReader=cmdDataBase3->ExecuteReader();
						while(myReader->Read()){
							if(counter++!=(count2-1)) continue;
								break;
						}
					
						String^ pass = myReader->GetString(1);
						String^ new1 = this->textBox5->Text;
						myReader->Close();
						MySqlCommand^ cmdDataBase1;
					//	cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.keshri';",conDataBase1);
					
						cmdDataBase1 =gcnew MySqlCommand("update employee.managers set thu='" + new1+ "' where password='"+pass+"';",conDataBase1);
						myReader=cmdDataBase1->ExecuteReader();
						this->label15->Text=new1;
						this->textBox5->Visible=false;
						this->button11->Visible=false;
						myReader->Close();
						conDataBase1->Close();
 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
					MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
					conDataBase1->Open();
					MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee.managers where username='a.anand';",conDataBase1);
					MySqlDataReader^ myReader;
					myReader=cmdDataBase2->ExecuteReader();
					myReader->Read();
					int count2;
					count2 = System::Convert::ToInt32(myReader->GetString(8));
					myReader->Close();
						int counter = 0;
					MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee.managers;",conDataBase1);
//					MySqlDataReader^ myReader;
					
						myReader=cmdDataBase3->ExecuteReader();
						while(myReader->Read()){
							if(counter++!=(count2-1)) continue;
								break;
						}
					
						String^ pass = myReader->GetString(1);
						String^ new1 = this->textBox6->Text;
						myReader->Close();
						MySqlCommand^ cmdDataBase1;
					//	cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.keshri';",conDataBase1);
					
						cmdDataBase1 =gcnew MySqlCommand("update employee.managers set fri='" + new1+ "' where password='"+pass+"';",conDataBase1);
						myReader=cmdDataBase1->ExecuteReader();
						this->label17->Text=new1;
						this->textBox6->Visible=false;
						this->button12->Visible=false;
						myReader->Close();
						conDataBase1->Close();}

private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label37_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage5_Click(System::Object^  sender, System::EventArgs^  e) {
			 

		 }

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {	 String^
				 constring=L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from employee.employee where manager='anupam anand'",conDataBase);
				 MySqlDataReader^ MyReader;
			 try
			 { //      this->label2->Hide();
			 this->dataGridView1->Show();
			 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			 sda->SelectCommand = cmdDataBase;
			 DataTable^ dbdataset = gcnew DataTable();
			 sda->Fill(dbdataset);
			 BindingSource ^bSource=gcnew BindingSource();

			 bSource->DataSource = dbdataset;
			 dataGridView1->DataSource=bSource;
			 //dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader);
			 sda->Update(dbdataset);

			 }catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 }
		 void dataGridView1_CellClick( Object^ sender, DataGridViewCellEventArgs^ e )
		 {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
