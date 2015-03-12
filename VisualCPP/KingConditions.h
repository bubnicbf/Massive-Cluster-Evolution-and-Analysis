#pragma once

namespace MassCluster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for KingConditions
	/// </summary>
	public ref class KingConditions : public System::Windows::Forms::Form
	{
	public:
		KingConditions(System::Windows::Forms::Form ^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TextBox^  txtXcenter;
	public:

	public:
	private: System::Windows::Forms::Label^  lblXcenter;
	private: System::Windows::Forms::Label^  lblYcenter;
	private: System::Windows::Forms::Label^  lblRtRescaling1;
	private: System::Windows::Forms::Label^  lblRtRescaling2;
	private: System::Windows::Forms::Label^  lblRt;
	private: System::Windows::Forms::Label^  lblRc;
	private: System::Windows::Forms::Label^  lblRax1;
	private: System::Windows::Forms::Label^  lblRay1;
	private: System::Windows::Forms::Label^  lblRax2;
	private: System::Windows::Forms::Label^  lblRay2;
	private: System::Windows::Forms::Label^  lblRot;
	private: System::Windows::Forms::Label^  lblBubbles;
	private: System::Windows::Forms::Label^  lblNoBubbles;
	private: System::Windows::Forms::TextBox^  txtYcenter;
	private: System::Windows::Forms::TextBox^  txtRtRescaling;
	private: System::Windows::Forms::TextBox^  txtRt;
	private: System::Windows::Forms::TextBox^  txtRc;
	private: System::Windows::Forms::TextBox^  txtRax;
	private: System::Windows::Forms::TextBox^  txtRay;
	private: System::Windows::Forms::TextBox^  txtRot;

	private: System::Windows::Forms::TextBox^  txtNoBubbles;
	private: System::Windows::Forms::ComboBox^  ddlMIMFS;



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


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KingConditions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCancel;
	protected:
	private: System::Windows::Forms::Button^  btnSaveClose;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Button Clicks and the like


	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e)
	{
		closeAndReturn();
	}

	private: System::Void btnSaveClose_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		saveData();
		closeAndReturn();
	}

