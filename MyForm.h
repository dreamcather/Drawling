#pragma once
#include <iostream>

namespace Рисованиеточки {

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
			Bitmap bitmap(pictureBox1->Width, pictureBox1->Height);
			pointColor=Color::Red;
			pointRad=10;
			dataGridView1->ColumnCount=4;
			dataGridView1->TopLeftHeaderCell->Value="Номер";
			dataGridView1->Columns[0]->HeaderCell->Value="Имя";
			dataGridView1->Columns[1]->HeaderCell->Value="Х";
			dataGridView1->Columns[2]->HeaderCell->Value="Y";
			dataGridView1->Columns[3]->HeaderCell->Value="Цвет";
			name=gcnew String("A");
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  redButton;
	private: System::Windows::Forms::Button^  blueButton;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		Color pointColor;
		int pointRad;
		String^ name;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->redButton = (gcnew System::Windows::Forms::Button());
			this->blueButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(419, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(310, 365);
			this->dataGridView1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(372, 365);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::pictureBox1_DoubleClick);
			// 
			// redButton
			// 
			this->redButton->BackColor = System::Drawing::Color::Red;
			this->redButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->redButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->redButton->ForeColor = System::Drawing::Color::Black;
			this->redButton->Location = System::Drawing::Point(12, 383);
			this->redButton->Name = L"redButton";
			this->redButton->Size = System::Drawing::Size(75, 23);
			this->redButton->TabIndex = 2;
			this->redButton->Text = L"Red";
			this->redButton->UseVisualStyleBackColor = false;
			this->redButton->Click += gcnew System::EventHandler(this, &MyForm::redButton_Click);
			// 
			// blueButton
			// 
			this->blueButton->BackColor = System::Drawing::Color::Blue;
			this->blueButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->blueButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->blueButton->ForeColor = System::Drawing::Color::Black;
			this->blueButton->Location = System::Drawing::Point(93, 383);
			this->blueButton->Name = L"blueButton";
			this->blueButton->Size = System::Drawing::Size(75, 23);
			this->blueButton->TabIndex = 3;
			this->blueButton->Text = L"Blue";
			this->blueButton->UseVisualStyleBackColor = false;
			this->blueButton->Click += gcnew System::EventHandler(this, &MyForm::blueButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(174, 383);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Green";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 463);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->blueButton);
			this->Controls->Add(this->redButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void redButton_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 pointColor=Color::Red;
			 }
private: System::Void blueButton_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 pointColor=Color::Blue;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pointColor=Color::Green;
		 }
private: void DrawPoint(int x,int y)
		 {
			 Graphics ^ g;
			 g=this->pictureBox1->CreateGraphics();
			 Pen^ mypen=gcnew Pen(pointColor,7);
			 g->DrawEllipse(mypen,x-pointRad%2,y-pointRad%2,pointRad,pointRad);
		 }
private: System::Void pictureBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Point p;
			 bool flag =true;
			 p=this->MousePosition;
			 Point resf=this->Location;
			 Point resp=pictureBox1->Location;
			 p.X=p.X-resf.X-resp.X-13;
			 p.Y=p.Y-resf.Y-resp.Y-36;
			 for(int i=0;i<dataGridView1->RowCount;i++)
			 {
				 int x=Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);
				 int y=Convert::ToInt32(dataGridView1->Rows[i]->Cells[2]->Value);
				 Point cur(x,y);
				 double rad=Math::Sqrt(Math::Pow((p.X-cur.X),2)+Math::Pow((p.Y-cur.Y),2));
				 if(rad<2*pointRad)
					 flag=false;

			 }
			 if(flag)
			 {
			 DrawPoint(p.X,p.Y);
			 AddPoint(p);
			 }
		 }
		 void AddPoint(Point p)
		 {
			 dataGridView1->RowCount++;
			 int count=dataGridView1->RowCount-1;
			 dataGridView1->Rows[count]->Cells[0]->Value=name;
			 dataGridView1->Rows[count]->Cells[1]->Value=p.X;
			 dataGridView1->Rows[count]->Cells[2]->Value=p.Y;
			 dataGridView1->Rows[count]->Cells[3]->Style->BackColor=pointColor;
			 ChangeName();
		 }
		 void ChangeName()
		 {
			 wchar_t littera=name[name->Length-1];
			 int code = (int)(littera);
			 code++;
			 if(code<=90)
			 {
				 littera=code;
				 String^ cname= name->Remove(name->Length-1);
				 cname=cname+littera;
				 name=cname;
			 }
			 else
			 {
				 name=name+"A";
			 }
		 }
};
}
