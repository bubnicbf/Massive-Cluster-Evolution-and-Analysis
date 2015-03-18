#pragma once

namespace MassCluster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Padova
	/// </summary>
	public ref class Padova : public System::Windows::Forms::Form
	{
	public:
		Padova(System::Windows::Forms::Form ^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  btnCancel;
	public:

	private: System::Windows::Forms::Form ^ otherform;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Padova()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region MISC

	private:
		void closeAndReturn()
		{
			this->Hide();
			otherform->Show();
		}



#pragma endregion 


#pragma region Button clicks and the like

	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}


#pragma endregion


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Padova::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(145, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(727, 438);
			this->dataGridView1->TabIndex = 0;
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(12, 410);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(127, 40);
			this->btnCancel->TabIndex = 33;
			this->btnCancel->Text = L"Close";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Padova::btnCancel_Click);
			// 
			// Padova
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(884, 462);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Padova";
			this->Text = L"Padova database (Marigo et al. 2008; Girardi";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
