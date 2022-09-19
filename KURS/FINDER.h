#pragma once
namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class FINDER : public System::Windows::Forms::Form
	{
	public:
		FINDER(void)
		{
			InitializeComponent();

		}
	public:FINDER^ show_find;

	protected:

		~FINDER()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  num_to_find;
	protected:

public: System::Windows::Forms::Button^  find_button;
	private: System::Windows::Forms::Button^  button2;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->num_to_find = (gcnew System::Windows::Forms::TextBox());
			this->find_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// num_to_find
			// 
			this->num_to_find->Location = System::Drawing::Point(13, 13);
			this->num_to_find->Name = L"num_to_find";
			this->num_to_find->Size = System::Drawing::Size(270, 22);
			this->num_to_find->TabIndex = 0;
			this->num_to_find->Text = L"ÍÎÌÅÐ ÌÀÐØÐÓÒÓ";
			// 
			// find_button
			// 
			this->find_button->Location = System::Drawing::Point(12, 41);
			this->find_button->Name = L"find_button";
			this->find_button->Size = System::Drawing::Size(270, 47);
			this->find_button->TabIndex = 2;
			this->find_button->Text = L"ÂÈÁÐÀÒÈ";
			this->find_button->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(270, 65);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ÍÀÇÀÄ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FINDER::button2_Click);
			// 
			// FINDER
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 166);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->find_button);
			this->Controls->Add(this->num_to_find);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FINDER";
			this->Text = L"Ïîøóê";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//public: System::String^ tmp;

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
			
	
 
};
}