#pragma endregion


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(KingConditions::typeid));
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSaveClose = (gcnew System::Windows::Forms::Button());
			this->txtXcenter = (gcnew System::Windows::Forms::TextBox());
			this->lblXcenter = (gcnew System::Windows::Forms::Label());
			this->lblYcenter = (gcnew System::Windows::Forms::Label());
			this->lblRtRescaling1 = (gcnew System::Windows::Forms::Label());
			this->lblRtRescaling2 = (gcnew System::Windows::Forms::Label());
			this->lblRt = (gcnew System::Windows::Forms::Label());
			this->lblRc = (gcnew System::Windows::Forms::Label());
			this->lblRax1 = (gcnew System::Windows::Forms::Label());
			this->lblRay1 = (gcnew System::Windows::Forms::Label());
			this->lblRax2 = (gcnew System::Windows::Forms::Label());
			this->lblRay2 = (gcnew System::Windows::Forms::Label());
			this->lblRot = (gcnew System::Windows::Forms::Label());
			this->lblBubbles = (gcnew System::Windows::Forms::Label());
			this->lblNoBubbles = (gcnew System::Windows::Forms::Label());
			this->txtYcenter = (gcnew System::Windows::Forms::TextBox());
			this->txtRtRescaling = (gcnew System::Windows::Forms::TextBox());
			this->txtRt = (gcnew System::Windows::Forms::TextBox());
			this->txtRc = (gcnew System::Windows::Forms::TextBox());
			this->txtRax = (gcnew System::Windows::Forms::TextBox());
			this->txtRay = (gcnew System::Windows::Forms::TextBox());
			this->txtRot = (gcnew System::Windows::Forms::TextBox());
			this->txtNoBubbles = (gcnew System::Windows::Forms::TextBox());
			this->ddlMIMFS = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
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
			this->btnCancel->TabIndex = 32;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &KingConditions::btnCancel_Click);
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
			this->btnSaveClose->TabIndex = 31;
			this->btnSaveClose->Text = L"Save and Close";
			this->btnSaveClose->UseVisualStyleBackColor = false;
			this->btnSaveClose->Click += gcnew System::EventHandler(this, &KingConditions::btnSaveClose_Click);
			// 
			// txtXcenter
			// 
			this->txtXcenter->Location = System::Drawing::Point(209, 9);
			this->txtXcenter->Name = L"txtXcenter";
			this->txtXcenter->Size = System::Drawing::Size(100, 20);
			this->txtXcenter->TabIndex = 34;
			this->txtXcenter->Text = L"0.50";
			// 
			// lblXcenter
			// 
			this->lblXcenter->AutoSize = true;
			this->lblXcenter->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblXcenter->Location = System::Drawing::Point(9, 9);
			this->lblXcenter->Name = L"lblXcenter";
			this->lblXcenter->Size = System::Drawing::Size(169, 18);
			this->lblXcenter->TabIndex = 33;
			this->lblXcenter->Text = L"Xcenter - (0,1) interval";
			// 
			// lblYcenter
			// 
			this->lblYcenter->AutoSize = true;
			this->lblYcenter->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblYcenter->Location = System::Drawing::Point(9, 35);
			this->lblYcenter->Name = L"lblYcenter";
			this->lblYcenter->Size = System::Drawing::Size(169, 18);
			this->lblYcenter->TabIndex = 35;
			this->lblYcenter->Text = L"Ycenter - (0,1) interval";
			// 
			// lblRtRescaling1
			// 
			this->lblRtRescaling1->AutoSize = true;
			this->lblRtRescaling1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRtRescaling1->Location = System::Drawing::Point(9, 61);
			this->lblRtRescaling1->Name = L"lblRtRescaling1";
			this->lblRtRescaling1->Size = System::Drawing::Size(157, 18);
			this->lblRtRescaling1->TabIndex = 36;
			this->lblRtRescaling1->Text = L"Rt rescaling (0.0,1.0)";
			// 
			// lblRtRescaling2
			// 
			this->lblRtRescaling2->AutoSize = true;
			this->lblRtRescaling2->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRtRescaling2->Location = System::Drawing::Point(12, 84);
			this->lblRtRescaling2->MaximumSize = System::Drawing::Size(250, 0);
			this->lblRtRescaling2->Name = L"lblRtRescaling2";
			this->lblRtRescaling2->Size = System::Drawing::Size(239, 30);
			this->lblRtRescaling2->TabIndex = 37;
			this->lblRtRescaling2->Text = L"(used only to combine two images; for only one cluster =1)";
			// 
			// lblRt
			// 
			this->lblRt->AutoSize = true;
			this->lblRt->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRt->Location = System::Drawing::Point(10, 117);
			this->lblRt->Name = L"lblRt";
			this->lblRt->Size = System::Drawing::Size(172, 18);
			this->lblRt->TabIndex = 38;
			this->lblRt->Text = L"Rt (pc, arcmin, arcsec)";
			// 
			// lblRc
			// 
			this->lblRc->AutoSize = true;
			this->lblRc->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRc->Location = System::Drawing::Point(9, 143);
			this->lblRc->Name = L"lblRc";
			this->lblRc->Size = System::Drawing::Size(175, 18);
			this->lblRc->TabIndex = 39;
			this->lblRc->Text = L"Rc (pc, arcmin, arcsec)";
			// 
			// lblRax1
			// 
			this->lblRax1->AutoSize = true;
			this->lblRax1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRax1->Location = System::Drawing::Point(9, 169);
			this->lblRax1->Name = L"lblRax1";
			this->lblRax1->Size = System::Drawing::Size(179, 18);
			this->lblRax1->TabIndex = 40;
			this->lblRax1->Text = L"Rax (asymmetry radius)";
			// 
			// lblRay1
			// 
			this->lblRay1->AutoSize = true;
			this->lblRay1->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRay1->Location = System::Drawing::Point(10, 212);
			this->lblRay1->Name = L"lblRay1";
			this->lblRay1->Size = System::Drawing::Size(178, 18);
			this->lblRay1->TabIndex = 41;
			this->lblRay1->Text = L"Ray (asymmetry radius)";
			// 
			// lblRax2
			// 
			this->lblRax2->AutoSize = true;
			this->lblRax2->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRax2->Location = System::Drawing::Point(9, 194);
			this->lblRax2->Name = L"lblRax2";
			this->lblRax2->Size = System::Drawing::Size(286, 15);
			this->lblRax2->TabIndex = 42;
			this->lblRax2->Text = L"(values in (0.0,1.0) interval; 1 = no asymmetry)";
			// 
			// lblRay2
			// 
			this->lblRay2->AutoSize = true;
			this->lblRay2->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRay2->Location = System::Drawing::Point(9, 235);
			this->lblRay2->Name = L"lblRay2";
			this->lblRay2->Size = System::Drawing::Size(286, 15);
			this->lblRay2->TabIndex = 43;
			this->lblRay2->Text = L"(values in (0.0,1.0) interval; 1 = no asymmetry)";
			// 
			// lblRot
			// 
			this->lblRot->AutoSize = true;
			this->lblRot->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRot->Location = System::Drawing::Point(9, 255);
			this->lblRot->Name = L"lblRot";
			this->lblRot->Size = System::Drawing::Size(179, 18);
			this->lblRot->TabIndex = 44;
			this->lblRot->Text = L"Rot angle (-90, +90) deg";
			// 
			// lblBubbles
			// 
			this->lblBubbles->AutoSize = true;
			this->lblBubbles->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBubbles->Location = System::Drawing::Point(9, 281);
			this->lblBubbles->Name = L"lblBubbles";
			this->lblBubbles->Size = System::Drawing::Size(190, 18);
			this->lblBubbles->TabIndex = 45;
			this->lblBubbles->Text = L"\"Bubbles\" (experimental)";
			// 
			// lblNoBubbles
			// 
			this->lblNoBubbles->AutoSize = true;
			this->lblNoBubbles->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoBubbles->Location = System::Drawing::Point(12, 305);
			this->lblNoBubbles->Name = L"lblNoBubbles";
			this->lblNoBubbles->Size = System::Drawing::Size(144, 18);
			this->lblNoBubbles->TabIndex = 46;
			this->lblNoBubbles->Text = L"Number of bubbles";
			// 
			// txtYcenter
			// 
			this->txtYcenter->Location = System::Drawing::Point(209, 35);
			this->txtYcenter->Name = L"txtYcenter";
			this->txtYcenter->Size = System::Drawing::Size(100, 20);
			this->txtYcenter->TabIndex = 47;
			this->txtYcenter->Text = L"0.50";
			// 
			// txtRtRescaling
			// 
			this->txtRtRescaling->Location = System::Drawing::Point(209, 61);
			this->txtRtRescaling->Name = L"txtRtRescaling";
			this->txtRtRescaling->Size = System::Drawing::Size(100, 20);
			this->txtRtRescaling->TabIndex = 48;
			this->txtRtRescaling->Text = L"1.00";
			// 
			// txtRt
			// 
			this->txtRt->Location = System::Drawing::Point(209, 117);
			this->txtRt->Name = L"txtRt";
			this->txtRt->Size = System::Drawing::Size(100, 20);
			this->txtRt->TabIndex = 49;
			this->txtRt->Text = L"1.00";
			// 
			// txtRc
			// 
			this->txtRc->Location = System::Drawing::Point(209, 143);
			this->txtRc->Name = L"txtRc";
			this->txtRc->Size = System::Drawing::Size(100, 20);
			this->txtRc->TabIndex = 50;
			this->txtRc->Text = L"0.80";
			// 
			// txtRax
			// 
			this->txtRax->Location = System::Drawing::Point(209, 169);
			this->txtRax->Name = L"txtRax";
			this->txtRax->Size = System::Drawing::Size(100, 20);
			this->txtRax->TabIndex = 51;
			this->txtRax->Text = L"1.0";
			// 
			// txtRay
			// 
			this->txtRay->Location = System::Drawing::Point(209, 212);
			this->txtRay->Name = L"txtRay";
			this->txtRay->Size = System::Drawing::Size(100, 20);
			this->txtRay->TabIndex = 52;
			this->txtRay->Text = L"1.0";
			// 
			// txtRot
			// 
			this->txtRot->Location = System::Drawing::Point(209, 253);
			this->txtRot->Name = L"txtRot";
			this->txtRot->Size = System::Drawing::Size(100, 20);
			this->txtRot->TabIndex = 53;
			this->txtRot->Text = L"0";
			// 
			// txtNoBubbles
			// 
			this->txtNoBubbles->Location = System::Drawing::Point(209, 305);
			this->txtNoBubbles->Name = L"txtNoBubbles";
			this->txtNoBubbles->Size = System::Drawing::Size(100, 20);
			this->txtNoBubbles->TabIndex = 55;
			this->txtNoBubbles->Text = L"0";
			// 
			// ddlMIMFS
			// 
			this->ddlMIMFS->FormattingEnabled = true;
			this->ddlMIMFS->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ON", L"OFF" });
			this->ddlMIMFS->Location = System::Drawing::Point(209, 278);
			this->ddlMIMFS->Name = L"ddlMIMFS";
			this->ddlMIMFS->Size = System::Drawing::Size(100, 21);
			this->ddlMIMFS->TabIndex = 56;
			// 
			// KingConditions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(884, 462);
			this->Controls->Add(this->ddlMIMFS);
			this->Controls->Add(this->txtNoBubbles);
			this->Controls->Add(this->txtRot);
			this->Controls->Add(this->txtRay);
			this->Controls->Add(this->txtRax);
			this->Controls->Add(this->txtRc);
			this->Controls->Add(this->txtRt);
			this->Controls->Add(this->txtRtRescaling);
			this->Controls->Add(this->txtYcenter);
			this->Controls->Add(this->lblNoBubbles);
			this->Controls->Add(this->lblBubbles);
			this->Controls->Add(this->lblRot);
			this->Controls->Add(this->lblRay2);
			this->Controls->Add(this->lblRax2);
			this->Controls->Add(this->lblRay1);
			this->Controls->Add(this->lblRax1);
			this->Controls->Add(this->lblRc);
			this->Controls->Add(this->lblRt);
			this->Controls->Add(this->lblRtRescaling2);
			this->Controls->Add(this->lblRtRescaling1);
			this->Controls->Add(this->lblYcenter);
			this->Controls->Add(this->txtXcenter);
			this->Controls->Add(this->lblXcenter);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSaveClose);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"KingConditions";
			this->Text = L"King Spatial Distribution Conditions";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
