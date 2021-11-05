
#pragma once
#include "INF.h";
#include "FINDER.h";
#include "HELP.h";
#include "March.h";
namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  finder_button;
	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  march_button;

	private: System::Windows::Forms::Button^  INF_button;
	private: System::Windows::Forms::Button^  Help;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->finder_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->march_button = (gcnew System::Windows::Forms::Button());
			this->INF_button = (gcnew System::Windows::Forms::Button());
			this->Help = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// finder_button
			// 
			this->finder_button->Location = System::Drawing::Point(849, 12);
			this->finder_button->Name = L"finder_button";
			this->finder_button->Size = System::Drawing::Size(225, 46);
			this->finder_button->TabIndex = 0;
			this->finder_button->Text = L"ПОШУК";
			this->finder_button->UseVisualStyleBackColor = true;
			this->finder_button->Click += gcnew System::EventHandler(this, &MyForm::finder_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(6, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(837, 548);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// march_button
			// 
			this->march_button->Location = System::Drawing::Point(849, 61);
			this->march_button->Name = L"march_button";
			this->march_button->Size = System::Drawing::Size(225, 47);
			this->march_button->TabIndex = 2;
			this->march_button->Text = L"МАРШРУТИ";
			this->march_button->UseVisualStyleBackColor = true;
			this->march_button->Click += gcnew System::EventHandler(this, &MyForm::march_button_Click);
			// 
			// INF_button
			// 
			this->INF_button->Location = System::Drawing::Point(849, 508);
			this->INF_button->Name = L"INF_button";
			this->INF_button->Size = System::Drawing::Size(225, 49);
			this->INF_button->TabIndex = 3;
			this->INF_button->Text = L"ІНФОРМАЦІЯ";
			this->INF_button->UseVisualStyleBackColor = true;
			this->INF_button->Click += gcnew System::EventHandler(this, &MyForm::INF_button_Click);
			// 
			// Help
			// 
			this->Help->Location = System::Drawing::Point(6, 563);
			this->Help->Name = L"Help";
			this->Help->Size = System::Drawing::Size(31, 25);
			this->Help->TabIndex = 4;
			this->Help->Text = L"\?";
			this->Help->UseVisualStyleBackColor = true;
			this->Help->Click += gcnew System::EventHandler(this, &MyForm::Help_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1086, 615);
			this->Controls->Add(this->Help);
			this->Controls->Add(this->INF_button);
			this->Controls->Add(this->march_button);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->finder_button);
			this->Name = L"MyForm";
			this->Text = L"Проспект Соборний";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void finder_button_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		FINDER show_find;
		show_find.ShowDialog();
	}
	private: System::Void INF_button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		INF show_inf;
		show_inf.ShowDialog();
	}
	private: System::Void march_button_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		March show_march;
		show_march.ShowDialog();
	}
	private: System::Void Help_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		HELP show_help;
		show_help.ShowDialog();
	}
};
}
