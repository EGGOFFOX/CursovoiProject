#pragma once

namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� March
	/// </summary>
	public ref class March : public System::Windows::Forms::Form
	{
	public:
		March(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Button^  Take_march;
	private: System::Windows::Forms::Button^  Away_button;
	private: System::Windows::Forms::Button^  Back_March;

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
			this->March_rich = (gcnew System::Windows::Forms::RichTextBox());
			this->Take_march = (gcnew System::Windows::Forms::Button());
			this->Away_button = (gcnew System::Windows::Forms::Button());
			this->Back_March = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// March_rich
			// 
			this->March_rich->Location = System::Drawing::Point(13, 13);
			this->March_rich->Name = L"March_rich";
			this->March_rich->Size = System::Drawing::Size(298, 198);
			this->March_rich->TabIndex = 0;
			this->March_rich->Text = L"";
			// 
			// Take_march
			// 
			this->Take_march->Location = System::Drawing::Point(13, 203);
			this->Take_march->Name = L"Take_march";
			this->Take_march->Size = System::Drawing::Size(298, 57);
			this->Take_march->TabIndex = 1;
			this->Take_march->Text = L"�������";
			this->Take_march->UseVisualStyleBackColor = true;
			// 
			// Away_button
			// 
			this->Away_button->Location = System::Drawing::Point(13, 267);
			this->Away_button->Name = L"Away_button";
			this->Away_button->Size = System::Drawing::Size(298, 51);
			this->Away_button->TabIndex = 2;
			this->Away_button->Text = L"�������";
			this->Away_button->UseVisualStyleBackColor = true;
			// 
			// Back_March
			// 
			this->Back_March->Location = System::Drawing::Point(13, 325);
			this->Back_March->Name = L"Back_March";
			this->Back_March->Size = System::Drawing::Size(298, 25);
			this->Back_March->TabIndex = 3;
			this->Back_March->Text = L"�����";
			this->Back_March->UseVisualStyleBackColor = true;
			this->Back_March->Click += gcnew System::EventHandler(this, &March::Back_March_Click);
			// 
			// March
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 362);
			this->Controls->Add(this->Back_March);
			this->Controls->Add(this->Away_button);
			this->Controls->Add(this->Take_march);
			this->Controls->Add(this->March_rich);
			this->Name = L"March";
			this->Text = L"��������";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Back_March_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Close();
	}
	};
}
