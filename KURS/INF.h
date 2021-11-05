#pragma once

namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� INF
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			// 
			// rich_inf
			// 
			this->rich_inf->Location = System::Drawing::Point(10, 48);
			this->rich_inf->Name = L"rich_inf";
			this->rich_inf->Size = System::Drawing::Size(370, 215);
			this->rich_inf->TabIndex = 1;
			this->rich_inf->Text = L"";
			// 
			// Back_button_inf
			// 
			this->Back_button_inf->Location = System::Drawing::Point(10, 270);
			this->Back_button_inf->Name = L"Back_button_inf";
			this->Back_button_inf->Size = System::Drawing::Size(370, 44);
			this->Back_button_inf->TabIndex = 2;
			this->Back_button_inf->Text = L"�����";
			this->Back_button_inf->UseVisualStyleBackColor = true;
			this->Back_button_inf->Click += gcnew System::EventHandler(this, &INF::Back_button_inf_Click);
			// 
			// INF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 322);
			this->Controls->Add(this->Back_button_inf);
			this->Controls->Add(this->rich_inf);
			this->Controls->Add(this->text_to_inf);
			this->Name = L"INF";
			this->Text = L"����������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Back_button_inf_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	};
}