#pragma once
#include <thread>
#include <chrono>
#include <iostream>
using namespace std;
namespace TMP4 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(488, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 800);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(65, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 30);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(40, 79);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(235, 22);
			this->textBox3->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(295, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Результат";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(298, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Входные данные";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(189, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Кол-во элементов";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1341, 656);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void draw(int size,int a[])
	{
		Bitmap^ bmpot = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		pictureBox1->Image = bmpot;
		Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		Graphics^ graph = Graphics::FromImage(bmp);
		Pen^ pen = gcnew Pen(Color::Black);
		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 10);
		SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
		StringFormat^ drawFormat = gcnew StringFormat;
		drawFormat->FormatFlags = StringFormatFlags::DirectionRightToLeft;
		
		int x, y;
		x = 0;
		y = pictureBox1->Height / 2;
		
		for (int i = 0;i < size;i++)
		{
			this_thread::sleep_for(std::chrono::seconds(1));
			x += pictureBox1->Width / size;
			String^ drawString1 = Convert::ToString(a[i]);
			graph->DrawEllipse(pen, x/2, y/2, pictureBox1->Width / size/2, pictureBox1->Height / size/2);
			graph->DrawString(drawString1, drawFont, drawBrush, x/2+(pictureBox1->Width / size)/4, y/2 + (pictureBox1->Width / size) / 4, drawFormat);
			pictureBox1->Image = bmp;
			Application::DoEvents();
			/*for (int j = 0;j < size;j++)
			{
				if (mass2[i][j] == 1)
				{
					String^ drawString1 = Convert::ToString(i + 1);
					String^ drawString2 = Convert::ToString(j + 1);


					graph->DrawEllipse(pen, vertex[i].x, vertex[i].y, 5, 5);
					graph->DrawString(drawString1, drawFont, drawBrush, vertex[i].x, vertex[i].y, drawFormat);
					graph->DrawLine(pen, vertex[i].x, vertex[i].y, vertex[j].x, vertex[j].y);
					graph->DrawEllipse(pen, vertex[j].x, vertex[j].y, 5, 5);
					graph->DrawString(drawString2, drawFont, drawBrush, vertex[j].x, vertex[j].y, drawFormat);

					pictureBox1->Image = bmp;

				}
			}*/
		}
	}
		void Shell(int a[], int n)
		{
			Bitmap^ bmpot = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			pictureBox1->Image = bmpot;
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			Graphics^ graph = Graphics::FromImage(bmp);
			Pen^ pen = gcnew Pen(Color::Black);
			Pen^ penr = gcnew Pen(Color::Red);
			Pen^ peng = gcnew Pen(Color::Green);
			Pen^ penw = gcnew Pen(Color::White);
			System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 10);
			SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
			Brush^ zalivkaw = gcnew SolidBrush(Color::White);
			Brush^ zalivkar = gcnew SolidBrush(Color::Red);
			StringFormat^ drawFormat = gcnew StringFormat;
			drawFormat->FormatFlags = StringFormatFlags::DirectionRightToLeft;

			int y;
			int *x = new int[n];
			x[0] = 0;
			for (int i = 1;i < n;i++)
			{
				x[i]=x[i-1]+ pictureBox1->Width / n/2;
			}
			
			y = pictureBox1->Height / 4;

			for (int i = 0;i < n;i++)
			{
	
				String^ drawString1 = Convert::ToString(a[i]);
				graph->DrawEllipse(pen, x[i] , y , pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
				graph->DrawString(drawString1, drawFont, drawBrush,x[i] + (pictureBox1->Width / n) / 4+5,y+5 , drawFormat);
				pictureBox1->Image = bmp;
				Application::DoEvents();
			}

			int d = n, count = 0;
			d = d / 2;
			while (d > 0)
			{
				for (int i = 0; i < n - d; i++)
				{
					int j = i;
					while (j >= 0 && a[j] > a[j + d])
					{
							
							int count2 = j + d;
							int count3 = a[j + d];
							count = a[j];
							a[j] = a[j + d];
							a[j + d] = count;
							j--;
							

							String^ drawString1 = Convert::ToString(count);
							String^ drawString2 = Convert::ToString(count3);
							this_thread::sleep_for(std::chrono::seconds(2));
						 
							for (int i = 0; i < n; i++)
							{
									graph->DrawEllipse(pen, x[i], y+y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
									Application::DoEvents();
							}


							/*graph->DrawEllipse(pen, x[j + 1], y + y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
							graph->DrawEllipse(pen, x[j + d + 1], y + y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);*/
							graph->DrawEllipse(penr, x[j+1], y + y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
							graph->DrawEllipse(penr, x[j+d+1], y + y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
							graph->FillRectangle(zalivkaw, x[j + 1] + (pictureBox1->Width / n) / 4-10, y + y+5, 15, 12);
							graph->FillRectangle(zalivkaw,x[j + d + 1] + (pictureBox1->Width / n) / 4-10, y + y+5,15,12);
							graph->DrawString(drawString1, drawFont, drawBrush, x[j+d+1] + (pictureBox1->Width / n) / 4+5, y + y+5, drawFormat);
							graph->DrawString(drawString2, drawFont, drawBrush, x[j+1] + (pictureBox1->Width / n) / 4+5, y + y+5, drawFormat);
							pictureBox1->Image = bmp;
							Application::DoEvents();
						
						/*else
						{
							String^ drawString1 = Convert::ToString(count2);
							String^ drawString2 = Convert::ToString(count);
							graph->DrawEllipse(peng, x[count2], y + y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
							graph->DrawEllipse(peng, x[count], y + y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
							graph->DrawString(drawString1, drawFont, drawBrush, x[count2] + (pictureBox1->Width / n) / 4, y + y, drawFormat);
							graph->DrawString(drawString2, drawFont, drawBrush, x[count] + (pictureBox1->Width / n) / 4, y + y, drawFormat);
							pictureBox1->Image = bmp;
							Application::DoEvents();
						}*/
					}
				}
				d = d / 2;
			}
			for (int i = 0; i < n; i++)
			{
				textBox1->Text += Convert::ToString(a[i]) + " ";
				String^ drawString1 = Convert::ToString(a[i]);
				graph->DrawEllipse(peng, x[i], y+y, pictureBox1->Width / n / 2, pictureBox1->Height / n / 2);
				pictureBox1->Image = bmp;
				Application::DoEvents();
			}

			delete[]x;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = " ";
		textBox3->Text = " ";
		
			int n;
			n = Convert::ToInt32(textBox2->Text);
			int* A = new int[n]; 
			for (int i = 0; i < n; i++) 
			{
				A[i] = rand() % 9 + 1;
			}

			for (int i = 0; i < n; i++)
				textBox3->Text += Convert::ToString(A[i]) + " ";
	        //draw(n,A);
			Shell(A, n);
		
			delete[] A; 

	
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
