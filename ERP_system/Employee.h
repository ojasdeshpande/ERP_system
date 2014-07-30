#pragma once
#include <cstring>
#include <string>
namespace proj2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Employee
	/// </summary>
	public ref class Employee : public System::Windows::Forms::Form
	{
	public:
		Employee(void)
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
		~Employee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  emptabcontrol;
	public: System::Windows::Forms::TabPage^  tabPage1;
	private: 
	protected: 

	protected: 

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
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
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	public: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
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
	private: System::Windows::Forms::Label^  label42;
	public: System::Windows::Forms::Label^  label41;
	private: 
	private: System::Windows::Forms::Label^  label40;
	public: 
	public: System::Windows::Forms::Label^  label39;
	private: 
	public: System::Windows::Forms::Label^  label38;
	public: System::Windows::Forms::Label^  label17;
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


	public: 
	private: 



	protected: 



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
			this->emptabcontrol = (gcnew System::Windows::Forms::TabControl());
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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
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
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->emptabcontrol->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// emptabcontrol
			// 
			this->emptabcontrol->Controls->Add(this->tabPage1);
			this->emptabcontrol->Controls->Add(this->tabPage2);
			this->emptabcontrol->Controls->Add(this->tabPage3);
			this->emptabcontrol->Controls->Add(this->tabPage4);
			this->emptabcontrol->Location = System::Drawing::Point(12, 31);
			this->emptabcontrol->Name = L"emptabcontrol";
			this->emptabcontrol->Padding = System::Drawing::Point(22, 4);
			this->emptabcontrol->SelectedIndex = 0;
			this->emptabcontrol->Size = System::Drawing::Size(868, 537);
			this->emptabcontrol->TabIndex = 0;
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
			this->tabPage1->Size = System::Drawing::Size(860, 504);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Personal Info";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Employee::tabPage1_Click);
			// 
			// empemail
			// 
			this->empemail->Location = System::Drawing::Point(216, 368);
			this->empemail->Name = L"empemail";
			this->empemail->Size = System::Drawing::Size(112, 22);
			this->empemail->TabIndex = 9;
			this->empemail->Text = L"Email";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(82, 368);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Email :";
			// 
			// empcontact
			// 
			this->empcontact->Location = System::Drawing::Point(216, 283);
			this->empcontact->Name = L"empcontact";
			this->empcontact->Size = System::Drawing::Size(112, 22);
			this->empcontact->TabIndex = 7;
			this->empcontact->Text = L"contact :";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(82, 293);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 22);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Contact :";
			// 
			// empaddress
			// 
			this->empaddress->Location = System::Drawing::Point(216, 192);
			this->empaddress->Name = L"empaddress";
			this->empaddress->Size = System::Drawing::Size(278, 46);
			this->empaddress->TabIndex = 5;
			this->empaddress->Text = L"Address :";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(82, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Address :";
			// 
			// empdob
			// 
			this->empdob->Location = System::Drawing::Point(216, 128);
			this->empdob->Name = L"empdob";
			this->empdob->Size = System::Drawing::Size(146, 22);
			this->empdob->TabIndex = 3;
			this->empdob->Text = L"Dob";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(82, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"DOB :";
			// 
			// empname
			// 
			this->empname->Location = System::Drawing::Point(216, 67);
			this->empname->Name = L"empname";
			this->empname->Size = System::Drawing::Size(126, 22);
			this->empname->TabIndex = 1;
			this->empname->Text = L"Name :";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(82, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name :";
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
			this->tabPage2->Size = System::Drawing::Size(860, 504);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Bank A/C   ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 250);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 24);
			this->textBox1->TabIndex = 17;
			this->textBox1->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(322, 241);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 33);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Employee::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(75, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 43);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Update Account Number";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Employee::button1_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(206, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 22);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Name :";
			this->label6->Click += gcnew System::EventHandler(this, &Employee::label6_Click);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(72, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 22);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Name :";
			this->label7->Click += gcnew System::EventHandler(this, &Employee::label7_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label42);
			this->tabPage3->Controls->Add(this->label41);
			this->tabPage3->Controls->Add(this->label40);
			this->tabPage3->Controls->Add(this->label39);
			this->tabPage3->Controls->Add(this->label38);
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
			this->tabPage3->Size = System::Drawing::Size(860, 504);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Manager    ";
			this->tabPage3->UseVisualStyleBackColor = true;
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
			this->tabPage4->Size = System::Drawing::Size(860, 504);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Pay Slip     ";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &Employee::tabPage4_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(385, 414);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(17, 18);
			this->label37->TabIndex = 39;
			this->label37->Text = L"=";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(406, 382);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(172, 18);
			this->label36->TabIndex = 38;
			this->label36->Text = L"Net Pay - Provident Fund";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(360, 336);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(17, 18);
			this->label35->TabIndex = 37;
			this->label35->Text = L"=";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(383, 309);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(404, 18);
			this->label34->TabIndex = 36;
			this->label34->Text = L"Basic Pay + Dearness Allowance + House Rental Allowance";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(406, 173);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(54, 18);
			this->label33->TabIndex = 35;
			this->label33->Text = L"label33";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(308, 173);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(83, 18);
			this->label32->TabIndex = 34;
			this->label32->Text = L"Basic Pay=";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(406, 414);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(54, 18);
			this->label31->TabIndex = 33;
			this->label31->Text = L"label31";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(302, 382);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(98, 18);
			this->label30->TabIndex = 32;
			this->label30->Text = L"Gross Pay=";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(383, 336);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(54, 18);
			this->label29->TabIndex = 31;
			this->label29->Text = L"label29";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(308, 309);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(77, 18);
			this->label28->TabIndex = 30;
			this->label28->Text = L"Net Pay=";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(432, 273);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(54, 18);
			this->label27->TabIndex = 29;
			this->label27->Text = L"label27";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(308, 273);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(116, 18);
			this->label26->TabIndex = 28;
			this->label26->Text = L"Provident Fund=";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(492, 239);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 18);
			this->label25->TabIndex = 27;
			this->label25->Text = L"label25";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(308, 239);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(178, 18);
			this->label24->TabIndex = 26;
			this->label24->Text = L"House Rental Allowance=";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(466, 207);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 18);
			this->label23->TabIndex = 25;
			this->label23->Text = L"label23";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(308, 207);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(152, 18);
			this->label22->TabIndex = 24;
			this->label22->Text = L"Dearness Allowance=";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(720, 72);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 18);
			this->label21->TabIndex = 23;
			this->label21->Text = L"label21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(553, 72);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(161, 18);
			this->label20->TabIndex = 22;
			this->label20->Text = L"Bank Account Number:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(199, 72);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 18);
			this->label19->TabIndex = 21;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(74, 72);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(122, 18);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Employee Name:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(245, 290);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 18);
			this->label17->TabIndex = 19;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(139, 290);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 18);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Friday:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(242, 250);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 18);
			this->label15->TabIndex = 17;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(123, 250);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(73, 18);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Thursday:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(242, 213);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 18);
			this->label13->TabIndex = 15;
			this->label13->Text = L"label13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(106, 213);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 18);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Wednesday:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(242, 174);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 18);
			this->label11->TabIndex = 13;
			this->label11->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(123, 174);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 18);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Tuesday:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(242, 133);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 18);
			this->label9->TabIndex = 11;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(123, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 18);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Monday:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(104, 20);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(59, 18);
			this->label38->TabIndex = 20;
			this->label38->Text = L"Project:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(178, 20);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(54, 18);
			this->label39->TabIndex = 21;
			this->label39->Text = L"label39";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(107, 52);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(70, 18);
			this->label40->TabIndex = 22;
			this->label40->Text = L"Manager:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(183, 52);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(54, 18);
			this->label41->TabIndex = 23;
			this->label41->Text = L"label41";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(151, 96);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(137, 18);
			this->label42->TabIndex = 24;
			this->label42->Text = L"Manager\'s Timings:";
			// 
			// Employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 580);
			this->Controls->Add(this->emptabcontrol);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Employee";
			this->Text = L"Employee";
			this->Load += gcnew System::EventHandler(this, &Employee::Employee_Load);
			this->emptabcontrol->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Employee_Load(System::Object^  sender, System::EventArgs^  e) {
				// 12
				 /*String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
		 MySqlCommand^ cmdDataBase =gcnew MySqlCommand("select * from employee.employee where username='a.keshri';",conDataBase);
		 MySqlDataReader^ myReader;
		 myReader=cmdDataBase->ExecuteReader();
		 int count2 = System::Convert::ToInt32(myReader->GetString(12));
		 myReader->Close();
				 //MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
		 int counter = 0;
				 MySqlCommand^ cmdDataBase1 =gcnew MySqlCommand("select * from employee.employee;",conDataBase);
//				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read()){
						 if(counter++!=count2) continue;
							 break;
					 }
					 String^ username = myReader->GetString(0);
					 String^ name = myReader->GetString(2);
					 String^ contact = myReader->GetString(3);
					 String^ address = myReader->GetString(4);
					 String^ dob = myReader->GetString(5);
					 String^ bacc = myReader->GetString(6);
					 this->empname->Text = name;
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }*/
			 }
			 
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox1->Text="";
			 this->textBox1->Visible=true;
			 this->button2->Visible=true;

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
			 conDataBase1->Open();
			 MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee.employee where username='a.keshri';",conDataBase1);
			 MySqlDataReader^ myReader;
			 myReader=cmdDataBase2->ExecuteReader();
			 myReader->Read();
			 int count2;
			 count2 = System::Convert::ToInt32(myReader->GetString(11));
			 myReader->Close();
			 int counter = 0;
			 MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee.employee;",conDataBase1);
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

			 cmdDataBase1 =gcnew MySqlCommand("update employee.employee set bankacc='" + new1+ "' where password='"+pass+"';",conDataBase1);
			 myReader=cmdDataBase1->ExecuteReader();
			 this->label6->Text=new1;
			 this->textBox1->Visible=false;
			 this->button2->Visible=false;
			 myReader->Close();
			 conDataBase1->Close();

		 }
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
