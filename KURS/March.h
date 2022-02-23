#pragma once

#include "Traveler.h";

#include "dateloader.h";

namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для March
	/// </summary>
	public ref class March : public System::Windows::Forms::Form
	{
	public:
		March(void)
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
		~March()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  March_rich;
	protected:


	private: System::Windows::Forms::Button^  Back_March;

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
			this->March_rich = (gcnew System::Windows::Forms::RichTextBox());
			this->Back_March = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// March_rich
			// 
			this->March_rich->Location = System::Drawing::Point(13, 13);
			this->March_rich->Name = L"March_rich";
			this->March_rich->Size = System::Drawing::Size(298, 306);
			this->March_rich->TabIndex = 0;
			this->March_rich->Text = L"";
			// 
			// Back_March
			// 
			this->Back_March->Location = System::Drawing::Point(13, 325);
			this->Back_March->Name = L"Back_March";
			this->Back_March->Size = System::Drawing::Size(298, 25);
			this->Back_March->TabIndex = 3;
			this->Back_March->Text = L"НАЗАД";
			this->Back_March->UseVisualStyleBackColor = true;
			this->Back_March->Click += gcnew System::EventHandler(this, &March::Back_March_Click);
			// 
			// March
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 362);
			this->Controls->Add(this->Back_March);
			this->Controls->Add(this->March_rich);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"March";
			this->Text = L"Маршрути";
			this->Load += gcnew System::EventHandler(this, &March::March_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Back_March_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Close();
	}
	private: System::Void March_Load(System::Object^  sender, System::EventArgs^  e) {
		this->March_rich->Text = "";
		std::vector<Traveler> Travelers;
		getTravelersDate(Travelers);
		for (int i = 0; i < 19; i++)
		{
			setlocale(LC_ALL, "ukr");
			std::string a = Travelers[i].getOwner();
			System::String^ a1 = gcnew String(a.data());
			this->March_rich->Text += Travelers[i].getTravelNumber().ToString();
			this->March_rich->Text += " Перевізник:\" " + a1 + "\"; ";
			this->March_rich->Text += Travelers[i].getLengthWay() + " км; вартість: ";
			this->March_rich->Text += Travelers[i].getCost() + " гривень, інтервал ходу становить ";
			this->March_rich->Text += Travelers[i].getIntervalStops() + " хвилин.\n\n";
		}
	}
	};
}
