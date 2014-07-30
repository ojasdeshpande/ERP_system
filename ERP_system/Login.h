#pragma once
#include "stdafx.h"
#include "Employee.h"
#include "Manager.h"
#include "Employee.cpp"
#include <string>
#include <cstring>
#include "hr.h"
#include "Admin.h"

namespace proj2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
//	static String^ selected = "None";
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  login;
	private: System::Windows::Forms::Button^  cancel;
	private: System::Windows::Forms::Label^  label3;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"ADMIN", L"MANAGER", L"HR", L"EMPLOYEE"});
			this->comboBox1->Location = System::Drawing::Point(328, 128);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(241, 26);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(328, 250);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(241, 24);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(328, 316);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(241, 24);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Location = System::Drawing::Point(162, 253);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username :";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Location = System::Drawing::Point(162, 319);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password :";
			// 
			// login
			// 
			this->login->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->login->Location = System::Drawing::Point(375, 408);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(129, 28);
			this->login->TabIndex = 5;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Form1::login_Click);
			// 
			// cancel
			// 
			this->cancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cancel->Location = System::Drawing::Point(688, 525);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(126, 28);
			this->cancel->TabIndex = 6;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(600, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(198, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"*cannot leave this field empty";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 580);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				this->label3->Hide();
			 }
