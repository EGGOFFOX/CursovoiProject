
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
#include "time.h";
#include <ctime>;

int CounterForTravels = 0;

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



	private: System::Windows::Forms::Button^  button1;



	

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// finder_button
			// 
			this->finder_button->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->finder_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->finder_button->Location = System::Drawing::Point(849, 12);
			this->finder_button->Name = L"finder_button";
			this->finder_button->Size = System::Drawing::Size(225, 46);
			this->finder_button->TabIndex = 0;
			this->finder_button->Text = L"ПОШУК";
			this->finder_button->UseVisualStyleBackColor = false;
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
			this->march_button->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->march_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->march_button->Location = System::Drawing::Point(849, 61);
			this->march_button->Name = L"march_button";
			this->march_button->Size = System::Drawing::Size(225, 47);
			this->march_button->TabIndex = 2;
			this->march_button->Text = L"МАРШРУТИ";
			this->march_button->UseVisualStyleBackColor = false;
			this->march_button->Click += gcnew System::EventHandler(this, &MyForm::march_button_Click);
			// 
			// INF_button
			// 
			this->INF_button->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->INF_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->INF_button->Location = System::Drawing::Point(849, 508);
			this->INF_button->Name = L"INF_button";
			this->INF_button->Size = System::Drawing::Size(225, 49);
			this->INF_button->TabIndex = 3;
			this->INF_button->Text = L"ІНФОРМАЦІЯ";
			this->INF_button->UseVisualStyleBackColor = false;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(849, 454);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 48);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ВІДОБРАЗИТИ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(1086, 593);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Help);
			this->Controls->Add(this->INF_button);
			this->Controls->Add(this->march_button);
			this->Controls->Add(this->finder_button);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Проспект Соборний";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:FINDER^ show_find;
			   
			 
	private: System::Void finder_button_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		show_find = gcnew FINDER;
		show_find->Show(this);
		this->show_find->find_button->Click += gcnew EventHandler(this, &MyForm::show_find_Closed);

	}
			   private:System::Void MyForm::show_find_Closed(Object^ sender, EventArgs^ e)
			   {
				   System::String^ a = show_find->num_to_find->Text;
				  
				   Enable_choosed(a);
				   
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
			
		   StopInfo PointReturner(int interval,int start, int end,
			                      std::vector<int> Xpoints, std::vector<int> Ypoints)
		   {
			   PointFinder pointer(interval, start, end, Xpoints, Ypoints);
			   StopInfo stop = pointer.getPoint();
			   return stop;
		   }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{	
	std::vector<Traveler> Travelers;
	getTravelersDate(Travelers);
	int interval;
	int	endTime;
	int startTime;
	for (int i = 0; i < 19; i++)
	{
		interval = Travelers[i].getIntervalStops();
	    endTime = Travelers[i].getEndTime();
		startTime = Travelers[i].getStartTime();
		std::vector<int> Xpoints = Travelers[i].getPointArrayX();
		std::vector<int> Ypoints = Travelers[i].getPointArrayY();
		StopInfo stop = PointReturner(interval, startTime, endTime, Xpoints, Ypoints);
		this->buttons[i]->Location = Drawing::Point(stop.X, stop.Y);
	}
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	
}
		

		 array<Button^>^ buttons; //Buttons array

		public:  System::String^ vwd;
public: void Enable_choosed(System::String^ a)
{
	
	std::vector<Traveler> Travelers;
	getTravelersDate(Travelers);
	int interval;
	int	endTime;
	int startTime;
	for (int j = 0; j < 19; j++)
	{
		System::String^ num = Travelers[j].getTravelNumber().ToString();
		if (a == num)
		{
			interval = Travelers[j].getIntervalStops();
			endTime = Travelers[j].getEndTime();
			startTime = Travelers[j].getStartTime();
			std::vector<int> Xpoints = Travelers[j].getPointArrayX();
			std::vector<int> Ypoints = Travelers[j].getPointArrayY();
			StopInfo stop = PointReturner(interval, startTime, endTime, Xpoints, Ypoints);
			this->buttons[j]->Location = Drawing::Point(stop.X, stop.Y);
			for(int i = 0; i < 19; i++)  this->buttons[i]->Location = Drawing::Point(stop.X, stop.Y);

		}

	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	
	std::vector<Traveler> Travelers;
	getTravelersDate(Travelers);

	buttons = gcnew array<Button^>(19); //Button array


	for (int iterator = 0; iterator < 19; iterator++)  //CREATE buttons for array
	{
	
		this->pictureBox1->SendToBack();
		Button^ btn = gcnew Button();
		btn->Anchor = AnchorStyles::Top, Left;
		btn = (gcnew System::Windows::Forms::Button());

		btn->BringToFront();
		btn->Location = Drawing::Point(0, 0);
		btn->Text = "кнопка";
		btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		btn->BackColor = System::Drawing::Color::Red;

		btn->Size = System::Drawing::Size(12, 12);

		Controls->Add(btn);
		buttons[iterator] = btn;
	}
	
	std::vector<int> A;
	std::vector<int> B;
	for (int i = 0; i < Travelers.size(); i++)
	{		
		A= Travelers[i].getPointArrayX();
		B = Travelers[i].getPointArrayY();
		this->buttons[i]->Location = Drawing::Point(A[0],B[0]);

	}		
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
 {
	delete[] buttons;
}
};
}

