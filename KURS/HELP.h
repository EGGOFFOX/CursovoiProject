#pragma once
#include "INF_HELP.h";
#include "Autor_Inf.h";
#include <string.h>
#include <cstring>
#include "FINDER.h";
#include "WORKEXCEP.h";



namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	public ref class HELP : public System::Windows::Forms::Form
	{
	public:

		HELP(void)
		{
			InitializeComponent();
		
		}
	
	public:FINDER^ show_find;
	protected:
		
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
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
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
		WorkWithExceptions excep2;
		DataString Data;
		Autor autor;
		try
		{
			System::String^ a1 = gcnew String(Data.Information().data());
			this->richTextBox2->Text += a1;
			a1 = gcnew String(autor.Information().data());
			this->richTextBox1->Text += a1;
		}
		catch (std::length_error)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep2.LengthError();
		}
		catch (std::range_error)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep2.RangeError();
		}
		catch (std::out_of_range)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep2.OutOfRangeError();
		}
		catch (std::invalid_argument)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep2.InvalidArgumentError();
		}
	}
	};
}
