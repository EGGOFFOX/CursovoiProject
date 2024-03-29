#pragma once

#include "Traveler.h";
#include "WORKEXCEP.h";
#include "dataloader.h";
#include "FINDER.h";
namespace KURS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class March : public System::Windows::Forms::Form
	{
	public:
		March(void)
		{
			InitializeComponent();
		
		}
	public:FINDER^ show_find;
	protected:
		
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
	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
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
			this->Controls->Add(this->March_rich);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"March";
			this->Text = L"��������";
			this->Load += gcnew System::EventHandler(this, &March::March_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Back_March_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Close();
	}
	private: System::Void March_Load(System::Object^  sender, System::EventArgs^  e) {
		WorkWithExceptions excep3;
		try
		{
			DataLoader DataLoader;
			this->March_rich->Text = "";
			std::vector<Traveler> Travelers;
			DataLoader.getTravelersData(Travelers);
			for (int i = 0; i < 19; i++)
			{
				setlocale(LC_ALL, "ukr");
				std::string a = Travelers[i].getOwner();
				System::String^ a1 = gcnew String(a.data());
				this->March_rich->Text += Travelers[i].getTravelNumber().ToString();
				this->March_rich->Text += " ���������:\" " + a1 + "\"; ";
				this->March_rich->Text += Travelers[i].getLengthWay() + " ��; �������: ";
				this->March_rich->Text += Travelers[i].getCost() + " �������, �������� ���� ��������� ";
				this->March_rich->Text += Travelers[i].getIntervalStops() + " ������.\n\n";
			}
		}
		catch (std::length_error)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep3.LengthError();
		}
		catch (std::range_error)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep3.RangeError();
		}
		catch (std::out_of_range)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep3.OutOfRangeError();
		}
		catch (std::invalid_argument)
		{
			show_find = gcnew FINDER;
			show_find->Show(this);
			this->show_find->find_button->Visible = false;
			this->show_find->num_to_find->Text = excep3.InvalidArgumentError();
		}
	}
	};
}
