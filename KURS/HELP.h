#pragma once

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
	private: System::Windows::Forms::Button^  back_help;
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
			this->back_help = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// back_help
			// 
			this->back_help->Location = System::Drawing::Point(12, 340);
			this->back_help->Name = L"back_help";
			this->back_help->Size = System::Drawing::Size(258, 36);
			this->back_help->TabIndex = 0;
			this->back_help->Text = L"НАЗАД";
			this->back_help->UseVisualStyleBackColor = true;
			this->back_help->Click += gcnew System::EventHandler(this, &HELP::back_help_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 246);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(258, 75);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Розробники: студенти групи КНТ-110.\nВиноградов М.М.\nБондаренко М.Д.\nШанін К.А.\nЯк"
				L"ушкін М.С\n";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(12, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(258, 228);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// HELP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 388);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->back_help);
			this->Name = L"HELP";
			this->Text = L"Допомога";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void back_help_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	};
}
