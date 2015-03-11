#pragma once

#include "IMFConditions.h"

namespace MassCluster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  pgBar;
	protected:

	protected:
	private: System::Windows::Forms::Button^  btnRunAll;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabCCM;
	private: System::Windows::Forms::Button^  btnSetIMF;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>



#pragma region MISC

	private:
		void closeProgram()
		{
			Application::Exit();
		}

	private:
		void saveData()
		{
			//TODO: create save function once data is generated. \\B.Bubnick 3-11-2015
		}


#pragma endregion


#pragma region Button Clicks and the like

	private: System::Void btnRunAll_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//this->tmRunAll->Start();
	}
			 /*private: System::Void tmRunAll_Tick(System::Object^  sender, System::EventArgs^  e)
			 {
			 this->pgBar->Increment(1);
			 }*/
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e)
	{
		saveData();
		closeProgram();
	}

	private: System::Void btnSetIMF_Click(System::Object^  sender, System::EventArgs^  e)
	{
		IMFConditions ^ newForm = gcnew IMFConditions(this);
		newForm->Show();
		this->Hide();
	}


#pragma endregion



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pgBar = (gcnew System::Windows::Forms::ProgressBar());
			this->btnRunAll = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabCCM = (gcnew System::Windows::Forms::TabPage());
			this->btnSetIMF = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pgBar
			// 
			this->pgBar->ForeColor = System::Drawing::Color::Green;
			this->pgBar->Location = System::Drawing::Point(13, 13);
			this->pgBar->Name = L"pgBar";
			this->pgBar->Size = System::Drawing::Size(191, 23);
			this->pgBar->TabIndex = 0;
			// 
			// btnRunAll
			// 
			this->btnRunAll->BackColor = System::Drawing::Color::Green;
			this->btnRunAll->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRunAll->ForeColor = System::Drawing::Color::White;
			this->btnRunAll->Location = System::Drawing::Point(12, 364);
			this->btnRunAll->Name = L"btnRunAll";
			this->btnRunAll->Size = System::Drawing::Size(191, 40);
			this->btnRunAll->TabIndex = 1;
			this->btnRunAll->Text = L"Run All Simulations";
			this->btnRunAll->UseVisualStyleBackColor = false;
			this->btnRunAll->Click += gcnew System::EventHandler(this, &MainForm::btnRunAll_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::White;
			this->btnClose->Location = System::Drawing::Point(12, 410);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(191, 40);
			this->btnClose->TabIndex = 2;
			this->btnClose->Text = L"Save and Close";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MainForm::btnClose_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabCCM);
			this->tabControl1->Location = System::Drawing::Point(211, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(661, 437);
			this->tabControl1->TabIndex = 3;
			// 
			// tabCCM
			// 
			this->tabCCM->Location = System::Drawing::Point(4, 22);
			this->tabCCM->Name = L"tabCCM";
			this->tabCCM->Padding = System::Windows::Forms::Padding(3);
			this->tabCCM->Size = System::Drawing::Size(653, 411);
			this->tabCCM->TabIndex = 0;
			this->tabCCM->Text = L"CCM";
			this->tabCCM->UseVisualStyleBackColor = true;
			// 
			// btnSetIMF
			// 
			this->btnSetIMF->BackColor = System::Drawing::Color::Silver;
			this->btnSetIMF->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSetIMF->ForeColor = System::Drawing::Color::Black;
			this->btnSetIMF->Location = System::Drawing::Point(14, 42);
			this->btnSetIMF->Name = L"btnSetIMF";
			this->btnSetIMF->Size = System::Drawing::Size(191, 40);
			this->btnSetIMF->TabIndex = 4;
			this->btnSetIMF->Text = L"Set IMF Conditions";
			this->btnSetIMF->UseVisualStyleBackColor = false;
			this->btnSetIMF->Click += gcnew System::EventHandler(this, &MainForm::btnSetIMF_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(884, 462);
			this->Controls->Add(this->btnSetIMF);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnRunAll);
			this->Controls->Add(this->pgBar);
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Massive Cluster Simulation";
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


			 
	};
}
