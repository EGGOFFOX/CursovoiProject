#pragma once
#include "INF_HELP.h";
#include "Autor_Inf.h";
#include <string.h>
#include <cstring>
namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для HELP
	/// </summary>
	public ref class HELP : public System::Windows::Forms::Form
	{
	public:

		HELP(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~HELP()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 214);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(258, 95);
			this->richTextBox1->TabIndex = 1;
			
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(12, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(258, 196);
			this->richTextBox2->TabIndex = 2;
			// 
			// HELP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 321);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"HELP";
			this->ShowIcon = false;
			this->Text = L"Допомога";
			this->Load += gcnew System::EventHandler(this, &HELP::HELP_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void HELP_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		DataString Data;
		Autor autor;
		System::String^ a1 = gcnew String(Data.Information().data());
		this->richTextBox2->Text += a1;
		a1 = gcnew String(autor.Information().data());
		this->richTextBox1->Text += a1;
	}
	};
}
