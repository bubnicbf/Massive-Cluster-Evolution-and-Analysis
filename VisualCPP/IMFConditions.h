#pragma once

namespace MassCluster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IMFConditions
	/// </summary>
	public ref class IMFConditions : public System::Windows::Forms::Form
	{
	public:
		IMFConditions(System::Windows::Forms::Form ^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  btnCancel;
	public:

	private: System::Windows::Forms::Form ^ otherform;


#pragma region MISC
	
	private:
		void closeAndReturn()
		{
			this->Hide();
			otherform->Show();
		}

	private:
		void saveData()
		{
			//TODO: create save function once data is generated. \\B.Bubnick 3-11-2015
		}


#pragma endregion 




#pragma region Button Clicks and the like

	private: System::Void btnSaveClose_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		saveData();
		closeAndReturn();
	}

	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		closeAndReturn();
	}


#pragma endregion

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IMFConditions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblm0;
	protected:
	private: System::Windows::Forms::Label^  lblm1;
	private: System::Windows::Forms::Label^  lblm2;
	private: System::Windows::Forms::Label^  lblm3;
	private: System::Windows::Forms::Label^  lblMmin1;
	private: System::Windows::Forms::Label^  lblMmax;
	private: System::Windows::Forms::Label^  lblMtrunc1;
	private: System::Windows::Forms::Label^  lblMtrunc2;
	private: System::Windows::Forms::Label^  lblAlpha1;
	private: System::Windows::Forms::Label^  lblAlpha2;
	private: System::Windows::Forms::Label^  lblAlpha3;
	private: System::Windows::Forms::Label^  lblMIMFS1;
	private: System::Windows::Forms::Label^  lblMIMFS2;
	private: System::Windows::Forms::Label^  lblMmin2;
	private: System::Windows::Forms::TextBox^  txtM0;
	private: System::Windows::Forms::TextBox^  txtM1;
	private: System::Windows::Forms::TextBox^  txtM2;
	private: System::Windows::Forms::TextBox^  txtM3;
	private: System::Windows::Forms::TextBox^  txtMmin;
	private: System::Windows::Forms::TextBox^  txtMmax;






	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  txtAlpha1;
	private: System::Windows::Forms::TextBox^  txtAlpha2;
	private: System::Windows::Forms::TextBox^  txtAlpha3;
	private: System::Windows::Forms::ComboBox^  ddlMIMFS;
	private: System::Windows::Forms::Button^  btnSaveClose;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(IMFConditions::typeid));
			this->lblm0 = (gcnew System::Windows::Forms::Label());
			this->lblm1 = (gcnew System::Windows::Forms::Label());
			this->lblm2 = (gcnew System::Windows::Forms::Label());
			this->lblm3 = (gcnew System::Windows::Forms::Label());
			this->lblMmin1 = (gcnew System::Windows::Forms::Label());
			this->lblMmax = (gcnew System::Windows::Forms::Label());
			this->lblMtrunc1 = (gcnew System::Windows::Forms::Label());
			this->lblMtrunc2 = (gcnew System::Windows::Forms::Label());
			this->lblAlpha1 = (gcnew System::Windows::Forms::Label());
			this->lblAlpha2 = (gcnew System::Windows::Forms::Label());
			this->lblAlpha3 = (gcnew System::Windows::Forms::Label());
			this->lblMIMFS1 = (gcnew System::Windows::Forms::Label());
			this->lblMIMFS2 = (gcnew System::Windows::Forms::Label());
			this->lblMmin2 = (gcnew System::Windows::Forms::Label());
			this->txtM0 = (gcnew System::Windows::Forms::TextBox());
			this->txtM1 = (gcnew System::Windows::Forms::TextBox());
			this->txtM2 = (gcnew System::Windows::Forms::TextBox());
			this->txtM3 = (gcnew System::Windows::Forms::TextBox());
			this->txtMmin = (gcnew System::Windows::Forms::TextBox());
			this->txtMmax = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->txtAlpha1 = (gcnew System::Windows::Forms::TextBox());
			this->txtAlpha2 = (gcnew System::Windows::Forms::TextBox());
			this->txtAlpha3 = (gcnew System::Windows::Forms::TextBox());
			this->ddlMIMFS = (gcnew System::Windows::Forms::ComboBox());
			this->btnSaveClose = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblm0
			// 
			this->lblm0->AutoSize = true;
			this->lblm0->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblm0->Location = System::Drawing::Point(12, 12);
			this->lblm0->Name = L"lblm0";
			this->lblm0->Size = System::Drawing::Size(119, 18);
			this->lblm0->TabIndex = 0;
			this->lblm0->Text = L"M0 (solar units)";
			// 
			// lblm1
			// 
			this->lblm1->AutoSize = true;
			this->lblm1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblm1->Location = System::Drawing::Point(12, 40);
			this->lblm1->Name = L"lblm1";
			this->lblm1->Size = System::Drawing::Size(119, 18);
			this->lblm1->TabIndex = 2;
			this->lblm1->Text = L"M1 (solar units)";
			// 
			// lblm2
			// 
			this->lblm2->AutoSize = true;
			this->lblm2->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblm2->Location = System::Drawing::Point(12, 66);
			this->lblm2->Name = L"lblm2";
			this->lblm2->Size = System::Drawing::Size(119, 18);
			this->lblm2->TabIndex = 3;
			this->lblm2->Text = L"M2 (solar units)";
			// 
			// lblm3
			// 
			this->lblm3->AutoSize = true;
			this->lblm3->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblm3->Location = System::Drawing::Point(12, 92);
			this->lblm3->Name = L"lblm3";
			this->lblm3->Size = System::Drawing::Size(119, 18);
			this->lblm3->TabIndex = 4;
			this->lblm3->Text = L"M3 (solar units)";
			// 
			// lblMmin1
			// 
			this->lblMmin1->AutoSize = true;
			this->lblMmin1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMmin1->Location = System::Drawing::Point(12, 118);
			this->lblMmin1->Name = L"lblMmin1";
			this->lblMmin1->Size = System::Drawing::Size(136, 18);
			this->lblMmin1->TabIndex = 5;
			this->lblMmin1->Text = L"Mmin (solar units)";
			// 
			// lblMmax
			// 
			this->lblMmax->AutoSize = true;
			this->lblMmax->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMmax->Location = System::Drawing::Point(12, 157);
			this->lblMmax->Name = L"lblMmax";
			this->lblMmax->Size = System::Drawing::Size(141, 18);
			this->lblMmax->TabIndex = 6;
			this->lblMmax->Text = L"Mmax (solar units)";
			// 
			// lblMtrunc1
			// 
			this->lblMtrunc1->AutoSize = true;
			this->lblMtrunc1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMtrunc1->Location = System::Drawing::Point(14, 183);
			this->lblMtrunc1->Name = L"lblMtrunc1";
			this->lblMtrunc1->Size = System::Drawing::Size(149, 18);
			this->lblMtrunc1->TabIndex = 7;
			this->lblMtrunc1->Text = L"Mtrunc (solar units)";
			// 
			// lblMtrunc2
			// 
			this->lblMtrunc2->AutoSize = true;
			this->lblMtrunc2->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMtrunc2->Location = System::Drawing::Point(14, 206);
			this->lblMtrunc2->MaximumSize = System::Drawing::Size(250, 0);
			this->lblMtrunc2->Name = L"lblMtrunc2";
			this->lblMtrunc2->Size = System::Drawing::Size(232, 30);
			this->lblMtrunc2->TabIndex = 8;
			this->lblMtrunc2->Text = L"( -99 value for untruncated IMF at the upper limit)";
			// 
			// lblAlpha1
			// 
			this->lblAlpha1->AutoSize = true;
			this->lblAlpha1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlpha1->Location = System::Drawing::Point(14, 239);
			this->lblAlpha1->Name = L"lblAlpha1";
			this->lblAlpha1->Size = System::Drawing::Size(57, 18);
			this->lblAlpha1->TabIndex = 9;
			this->lblAlpha1->Text = L"alpha1";
			// 
			// lblAlpha2
			// 
			this->lblAlpha2->AutoSize = true;
			this->lblAlpha2->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlpha2->Location = System::Drawing::Point(14, 265);
			this->lblAlpha2->Name = L"lblAlpha2";
			this->lblAlpha2->Size = System::Drawing::Size(57, 18);
			this->lblAlpha2->TabIndex = 10;
			this->lblAlpha2->Text = L"alpha2";
			// 
			// lblAlpha3
			// 
			this->lblAlpha3->AutoSize = true;
			this->lblAlpha3->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlpha3->Location = System::Drawing::Point(14, 291);
			this->lblAlpha3->Name = L"lblAlpha3";
			this->lblAlpha3->Size = System::Drawing::Size(57, 18);
			this->lblAlpha3->TabIndex = 11;
			this->lblAlpha3->Text = L"alpha3";
			// 
			// lblMIMFS1
			// 
			this->lblMIMFS1->AutoSize = true;
			this->lblMIMFS1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMIMFS1->Location = System::Drawing::Point(14, 317);
			this->lblMIMFS1->Name = L"lblMIMFS1";
			this->lblMIMFS1->Size = System::Drawing::Size(127, 18);
			this->lblMIMFS1->TabIndex = 12;
			this->lblMIMFS1->Text = L"MIMFS (type:1,2)";
			// 
			// lblMIMFS2
			// 
			this->lblMIMFS2->AutoSize = true;
			this->lblMIMFS2->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMIMFS2->Location = System::Drawing::Point(12, 341);
			this->lblMIMFS2->Name = L"lblMIMFS2";
			this->lblMIMFS2->Size = System::Drawing::Size(174, 15);
			this->lblMIMFS2->TabIndex = 13;
			this->lblMIMFS2->Text = L"1: N(M) not flat; 2: N(M) flat)";
			// 
			// lblMmin2
			// 
			this->lblMmin2->AutoSize = true;
			this->lblMmin2->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMmin2->Location = System::Drawing::Point(14, 136);
			this->lblMmin2->Name = L"lblMmin2";
			this->lblMmin2->Size = System::Drawing::Size(134, 15);
			this->lblMmin2->TabIndex = 17;
			this->lblMmin2->Text = L"(0.15 <= Mmnin < 0.5)";
			// 
			// txtM0
			// 
			this->txtM0->Location = System::Drawing::Point(166, 12);
			this->txtM0->Name = L"txtM0";
			this->txtM0->Size = System::Drawing::Size(100, 20);
			this->txtM0->TabIndex = 18;
			this->txtM0->Text = L"0.01";
			// 
			// txtM1
			// 
			this->txtM1->Location = System::Drawing::Point(166, 38);
			this->txtM1->Name = L"txtM1";
			this->txtM1->Size = System::Drawing::Size(100, 20);
			this->txtM1->TabIndex = 19;
			this->txtM1->Text = L"0.08";
			// 
			// txtM2
			// 
			this->txtM2->Location = System::Drawing::Point(166, 64);
			this->txtM2->Name = L"txtM2";
			this->txtM2->Size = System::Drawing::Size(100, 20);
			this->txtM2->TabIndex = 20;
			this->txtM2->Text = L"0.05";
			// 
			// txtM3
			// 
			this->txtM3->Location = System::Drawing::Point(166, 90);
			this->txtM3->Name = L"txtM3";
			this->txtM3->Size = System::Drawing::Size(100, 20);
			this->txtM3->TabIndex = 21;
			this->txtM3->Text = L"500.0";
			// 
			// txtMmin
			// 
			this->txtMmin->Location = System::Drawing::Point(166, 116);
			this->txtMmin->Name = L"txtMmin";
			this->txtMmin->Size = System::Drawing::Size(100, 20);
			this->txtMmin->TabIndex = 22;
			this->txtMmin->Text = L"0.15";
			// 
			// txtMmax
			// 
			this->txtMmax->Location = System::Drawing::Point(166, 157);
			this->txtMmax->Name = L"txtMmax";
			this->txtMmax->Size = System::Drawing::Size(100, 20);
			this->txtMmax->TabIndex = 23;
			this->txtMmax->Text = L"500";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(166, 183);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"-99";
			// 
			// txtAlpha1
			// 
			this->txtAlpha1->Location = System::Drawing::Point(166, 239);
			this->txtAlpha1->Name = L"txtAlpha1";
			this->txtAlpha1->Size = System::Drawing::Size(100, 20);
			this->txtAlpha1->TabIndex = 25;
			this->txtAlpha1->Text = L"0.3";
			// 
			// txtAlpha2
			// 
			this->txtAlpha2->Location = System::Drawing::Point(166, 265);
			this->txtAlpha2->Name = L"txtAlpha2";
			this->txtAlpha2->Size = System::Drawing::Size(100, 20);
			this->txtAlpha2->TabIndex = 26;
			this->txtAlpha2->Text = L"1.3";
			// 
			// txtAlpha3
			// 
			this->txtAlpha3->Location = System::Drawing::Point(166, 291);
			this->txtAlpha3->Name = L"txtAlpha3";
			this->txtAlpha3->Size = System::Drawing::Size(100, 20);
			this->txtAlpha3->TabIndex = 27;
			this->txtAlpha3->Text = L"2.35";
			// 
			// ddlMIMFS
			// 
			this->ddlMIMFS->FormattingEnabled = true;
			this->ddlMIMFS->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Type 1", L"Type 2" });
			this->ddlMIMFS->Location = System::Drawing::Point(166, 317);
			this->ddlMIMFS->Name = L"ddlMIMFS";
			this->ddlMIMFS->Size = System::Drawing::Size(100, 21);
			this->ddlMIMFS->TabIndex = 28;
			this->ddlMIMFS->Text = L"Type 1";
			// 
			// btnSaveClose
			// 
			this->btnSaveClose->BackColor = System::Drawing::Color::Green;
			this->btnSaveClose->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveClose->ForeColor = System::Drawing::Color::White;
			this->btnSaveClose->Location = System::Drawing::Point(12, 410);
			this->btnSaveClose->Name = L"btnSaveClose";
			this->btnSaveClose->Size = System::Drawing::Size(254, 40);
			this->btnSaveClose->TabIndex = 29;
			this->btnSaveClose->Text = L"Save and Close";
			this->btnSaveClose->UseVisualStyleBackColor = false;
			this->btnSaveClose->Click += gcnew System::EventHandler(this, &IMFConditions::btnSaveClose_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(12, 364);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(254, 40);
			this->btnCancel->TabIndex = 30;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &IMFConditions::btnCancel_Click);
			// 
			// IMFConditions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(884, 462);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSaveClose);
			this->Controls->Add(this->ddlMIMFS);
			this->Controls->Add(this->txtAlpha3);
			this->Controls->Add(this->txtAlpha2);
			this->Controls->Add(this->txtAlpha1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->txtMmax);
			this->Controls->Add(this->txtMmin);
			this->Controls->Add(this->txtM3);
			this->Controls->Add(this->txtM2);
			this->Controls->Add(this->txtM1);
			this->Controls->Add(this->txtM0);
			this->Controls->Add(this->lblMmin2);
			this->Controls->Add(this->lblMIMFS2);
			this->Controls->Add(this->lblMIMFS1);
			this->Controls->Add(this->lblAlpha3);
			this->Controls->Add(this->lblAlpha2);
			this->Controls->Add(this->lblAlpha1);
			this->Controls->Add(this->lblMtrunc2);
			this->Controls->Add(this->lblMtrunc1);
			this->Controls->Add(this->lblMmax);
			this->Controls->Add(this->lblMmin1);
			this->Controls->Add(this->lblm3);
			this->Controls->Add(this->lblm2);
			this->Controls->Add(this->lblm1);
			this->Controls->Add(this->lblm0);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"IMFConditions";
			this->Text = L"Kroupa-Salpeter IMF Conditions";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





};
}
