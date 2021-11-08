#pragma once
#include <iostream>
#include <fstream>
#include <string>

//#include "dash.h"


namespace eztest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for test1
	/// </summary>
	public ref class test1 : public System::Windows::Forms::Form
	{
	public:
		test1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		test1(String^data)
		{
			InitializeComponent();
			PRAM = data;

			//
			//TODO: Add the constructor code here
			//
		}
		test1(System::Windows::Forms::Form^ board)
		{
			
			InitializeComponent();
			firstform = board;
		}

	public: String^ PARAM;

	private: System::Windows::Forms::Form^ firstform;

	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~test1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_enter;
	protected:
	private: System::Windows::Forms::Button^ btnpm;
	private: System::Windows::Forms::Button^ btnbackspace;
	private: System::Windows::Forms::Button^ btnc;
	private: System::Windows::Forms::Button^ btnce;
	private: System::Windows::Forms::Label^ lblShowOp;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btndivide;
	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btntimes;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btndot;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnsub;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnadd;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ button1;

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
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->btnpm = (gcnew System::Windows::Forms::Button());
			this->btnbackspace = (gcnew System::Windows::Forms::Button());
			this->btnc = (gcnew System::Windows::Forms::Button());
			this->btnce = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btndivide = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btntimes = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnsub = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_enter
			// 
			this->btn_enter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_enter->Location = System::Drawing::Point(427, 156);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(80, 77);
			this->btn_enter->TabIndex = 46;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = true;
			this->btn_enter->Click += gcnew System::EventHandler(this, &test1::btn_enter_click);
			// 
			// btnpm
			// 
			this->btnpm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpm->Location = System::Drawing::Point(326, 157);
			this->btnpm->Name = L"btnpm";
			this->btnpm->Size = System::Drawing::Size(80, 77);
			this->btnpm->TabIndex = 45;
			this->btnpm->Text = L"+/-";
			this->btnpm->UseVisualStyleBackColor = true;
			this->btnpm->Click += gcnew System::EventHandler(this, &test1::btnpm_click);
			// 
			// btnbackspace
			// 
			this->btnbackspace->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnbackspace->Location = System::Drawing::Point(62, 156);
			this->btnbackspace->Name = L"btnbackspace";
			this->btnbackspace->Size = System::Drawing::Size(80, 77);
			this->btnbackspace->TabIndex = 44;
			this->btnbackspace->Text = L"<--";
			this->btnbackspace->UseVisualStyleBackColor = true;
			this->btnbackspace->Click += gcnew System::EventHandler(this, &test1::btnbackspace_click);
			// 
			// btnc
			// 
			this->btnc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnc->Location = System::Drawing::Point(234, 156);
			this->btnc->Name = L"btnc";
			this->btnc->Size = System::Drawing::Size(86, 77);
			this->btnc->TabIndex = 43;
			this->btnc->Text = L"C";
			this->btnc->UseVisualStyleBackColor = true;
			this->btnc->Click += gcnew System::EventHandler(this, &test1::btnc_Click);
			// 
			// btnce
			// 
			this->btnce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnce->Location = System::Drawing::Point(148, 156);
			this->btnce->Name = L"btnce";
			this->btnce->Size = System::Drawing::Size(80, 77);
			this->btnce->TabIndex = 42;
			this->btnce->Text = L"CE";
			this->btnce->UseVisualStyleBackColor = true;
			this->btnce->Click += gcnew System::EventHandler(this, &test1::btnce_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Location = System::Drawing::Point(71, 16);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 13);
			this->lblShowOp->TabIndex = 41;
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::MediumBlue;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::Color::White;
			this->txtDisplay->Location = System::Drawing::Point(62, 46);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(344, 80);
			this->txtDisplay->TabIndex = 40;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btndivide
			// 
			this->btndivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndivide->Location = System::Drawing::Point(326, 491);
			this->btndivide->Name = L"btndivide";
			this->btndivide->Size = System::Drawing::Size(80, 80);
			this->btndivide->TabIndex = 39;
			this->btndivide->Text = L"/";
			this->btndivide->UseVisualStyleBackColor = true;
			this->btndivide->Click += gcnew System::EventHandler(this, &test1::Math);
			// 
			// btnequal
			// 
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->Location = System::Drawing::Point(234, 491);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(86, 80);
			this->btnequal->TabIndex = 38;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = true;
			this->btnequal->Click += gcnew System::EventHandler(this, &test1::btnequals_click);
			// 
			// btntimes
			// 
			this->btntimes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btntimes->Location = System::Drawing::Point(326, 405);
			this->btntimes->Name = L"btntimes";
			this->btntimes->Size = System::Drawing::Size(80, 80);
			this->btntimes->TabIndex = 37;
			this->btntimes->Text = L"*";
			this->btntimes->UseVisualStyleBackColor = true;
			this->btntimes->Click += gcnew System::EventHandler(this, &test1::Math);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(234, 405);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(86, 80);
			this->btn3->TabIndex = 36;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btndot
			// 
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndot->Location = System::Drawing::Point(148, 491);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(80, 80);
			this->btndot->TabIndex = 35;
			this->btndot->Text = L".";
			this->btndot->UseVisualStyleBackColor = true;
			this->btndot->Click += gcnew System::EventHandler(this, &test1::dot_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(62, 491);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(80, 80);
			this->btn0->TabIndex = 34;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(148, 405);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(80, 80);
			this->btn2->TabIndex = 33;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(62, 405);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(80, 80);
			this->btn1->TabIndex = 32;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btnsub
			// 
			this->btnsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsub->Location = System::Drawing::Point(326, 322);
			this->btnsub->Name = L"btnsub";
			this->btnsub->Size = System::Drawing::Size(80, 77);
			this->btnsub->TabIndex = 31;
			this->btnsub->Text = L"-";
			this->btnsub->UseVisualStyleBackColor = true;
			this->btnsub->Click += gcnew System::EventHandler(this, &test1::Math);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(234, 322);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(86, 77);
			this->btn6->TabIndex = 30;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btnadd
			// 
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadd->Location = System::Drawing::Point(326, 239);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(80, 77);
			this->btnadd->TabIndex = 29;
			this->btnadd->Text = L"+";
			this->btnadd->UseVisualStyleBackColor = true;
			this->btnadd->Click += gcnew System::EventHandler(this, &test1::Math);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(234, 239);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(86, 77);
			this->btn9->TabIndex = 28;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(148, 322);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(80, 77);
			this->btn5->TabIndex = 27;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(62, 322);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(80, 77);
			this->btn4->TabIndex = 26;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(148, 239);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(80, 77);
			this->btn8->TabIndex = 25;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(62, 239);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(80, 77);
			this->btn7->TabIndex = 24;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(427, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 80);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Return to Dashboard <----";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &test1::Return_to_Dashboard);
			// 
			// test1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkBlue;
			this->ClientSize = System::Drawing::Size(569, 579);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_enter);
			this->Controls->Add(this->btnpm);
			this->Controls->Add(this->btnbackspace);
			this->Controls->Add(this->btnc);
			this->Controls->Add(this->btnce);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btndivide);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btntimes);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnsub);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Name = L"test1";
			this->Text = L"test1";
			this->Load += gcnew System::EventHandler(this, &test1::test1_Load);
			this->Click += gcnew System::EventHandler(this, &test1::test1_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		String^ iOperator;
		String^ PRAM;
	private: System::Void test1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnc_Click(System::Object^ sender, System::EventArgs^ e) {
	// button C
	txtDisplay->Text = "0";
	lblShowOp->Text = "";
}
private: System::Void btnce_Click(System::Object^ sender, System::EventArgs^ e) {
	//button CE
	txtDisplay->Text = "0";
}
private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {

	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void Math(System::Object^ sender, System::EventArgs^ e) {
	Button^ ops = safe_cast<Button^>(sender);
	iFirstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = ops->Text;
	lblShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
}
private: System::Void btnequals_click(System::Object^ sender, System::EventArgs^ e) {
	lblShowOp->Text = "";
	iSecondnum = Double::Parse(txtDisplay->Text);

	if (iOperator == "+") {
		iResult = iFirstnum + iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "-") {
		iResult = iFirstnum - iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "*") {
		iResult = iFirstnum * iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "/") {
		iResult = iFirstnum / iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
}
private: System::Void btnbackspace_click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	while (txtDisplay->Text == "")
	{
		txtDisplay->Text = "0";
	}


}

private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnpm_click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}

private: System::Void btn_enter_click(System::Object^ sender, System::EventArgs^ e) {
	iFirstnum = Double::Parse(txtDisplay->Text);
	//MessageBox::Show("Are you sure " + iFirstnum + " is correct", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (MessageBox::Show("Are you sure " + iFirstnum + " is the correct " + PARAM +"?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		StreamWriter^ outPRAMS = gcnew StreamWriter("Test.txt");
		outPRAMS->Write(PARAM + ": " + iFirstnum);
		outPRAMS->Close();
		
	}
	else {
		Application::Run();
	}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void test1_Click(System::Object^ sender, System::EventArgs^ e) {

	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void Return_to_Dashboard(System::Object^ sender, System::EventArgs^ e) {
	//+		e	{X = 508 Y = 359 Button = Left}	System::EventArgs^ {System::Windows::Forms::MouseEventArgs^}

	
	//dash^ ui_formback = gcnew dash();
	//ui_formback->Show();
	//this->Show();
	
	firstform->Show(this);
	this->Hide();
	//dash^ backto1= gcnew dash(this);
	//Form^backto1 = firstform;
		//backto1->Show(this);
	//this->Show();

}
};
}
