#pragma once

#include "INF.h";
#include "FINDER.h";
#include "HELP.h";
#include "March.h";
#include <stdlib.h>
#include <iostream>;
#include <windows.h>; 
#include <chrono>;
#include "Traveler.h";
#include <vector>
#include <sstream>;
#include "dateloader.h";
#include "FindPoint.h";
namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ INF
	/// </summary>
	public ref class INF : public System::Windows::Forms::Form
	{
	public:
		INF(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		
		/// </summary>
		~INF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  text_to_inf;
	private: System::Windows::Forms::RichTextBox^  rich_inf;
	protected:

	protected:

	private: System::Windows::Forms::Button^  Back_button_inf;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->text_to_inf = (gcnew System::Windows::Forms::TextBox());
			this->rich_inf = (gcnew System::Windows::Forms::RichTextBox());
			this->Back_button_inf = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text_to_inf
			// 
			this->text_to_inf->Location = System::Drawing::Point(10, 12);
			this->text_to_inf->Name = L"text_to_inf";
			this->text_to_inf->Size = System::Drawing::Size(370, 22);
			this->text_to_inf->TabIndex = 0;
			this->text_to_inf->TextChanged += gcnew System::EventHandler(this, &INF::text_to_inf_TextChanged);
			// 
			// rich_inf
			// 
			this->rich_inf->Location = System::Drawing::Point(10, 48);
			this->rich_inf->Name = L"rich_inf";
			this->rich_inf->Size = System::Drawing::Size(370, 92);
			this->rich_inf->TabIndex = 1;
			this->rich_inf->Text = L"";
			// 
			// Back_button_inf
			// 
			this->Back_button_inf->Location = System::Drawing::Point(10, 146);
			this->Back_button_inf->Name = L"Back_button_inf";
			this->Back_button_inf->Size = System::Drawing::Size(370, 44);
			this->Back_button_inf->TabIndex = 2;
			this->Back_button_inf->Text = L"Ќј«јƒ";
			this->Back_button_inf->UseVisualStyleBackColor = true;
			this->Back_button_inf->Click += gcnew System::EventHandler(this, &INF::Back_button_inf_Click);
			// 
			// INF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 195);
			this->Controls->Add(this->Back_button_inf);
			this->Controls->Add(this->rich_inf);
			this->Controls->Add(this->text_to_inf);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"INF";
			this->Text = L"≤нформац≥€";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	
	private: System::Void Back_button_inf_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}

	private: System::Void text_to_inf_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
			this->rich_inf->Text = "";
		std::vector<Traveler> Travelers;
		getTravelersDate(Travelers);
		for (int i = 0; i < 19; i++)
		{
			std::stringstream converter;
			int a = Travelers[i].getTravelNumber();
			converter << a;
			System::String^ num=Travelers[i].getTravelNumber().ToString();

			System::String^ conv;
			conv=text_to_inf->Text;

			if (num == conv)
			{
				std::string a = Travelers[i].getOwner();
				System::String^ a1 = gcnew String( a.data());
				this->rich_inf->Text += Travelers[i].getTravelNumber().ToString();
				this->rich_inf->Text += " ѕерев≥зник:\" "+a1+"\"; ";
				this->rich_inf->Text += Travelers[i].getLengthWay()+" км; варт≥сть: ";
				this->rich_inf->Text += Travelers[i].getCost() + " гривень, ≥нтервал ходу становить ";
				this->rich_inf->Text += Travelers[i].getIntervalStops() + " хвилин.";

			}
		}
	}
	};
}
