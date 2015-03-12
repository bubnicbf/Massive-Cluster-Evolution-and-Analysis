#pragma once

namespace MassCluster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClusterConditions
	/// </summary>
	public ref class ClusterConditions : public System::Windows::Forms::Form
	{
	public:
		ClusterConditions(System::Windows::Forms::Form ^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  lblMass;
	private: System::Windows::Forms::Label^  lblDistance;
	private: System::Windows::Forms::Label^  lblFOV;
	private: System::Windows::Forms::Label^  lblImageWidthIR;
	private: System::Windows::Forms::Label^  lblImageHeightIR;
	private: System::Windows::Forms::Label^  lblImageWidthCCD;
	private: System::Windows::Forms::Label^  lblImageHeightCCD;
	private: System::Windows::Forms::Label^  lblCCMModel;
	private: System::Windows::Forms::Label^  lblA_Kextinction;



	private: System::Windows::Forms::Label^  lblA_Hextinction;

	private: System::Windows::Forms::Label^  lblA_Jextinction;

	private: System::Windows::Forms::Label^  lblA_Iextinction;

	private: System::Windows::Forms::Label^  lblA_Rextinction;

	private: System::Windows::Forms::Label^  lblA_Vextinction;

	private: System::Windows::Forms::Label^  lblA_Bextinction;

	private: System::Windows::Forms::Label^  lblA_Uextinction;

	private: System::Windows::Forms::Label^  lblR_V;
	private: System::Windows::Forms::Label^  lblA_VISTA_Ksextinction;



	private: System::Windows::Forms::Label^  lblA_VISTA_Hextinction;

	private: System::Windows::Forms::Label^  lblA_VISTA_Jextinction;

	private: System::Windows::Forms::Label^  lblA_VISTA_Yextinction;

	private: System::Windows::Forms::Label^  lblA_VISTA_Zextinction;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  lblCCMModelDescription;
	private: System::Windows::Forms::TextBox^  txtImageHeight;
	private: System::Windows::Forms::TextBox^  txtDistance;
	private: System::Windows::Forms::TextBox^  txtFOV;
	private: System::Windows::Forms::TextBox^  txtImageWidthIR;
	private: System::Windows::Forms::TextBox^  txtImageHeightIR;
	private: System::Windows::Forms::TextBox^  txtImageWidthCCD;
	private: System::Windows::Forms::TextBox^  txtA_Uextinction;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;

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
		~ClusterConditions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtMass;
	protected:

	private: System::Windows::Forms::Label^  lblVERBOSE;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnSaveClose;
	private: System::Windows::Forms::ComboBox^  ddlMIMFS;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ClusterConditions::typeid));
			this->txtMass = (gcnew System::Windows::Forms::TextBox());
			this->lblVERBOSE = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSaveClose = (gcnew System::Windows::Forms::Button());
			this->ddlMIMFS = (gcnew System::Windows::Forms::ComboBox());
			this->lblMass = (gcnew System::Windows::Forms::Label());
			this->lblDistance = (gcnew System::Windows::Forms::Label());
			this->lblFOV = (gcnew System::Windows::Forms::Label());
			this->lblImageWidthIR = (gcnew System::Windows::Forms::Label());
			this->lblImageHeightIR = (gcnew System::Windows::Forms::Label());
			this->lblImageWidthCCD = (gcnew System::Windows::Forms::Label());
			this->lblImageHeightCCD = (gcnew System::Windows::Forms::Label());
			this->lblCCMModel = (gcnew System::Windows::Forms::Label());
			this->lblA_Kextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_Hextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_Jextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_Iextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_Rextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_Vextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_Bextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_Uextinction = (gcnew System::Windows::Forms::Label());
			this->lblR_V = (gcnew System::Windows::Forms::Label());
			this->lblA_VISTA_Ksextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_VISTA_Hextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_VISTA_Jextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_VISTA_Yextinction = (gcnew System::Windows::Forms::Label());
			this->lblA_VISTA_Zextinction = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblCCMModelDescription = (gcnew System::Windows::Forms::Label());
			this->txtImageHeight = (gcnew System::Windows::Forms::TextBox());
			this->txtDistance = (gcnew System::Windows::Forms::TextBox());
			this->txtFOV = (gcnew System::Windows::Forms::TextBox());
			this->txtImageWidthIR = (gcnew System::Windows::Forms::TextBox());
			this->txtImageHeightIR = (gcnew System::Windows::Forms::TextBox());
			this->txtImageWidthCCD = (gcnew System::Windows::Forms::TextBox());
			this->txtA_Uextinction = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtMass
			// 
			this->txtMass->Location = System::Drawing::Point(214, 33);
			this->txtMass->Name = L"txtMass";
			this->txtMass->Size = System::Drawing::Size(100, 20);
			this->txtMass->TabIndex = 20;
			this->txtMass->Text = L"1000";
			// 
			// lblVERBOSE
			// 
			this->lblVERBOSE->AutoSize = true;
			this->lblVERBOSE->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVERBOSE->Location = System::Drawing::Point(12, 9);
			this->lblVERBOSE->Name = L"lblVERBOSE";
			this->lblVERBOSE->Size = System::Drawing::Size(84, 18);
			this->lblVERBOSE->TabIndex = 19;
			this->lblVERBOSE->Text = L"VERBOSE: ";
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(15, 364);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(254, 40);
			this->btnCancel->TabIndex = 32;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ClusterConditions::btnCancel_Click);
			// 
			// btnSaveClose
			// 
			this->btnSaveClose->BackColor = System::Drawing::Color::Green;
			this->btnSaveClose->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveClose->ForeColor = System::Drawing::Color::White;
			this->btnSaveClose->Location = System::Drawing::Point(15, 410);
			this->btnSaveClose->Name = L"btnSaveClose";
			this->btnSaveClose->Size = System::Drawing::Size(254, 40);
			this->btnSaveClose->TabIndex = 31;
			this->btnSaveClose->Text = L"Save and Close";
			this->btnSaveClose->UseVisualStyleBackColor = false;
			this->btnSaveClose->Click += gcnew System::EventHandler(this, &ClusterConditions::btnSaveClose_Click);
			// 
			// ddlMIMFS
			// 
			this->ddlMIMFS->FormattingEnabled = true;
			this->ddlMIMFS->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"FULL", L"QUIET" });
			this->ddlMIMFS->Location = System::Drawing::Point(214, 6);
			this->ddlMIMFS->Name = L"ddlMIMFS";
			this->ddlMIMFS->Size = System::Drawing::Size(100, 21);
			this->ddlMIMFS->TabIndex = 33;
			this->ddlMIMFS->Text = L"QUIET";
			// 
			// lblMass
			// 
			this->lblMass->AutoSize = true;
			this->lblMass->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMass->Location = System::Drawing::Point(12, 33);
			this->lblMass->Name = L"lblMass";
			this->lblMass->Size = System::Drawing::Size(135, 18);
			this->lblMass->TabIndex = 34;
			this->lblMass->Text = L"Mass (solar units)";
			// 
			// lblDistance
			// 
			this->lblDistance->AutoSize = true;
			this->lblDistance->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDistance->Location = System::Drawing::Point(12, 59);
			this->lblDistance->Name = L"lblDistance";
			this->lblDistance->Size = System::Drawing::Size(104, 18);
			this->lblDistance->TabIndex = 35;
			this->lblDistance->Text = L"Distance (pc)";
			// 
			// lblFOV
			// 
			this->lblFOV->AutoSize = true;
			this->lblFOV->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFOV->Location = System::Drawing::Point(12, 85);
			this->lblFOV->Name = L"lblFOV";
			this->lblFOV->Size = System::Drawing::Size(164, 18);
			this->lblFOV->TabIndex = 36;
			this->lblFOV->Text = L"FOV (d x d) d (arcmin)";
			// 
			// lblImageWidthIR
			// 
			this->lblImageWidthIR->AutoSize = true;
			this->lblImageWidthIR->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblImageWidthIR->Location = System::Drawing::Point(12, 111);
			this->lblImageWidthIR->Name = L"lblImageWidthIR";
			this->lblImageWidthIR->Size = System::Drawing::Size(174, 18);
			this->lblImageWidthIR->TabIndex = 37;
			this->lblImageWidthIR->Text = L"Image Width IR (pixels)";
			// 
			// lblImageHeightIR
			// 
			this->lblImageHeightIR->AutoSize = true;
			this->lblImageHeightIR->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblImageHeightIR->Location = System::Drawing::Point(12, 137);
			this->lblImageHeightIR->Name = L"lblImageHeightIR";
			this->lblImageHeightIR->Size = System::Drawing::Size(181, 18);
			this->lblImageHeightIR->TabIndex = 38;
			this->lblImageHeightIR->Text = L"Image Height IR (pixels)";
			// 
			// lblImageWidthCCD
			// 
			this->lblImageWidthCCD->AutoSize = true;
			this->lblImageWidthCCD->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblImageWidthCCD->Location = System::Drawing::Point(12, 163);
			this->lblImageWidthCCD->Name = L"lblImageWidthCCD";
			this->lblImageWidthCCD->Size = System::Drawing::Size(189, 18);
			this->lblImageWidthCCD->TabIndex = 39;
			this->lblImageWidthCCD->Text = L"Image Width CCD (pixels)";
			// 
			// lblImageHeightCCD
			// 
			this->lblImageHeightCCD->AutoSize = true;
			this->lblImageHeightCCD->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblImageHeightCCD->Location = System::Drawing::Point(12, 189);
			this->lblImageHeightCCD->Name = L"lblImageHeightCCD";
			this->lblImageHeightCCD->Size = System::Drawing::Size(196, 18);
			this->lblImageHeightCCD->TabIndex = 40;
			this->lblImageHeightCCD->Text = L"Image Height CCD (pixels)";
			// 
			// lblCCMModel
			// 
			this->lblCCMModel->AutoSize = true;
			this->lblCCMModel->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCCMModel->Location = System::Drawing::Point(12, 215);
			this->lblCCMModel->Name = L"lblCCMModel";
			this->lblCCMModel->Size = System::Drawing::Size(173, 18);
			this->lblCCMModel->TabIndex = 41;
			this->lblCCMModel->Text = L"CCM Model Extinction :";
			// 
			// lblA_Kextinction
			// 
			this->lblA_Kextinction->AutoSize = true;
			this->lblA_Kextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Kextinction->Location = System::Drawing::Point(345, 215);
			this->lblA_Kextinction->Name = L"lblA_Kextinction";
			this->lblA_Kextinction->Size = System::Drawing::Size(159, 18);
			this->lblA_Kextinction->TabIndex = 50;
			this->lblA_Kextinction->Text = L"A_K extinction (mag)";
			// 
			// lblA_Hextinction
			// 
			this->lblA_Hextinction->AutoSize = true;
			this->lblA_Hextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Hextinction->Location = System::Drawing::Point(345, 189);
			this->lblA_Hextinction->Name = L"lblA_Hextinction";
			this->lblA_Hextinction->Size = System::Drawing::Size(159, 18);
			this->lblA_Hextinction->TabIndex = 49;
			this->lblA_Hextinction->Text = L"A_H extinction (mag)";
			// 
			// lblA_Jextinction
			// 
			this->lblA_Jextinction->AutoSize = true;
			this->lblA_Jextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Jextinction->Location = System::Drawing::Point(345, 163);
			this->lblA_Jextinction->Name = L"lblA_Jextinction";
			this->lblA_Jextinction->Size = System::Drawing::Size(157, 18);
			this->lblA_Jextinction->TabIndex = 48;
			this->lblA_Jextinction->Text = L"A_J extinction (mag)";
			// 
			// lblA_Iextinction
			// 
			this->lblA_Iextinction->AutoSize = true;
			this->lblA_Iextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Iextinction->Location = System::Drawing::Point(345, 137);
			this->lblA_Iextinction->Name = L"lblA_Iextinction";
			this->lblA_Iextinction->Size = System::Drawing::Size(158, 18);
			this->lblA_Iextinction->TabIndex = 47;
			this->lblA_Iextinction->Text = L"A_R extinction (mag)";
			// 
			// lblA_Rextinction
			// 
			this->lblA_Rextinction->AutoSize = true;
			this->lblA_Rextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Rextinction->Location = System::Drawing::Point(345, 113);
			this->lblA_Rextinction->Name = L"lblA_Rextinction";
			this->lblA_Rextinction->Size = System::Drawing::Size(158, 18);
			this->lblA_Rextinction->TabIndex = 46;
			this->lblA_Rextinction->Text = L"A_R extinction (mag)";
			// 
			// lblA_Vextinction
			// 
			this->lblA_Vextinction->AutoSize = true;
			this->lblA_Vextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Vextinction->Location = System::Drawing::Point(345, 85);
			this->lblA_Vextinction->Name = L"lblA_Vextinction";
			this->lblA_Vextinction->Size = System::Drawing::Size(158, 18);
			this->lblA_Vextinction->TabIndex = 45;
			this->lblA_Vextinction->Text = L"A_V extinction (mag)";
			// 
			// lblA_Bextinction
			// 
			this->lblA_Bextinction->AutoSize = true;
			this->lblA_Bextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Bextinction->Location = System::Drawing::Point(345, 59);
			this->lblA_Bextinction->Name = L"lblA_Bextinction";
			this->lblA_Bextinction->Size = System::Drawing::Size(158, 18);
			this->lblA_Bextinction->TabIndex = 44;
			this->lblA_Bextinction->Text = L"A_B extinction (mag)";
			// 
			// lblA_Uextinction
			// 
			this->lblA_Uextinction->AutoSize = true;
			this->lblA_Uextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_Uextinction->Location = System::Drawing::Point(345, 33);
			this->lblA_Uextinction->Name = L"lblA_Uextinction";
			this->lblA_Uextinction->Size = System::Drawing::Size(159, 18);
			this->lblA_Uextinction->TabIndex = 43;
			this->lblA_Uextinction->Text = L"A_U extinction (mag)";
			// 
			// lblR_V
			// 
			this->lblR_V->AutoSize = true;
			this->lblR_V->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblR_V->Location = System::Drawing::Point(345, 9);
			this->lblR_V->Name = L"lblR_V";
			this->lblR_V->Size = System::Drawing::Size(35, 18);
			this->lblR_V->TabIndex = 42;
			this->lblR_V->Text = L"R_V";
			// 
			// lblA_VISTA_Ksextinction
			// 
			this->lblA_VISTA_Ksextinction->AutoSize = true;
			this->lblA_VISTA_Ksextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_VISTA_Ksextinction->Location = System::Drawing::Point(287, 343);
			this->lblA_VISTA_Ksextinction->Name = L"lblA_VISTA_Ksextinction";
			this->lblA_VISTA_Ksextinction->Size = System::Drawing::Size(217, 18);
			this->lblA_VISTA_Ksextinction->TabIndex = 55;
			this->lblA_VISTA_Ksextinction->Text = L"A_VISTA_Ks extinction (mag)";
			// 
			// lblA_VISTA_Hextinction
			// 
			this->lblA_VISTA_Hextinction->AutoSize = true;
			this->lblA_VISTA_Hextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_VISTA_Hextinction->Location = System::Drawing::Point(297, 317);
			this->lblA_VISTA_Hextinction->Name = L"lblA_VISTA_Hextinction";
			this->lblA_VISTA_Hextinction->Size = System::Drawing::Size(205, 18);
			this->lblA_VISTA_Hextinction->TabIndex = 54;
			this->lblA_VISTA_Hextinction->Text = L"A_VISTA_Hextinction (mag)";
			// 
			// lblA_VISTA_Jextinction
			// 
			this->lblA_VISTA_Jextinction->AutoSize = true;
			this->lblA_VISTA_Jextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_VISTA_Jextinction->Location = System::Drawing::Point(295, 291);
			this->lblA_VISTA_Jextinction->Name = L"lblA_VISTA_Jextinction";
			this->lblA_VISTA_Jextinction->Size = System::Drawing::Size(207, 18);
			this->lblA_VISTA_Jextinction->TabIndex = 53;
			this->lblA_VISTA_Jextinction->Text = L"A_VISTA_J extinction (mag)";
			// 
			// lblA_VISTA_Yextinction
			// 
			this->lblA_VISTA_Yextinction->AutoSize = true;
			this->lblA_VISTA_Yextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_VISTA_Yextinction->Location = System::Drawing::Point(294, 267);
			this->lblA_VISTA_Yextinction->Name = L"lblA_VISTA_Yextinction";
			this->lblA_VISTA_Yextinction->Size = System::Drawing::Size(208, 18);
			this->lblA_VISTA_Yextinction->TabIndex = 52;
			this->lblA_VISTA_Yextinction->Text = L"A_VISTA_Y extinction (mag)";
			// 
			// lblA_VISTA_Zextinction
			// 
			this->lblA_VISTA_Zextinction->AutoSize = true;
			this->lblA_VISTA_Zextinction->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA_VISTA_Zextinction->Location = System::Drawing::Point(297, 241);
			this->lblA_VISTA_Zextinction->Name = L"lblA_VISTA_Zextinction";
			this->lblA_VISTA_Zextinction->Size = System::Drawing::Size(207, 18);
			this->lblA_VISTA_Zextinction->TabIndex = 51;
			this->lblA_VISTA_Zextinction->Text = L"A_VISTA_Z extinction (mag)";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ON", L"OFF" });
			this->comboBox1->Location = System::Drawing::Point(214, 215);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 57;
			this->comboBox1->Text = L"ON";
			// 
			// lblCCMModelDescription
			// 
			this->lblCCMModelDescription->AutoSize = true;
			this->lblCCMModelDescription->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCCMModelDescription->Location = System::Drawing::Point(12, 239);
			this->lblCCMModelDescription->MaximumSize = System::Drawing::Size(250, 0);
			this->lblCCMModelDescription->Name = L"lblCCMModelDescription";
			this->lblCCMModelDescription->Size = System::Drawing::Size(249, 90);
			this->lblCCMModelDescription->TabIndex = 58;
			this->lblCCMModelDescription->Text = resources->GetString(L"lblCCMModelDescription.Text");
			// 
			// txtImageHeight
			// 
			this->txtImageHeight->Location = System::Drawing::Point(214, 189);
			this->txtImageHeight->Name = L"txtImageHeight";
			this->txtImageHeight->Size = System::Drawing::Size(100, 20);
			this->txtImageHeight->TabIndex = 59;
			this->txtImageHeight->Text = L"2048";
			// 
			// txtDistance
			// 
			this->txtDistance->Location = System::Drawing::Point(214, 59);
			this->txtDistance->Name = L"txtDistance";
			this->txtDistance->Size = System::Drawing::Size(100, 20);
			this->txtDistance->TabIndex = 60;
			this->txtDistance->Text = L"2000";
			// 
			// txtFOV
			// 
			this->txtFOV->Location = System::Drawing::Point(214, 85);
			this->txtFOV->Name = L"txtFOV";
			this->txtFOV->Size = System::Drawing::Size(100, 20);
			this->txtFOV->TabIndex = 61;
			this->txtFOV->Text = L"4.8";
			// 
			// txtImageWidthIR
			// 
			this->txtImageWidthIR->Location = System::Drawing::Point(214, 111);
			this->txtImageWidthIR->Name = L"txtImageWidthIR";
			this->txtImageWidthIR->Size = System::Drawing::Size(100, 20);
			this->txtImageWidthIR->TabIndex = 62;
			this->txtImageWidthIR->Text = L"2048";
			// 
			// txtImageHeightIR
			// 
			this->txtImageHeightIR->Location = System::Drawing::Point(214, 137);
			this->txtImageHeightIR->Name = L"txtImageHeightIR";
			this->txtImageHeightIR->Size = System::Drawing::Size(100, 20);
			this->txtImageHeightIR->TabIndex = 63;
			this->txtImageHeightIR->Text = L"2048";
			// 
			// txtImageWidthCCD
			// 
			this->txtImageWidthCCD->Location = System::Drawing::Point(214, 163);
			this->txtImageWidthCCD->Name = L"txtImageWidthCCD";
			this->txtImageWidthCCD->Size = System::Drawing::Size(100, 20);
			this->txtImageWidthCCD->TabIndex = 64;
			this->txtImageWidthCCD->Text = L"2048";
			// 
			// txtA_Uextinction
			// 
			this->txtA_Uextinction->Location = System::Drawing::Point(510, 33);
			this->txtA_Uextinction->Name = L"txtA_Uextinction";
			this->txtA_Uextinction->Size = System::Drawing::Size(100, 20);
			this->txtA_Uextinction->TabIndex = 65;
			this->txtA_Uextinction->Text = L"0.0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(510, 189);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 72;
			this->textBox1->Text = L"0.0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(510, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 71;
			this->textBox2->Text = L"0.0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(510, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 70;
			this->textBox3->Text = L"0.0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(510, 111);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 69;
			this->textBox4->Text = L"0.0";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(510, 85);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 68;
			this->textBox5->Text = L"3.0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(510, 215);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 67;
			this->textBox6->Text = L"0.0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(510, 59);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 66;
			this->textBox7->Text = L"0.0";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(510, 7);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 73;
			this->textBox8->Text = L"3.1";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(510, 317);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 78;
			this->textBox9->Text = L"0.0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(510, 291);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 77;
			this->textBox10->Text = L"0.0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(510, 267);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 76;
			this->textBox11->Text = L"0.0";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(510, 241);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 75;
			this->textBox12->Text = L"0.0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(510, 343);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 74;
			this->textBox13->Text = L"0.0";
			// 
			// ClusterConditions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(884, 462);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->txtA_Uextinction);
			this->Controls->Add(this->txtImageWidthCCD);
			this->Controls->Add(this->txtImageHeightIR);
			this->Controls->Add(this->txtImageWidthIR);
			this->Controls->Add(this->txtFOV);
			this->Controls->Add(this->txtDistance);
			this->Controls->Add(this->txtImageHeight);
			this->Controls->Add(this->lblCCMModelDescription);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblA_VISTA_Ksextinction);
			this->Controls->Add(this->lblA_VISTA_Hextinction);
			this->Controls->Add(this->lblA_VISTA_Jextinction);
			this->Controls->Add(this->lblA_VISTA_Yextinction);
			this->Controls->Add(this->lblA_VISTA_Zextinction);
			this->Controls->Add(this->lblA_Kextinction);
			this->Controls->Add(this->lblA_Hextinction);
			this->Controls->Add(this->lblA_Jextinction);
			this->Controls->Add(this->lblA_Iextinction);
			this->Controls->Add(this->lblA_Rextinction);
			this->Controls->Add(this->lblA_Vextinction);
			this->Controls->Add(this->lblA_Bextinction);
			this->Controls->Add(this->lblA_Uextinction);
			this->Controls->Add(this->lblR_V);
			this->Controls->Add(this->lblCCMModel);
			this->Controls->Add(this->lblImageHeightCCD);
			this->Controls->Add(this->lblImageWidthCCD);
			this->Controls->Add(this->lblImageHeightIR);
			this->Controls->Add(this->lblImageWidthIR);
			this->Controls->Add(this->lblFOV);
			this->Controls->Add(this->lblDistance);
			this->Controls->Add(this->lblMass);
			this->Controls->Add(this->ddlMIMFS);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSaveClose);
			this->Controls->Add(this->txtMass);
			this->Controls->Add(this->lblVERBOSE);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ClusterConditions";
			this->Text = L"Cluster Conditions";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	};
}