private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) { 
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase;
		String^ choice;
		String^ abc;
		//static String^ sel;
		try{
			if(comboBox1->SelectedItem->ToString() =="EMPLOYEE") {choice="employee";cmdDataBase =gcnew MySqlCommand("select * from employee.employee;",conDataBase);}
			else if(comboBox1->SelectedItem->ToString()=="MANAGER") {choice="managers";cmdDataBase =gcnew MySqlCommand("select * from employee.managers;",conDataBase);}
			else if(comboBox1->SelectedItem->ToString()=="ADMIN") {choice="admin";cmdDataBase =gcnew MySqlCommand("select * from employee.employee;",conDataBase);}
			else if(comboBox1->SelectedItem->ToString()=="HR") {choice="hr";cmdDataBase =gcnew MySqlCommand("select * from employee.hr;",conDataBase);}
		}
		catch(Exception^ ex){
			this->label3->Show();
		}
		MySqlDataReader^ myReader;
		try{
			conDataBase->Open();
			myReader=cmdDataBase->ExecuteReader();
			int count1 = 0;
			while(myReader->Read()){
				 count1 ++;
				 if ( textBox1->Text == (myReader->GetString(0))){ break;}
			}
			if( textBox2->Text == (myReader->GetString(1)))
				{	this->Hide();
					myReader->Close();
					conDataBase->Close();
					MySqlConnection^ conDataBase1= gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase1;
					if(choice=="admin"){
						Admin ^adm = gcnew Admin();
						adm->ShowDialog();
						return;
					}
					if(choice=="hr"){
						hr ^h = gcnew hr();
						h->ShowDialog();
						return;
					}
					if(choice=="employee")
					cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.keshri';",conDataBase1);
					if(choice=="managers")
					cmdDataBase1 =gcnew MySqlCommand("update employee."+choice+" set count=" + count1 + " where username='a.anand';",conDataBase1);
					conDataBase1->Open();
					myReader=cmdDataBase1->ExecuteReader();
					myReader->Close();
					MySqlCommand^ cmdDataBase2 =gcnew MySqlCommand("select * from employee."+choice+" where count="+count1+";",conDataBase1);
//					MySqlDataReader^ myReader;
					myReader=cmdDataBase2->ExecuteReader();
					myReader->Read();
					int count2;
					if(choice=="employee")
					count2 = System::Convert::ToInt32(myReader->GetString(11));
					if(choice=="managers")
					count2 = System::Convert::ToInt32(myReader->GetString(8));
						myReader->Close();
//					MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
					int counter = 0;
					MySqlCommand^ cmdDataBase3 =gcnew MySqlCommand("select * from employee."+choice+";",conDataBase1);
//					MySqlDataReader^ myReader;
					try{
						conDataBase->Open();
						myReader=cmdDataBase3->ExecuteReader();
						while(myReader->Read()){
							if(counter++!=(count2-1)) continue;
								break;
						}
				
						String^ username = myReader->GetString(0);
						String^ name = myReader->GetString(2);
						String^ contact = myReader->GetString(3);
						String^ address = myReader->GetString(4);
						String^ dob = myReader->GetString(5);
						String^ bacc = myReader->GetString(6);
						if(choice=="employee"){
							String ^bp=myReader->GetString(10);
							double da=myReader->GetDouble(12);
							double hra=myReader->GetDouble(13);
							double pf=myReader->GetDouble(14);
							String^ proj=myReader->GetString(8);
							String^ man=myReader->GetString(7);
							myReader->Close();
							conDataBase1->Close();
							Employee ^emp = gcnew Employee;
							MySqlConnection^ conDataBase4= gcnew MySqlConnection(constring);
							conDataBase4->Open();
							MySqlCommand^ cmdDataBase4;
							cmdDataBase4 =gcnew MySqlCommand("select * from employee.managers where name='"+man+"';",conDataBase4);
							myReader=cmdDataBase4->ExecuteReader();
							myReader->Read();
							emp->label9->Text = myReader->GetString(9);
							emp->label11->Text = myReader->GetString(10);
							emp->label13->Text = myReader->GetString(11);
							emp->label15->Text = myReader->GetString(12);
							emp->label17->Text = myReader->GetString(13);
							myReader->Close();


							int np,gp;
							np=(int)(Convert::ToDouble(bp)+(da+hra)*(Convert::ToDouble(bp))/(Convert::ToDouble(100)));
							gp=(int)(np-pf*Convert::ToDouble(bp)/(Convert::ToDouble(100)));
						emp->empname->Text = name;
						emp->empdob->Text = dob;
						emp->empaddress->Text = address;
						emp->empcontact->Text = contact;
						emp->empemail->Text = username;
						emp->label39->Text=proj;
						emp->label41->Text=man;
						emp->label6->Text=bacc;
						emp->label33->Text=bp;
						emp->label19->Text=name;
						emp->label21->Text=bacc;
						emp->label23->Text=Convert::ToString(da)+"% of the Basic Pay";
						emp->label25->Text=Convert::ToString(hra)+"% of the Basic Pay";
						emp->label27->Text=Convert::ToString(pf)+"% of the Basic Pay";
						emp->label29->Text=Convert::ToString(np);
						emp->label31->Text=Convert::ToString(gp);
						
						emp->ShowDialog();}
						else if(choice=="managers")
						{
							String^ mond=myReader->GetString(9);
							String^ tued=myReader->GetString(10);
							String^ wedd=myReader->GetString(11);
							String^ thud=myReader->GetString(12);
							String^ frid=myReader->GetString(13);
							String^ bp=myReader->GetString(7);
							double da=myReader->GetDouble(15);
							double hra=myReader->GetDouble(16);
							double pf=myReader->GetDouble(17);
							int np,gp;
							np=(int)(Convert::ToDouble(bp)+(da+hra)*(Convert::ToDouble(bp))/(Convert::ToDouble(100)));
							gp=(int)(np-pf*Convert::ToDouble(bp)/(Convert::ToDouble(100)));
							Manager ^emp = gcnew Manager;	
							emp->label9->Text=mond;
							emp->label33->Text=bp;
							emp->label11->Text=tued;
							emp->label13->Text=wedd;
							emp->label15->Text=thud;
							emp->label17->Text=frid;
							emp->label19->Text=name;
							emp->label21->Text=bacc;
							emp->label23->Text=Convert::ToString(da)+"% of the Basic Pay";
							emp->label25->Text=Convert::ToString(hra)+"% of the Basic Pay";
							emp->label27->Text=Convert::ToString(pf)+"% of the Basic Pay";
							emp->label29->Text=Convert::ToString(np);
							emp->label31->Text=Convert::ToString(gp);
						
						emp->label6->Text=bacc;
						emp->empname->Text = name;
						emp->empdob->Text = dob;
						emp->empaddress->Text = address;
						emp->empcontact->Text = contact;
						emp->empemail->Text = username;
						emp->ShowDialog();
						}
						else;
					}
					
					catch(Exception^ ex){
						MessageBox::Show(ex->Message);
					}
				//	Employee ^emp = gcnew Employee();
				//	emp->ShowDialog();
					//Login->Visible=false;
			}
			else
			{
				MessageBox::Show("Enter Valid Credentials!", "Login Error",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}}
			
		 catch(Exception^ ex){
			//	MessageBox::Show("Database Connection Error!", "Database Error",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		 }
			}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//	 selected = comboBox1->SelectedItem->ToString();
		 }
};
}

