#pragma once
namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FINDER
	/// </summary>
	public ref class FINDER : public System::Windows::Forms::Form
	{
	public:
		FINDER(void)
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
		~FINDER()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  num_to_find;
	protected:
	private: System::Windows::Forms::RichTextBox^  rich_find;
	//private: System::Windows::Forms::Button^  find_button;

public: System::Windows::Forms::Button^  find_button;
	private: System::Windows::Forms::Button^  button2;

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
			this->num_to_find = (gcnew System::Windows::Forms::TextBox());
			this->rich_find = (gcnew System::Windows::Forms::RichTextBox());
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
			this->num_to_find->Text = L"НОМЕР МАРШРУТУ";
			// 
			// rich_find
			// 
			this->rich_find->Location = System::Drawing::Point(13, 42);
			this->rich_find->Name = L"rich_find";
			this->rich_find->Size = System::Drawing::Size(270, 171);
			this->rich_find->TabIndex = 1;
			this->rich_find->Text = L"РЕЗУЛЬТАТИ ПОШУКУ";
			// 
			// find_button
			// 
			this->find_button->Location = System::Drawing::Point(13, 220);
			this->find_button->Name = L"find_button";
			this->find_button->Size = System::Drawing::Size(270, 47);
			this->find_button->TabIndex = 2;
			this->find_button->Text = L"ВИБРАТИ";
			this->find_button->UseVisualStyleBackColor = true;
		//	this->find_button->Click += gcnew System::EventHandler(this, &FINDER::find_button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(270, 65);
			this->button2->TabIndex = 3;
			this->button2->Text = L"НАЗАД";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FINDER::button2_Click);
			// 
			// FINDER
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 351);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->find_button);
			this->Controls->Add(this->rich_find);
			this->Controls->Add(this->num_to_find);
			this->Name = L"FINDER";
			this->Text = L"Пошук";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::String^ tmp;

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
			
	public: System::String^ tp() { return tmp; };
	
 
};
}
