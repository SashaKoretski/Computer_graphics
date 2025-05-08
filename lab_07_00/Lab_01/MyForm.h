#pragma once

#include "MyClasses.h"
#include <iostream>
#include <limits>
#include <cmath>
#include <utility>
#include <ctime>
#include <ratio>
#include <chrono>
#include <Windows.h>
#include <stack>

using namespace System::Diagnostics;

namespace Lab01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
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

			rect = gcnew List<myPoint^>();
			lines = gcnew List<myPoint^>();
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

	protected:
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Label^ label_title;

	private: System::Windows::Forms::Button^ btn_collapce;
	private: System::Windows::Forms::MenuStrip^ menu_strip;



	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструкцияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обАвтореToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ условиеЗадачиToolStripMenuItem;
	private: System::Windows::Forms::Label^ label_rect;


	private: System::Windows::Forms::Button^ button_add_rect;

	private: System::Windows::Forms::TextBox^ textBox_x_rect_2;

	private: System::Windows::Forms::Label^ label_x_rect_1;
	private: System::Windows::Forms::Label^ label_x_rect_2;
	private: System::Windows::Forms::TextBox^ textBox_x_rect_1;








	private: System::Windows::Forms::Button^ button_color;













	private: System::Windows::Forms::PictureBox^ pictureBox_menu;
	private: System::Windows::Forms::PictureBox^ pictureBox_left;



	private: System::Windows::Forms::PictureBox^ pictureBox_right;
	private: System::Windows::Forms::PictureBox^ pictureBox_down;


	private: System::Windows::Forms::PictureBox^ pictureBox_up;

	private: System::Windows::Forms::ToolStripMenuItem^ добавитьТочкуToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ surface;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Label^ label_color_choose;






















	private: List<myPoint^>^ rect;
	private: List<myPoint^>^ lines;

	private: const int surH = 524;
	private: const int surL = 863;
	private: const int pointR = 5;
	private: const int pointD = 10;
	private: bool is_line_closed = false;
	private: Color rectColor = Color::Green;
	private: Color lineColor = Color::Blue;
	private: Color otsColor = Color::Red;


private: System::Windows::Forms::Label^ label_max_y;
private: System::Windows::Forms::Label^ label_min_x;
private: System::Windows::Forms::Label^ label_min_y;
private: System::Windows::Forms::Label^ label_max_x;
private: System::Windows::Forms::Label^ label_mid_x;
private: System::Windows::Forms::Label^ label_mid_y;
private: System::Windows::Forms::Label^ label_x_now;
private: System::Windows::Forms::Label^ label_y_now;
private: System::Windows::Forms::PictureBox^ pictureBox_now;
private: System::Windows::Forms::TextBox^ textBox_x_now;
private: System::Windows::Forms::TextBox^ textBox_y_now;
private: System::Windows::Forms::Label^ label_y_main;
private: System::Windows::Forms::Label^ label_x_main;
private: System::Windows::Forms::ToolStripMenuItem^ удалитьВсеТочкиToolStripMenuItem;


private: System::Windows::Forms::Label^ label_sec;
private: System::Windows::Forms::Label^ label_T;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::TextBox^ textBox_time;
private: System::Windows::Forms::Button^ button_col_rect;






private: System::Windows::Forms::ToolStripMenuItem^ закраситьToolStripMenuItem;
private: System::Windows::Forms::TextBox^ textBox_y_rect_1;

private: System::Windows::Forms::Label^ label_y_rect_2;

private: System::Windows::Forms::Label^ label_y_rect_1;
private: System::Windows::Forms::TextBox^ textBox_y_rect_2;
private: System::Windows::Forms::TextBox^ textBox_y_otr_1;
private: System::Windows::Forms::Label^ label_y_otr_2;





private: System::Windows::Forms::Label^ label_y_otr_1;
private: System::Windows::Forms::TextBox^ textBox_y_otr_2;


private: System::Windows::Forms::TextBox^ textBox_x_otr_1;
private: System::Windows::Forms::Label^ label_x_otr_2;


private: System::Windows::Forms::Label^ label_x_otr_1;
private: System::Windows::Forms::TextBox^ textBox_x_otr_2;
private: System::Windows::Forms::Button^ button_add_otr;



private: System::Windows::Forms::Label^ label_otr_1;

private: System::Windows::Forms::Button^ button_col_res;
private: System::Windows::Forms::Button^ button_col_line;
private: System::Windows::Forms::Label^ label_ots;
private: System::Windows::Forms::Label^ label_otr_2;
private: System::Windows::Forms::ToolStripMenuItem^ добавитьОтрезокToolStripMenuItem;





























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->btn_collapce = (gcnew System::Windows::Forms::Button());
			this->menu_strip = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьТочкуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьОтрезокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закраситьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьВсеТочкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->условиеЗадачиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструкцияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обАвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_rect = (gcnew System::Windows::Forms::Label());
			this->button_add_rect = (gcnew System::Windows::Forms::Button());
			this->textBox_x_rect_2 = (gcnew System::Windows::Forms::TextBox());
			this->label_x_rect_1 = (gcnew System::Windows::Forms::Label());
			this->label_x_rect_2 = (gcnew System::Windows::Forms::Label());
			this->textBox_x_rect_1 = (gcnew System::Windows::Forms::TextBox());
			this->button_color = (gcnew System::Windows::Forms::Button());
			this->pictureBox_menu = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_left = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_right = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_down = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_up = (gcnew System::Windows::Forms::PictureBox());
			this->surface = (gcnew System::Windows::Forms::PictureBox());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->label_color_choose = (gcnew System::Windows::Forms::Label());
			this->label_max_y = (gcnew System::Windows::Forms::Label());
			this->label_min_x = (gcnew System::Windows::Forms::Label());
			this->label_min_y = (gcnew System::Windows::Forms::Label());
			this->label_max_x = (gcnew System::Windows::Forms::Label());
			this->label_mid_x = (gcnew System::Windows::Forms::Label());
			this->label_mid_y = (gcnew System::Windows::Forms::Label());
			this->label_x_now = (gcnew System::Windows::Forms::Label());
			this->label_y_now = (gcnew System::Windows::Forms::Label());
			this->pictureBox_now = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_x_now = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y_now = (gcnew System::Windows::Forms::TextBox());
			this->label_y_main = (gcnew System::Windows::Forms::Label());
			this->label_x_main = (gcnew System::Windows::Forms::Label());
			this->label_sec = (gcnew System::Windows::Forms::Label());
			this->label_T = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_time = (gcnew System::Windows::Forms::TextBox());
			this->button_col_rect = (gcnew System::Windows::Forms::Button());
			this->textBox_y_rect_1 = (gcnew System::Windows::Forms::TextBox());
			this->label_y_rect_2 = (gcnew System::Windows::Forms::Label());
			this->label_y_rect_1 = (gcnew System::Windows::Forms::Label());
			this->textBox_y_rect_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y_otr_1 = (gcnew System::Windows::Forms::TextBox());
			this->label_y_otr_2 = (gcnew System::Windows::Forms::Label());
			this->label_y_otr_1 = (gcnew System::Windows::Forms::Label());
			this->textBox_y_otr_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x_otr_1 = (gcnew System::Windows::Forms::TextBox());
			this->label_x_otr_2 = (gcnew System::Windows::Forms::Label());
			this->label_x_otr_1 = (gcnew System::Windows::Forms::Label());
			this->textBox_x_otr_2 = (gcnew System::Windows::Forms::TextBox());
			this->button_add_otr = (gcnew System::Windows::Forms::Button());
			this->label_otr_1 = (gcnew System::Windows::Forms::Label());
			this->button_col_res = (gcnew System::Windows::Forms::Button());
			this->button_col_line = (gcnew System::Windows::Forms::Button());
			this->label_ots = (gcnew System::Windows::Forms::Label());
			this->label_otr_2 = (gcnew System::Windows::Forms::Label());
			this->menu_strip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_left))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_right))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_down))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_up))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->surface))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_now))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->Location = System::Drawing::Point(1162, 12);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(26, 26);
			this->btn_exit->TabIndex = 0;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_title->Location = System::Drawing::Point(12, 9);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(428, 24);
			this->label_title->TabIndex = 1;
			this->label_title->Text = L"Лабораторная по компьютерной графике №7";
			// 
			// btn_collapce
			// 
			this->btn_collapce->BackColor = System::Drawing::Color::Cyan;
			this->btn_collapce->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_collapce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_collapce->Location = System::Drawing::Point(1130, 12);
			this->btn_collapce->Name = L"btn_collapce";
			this->btn_collapce->Size = System::Drawing::Size(26, 26);
			this->btn_collapce->TabIndex = 2;
			this->btn_collapce->Text = L"-";
			this->btn_collapce->UseVisualStyleBackColor = false;
			this->btn_collapce->Click += gcnew System::EventHandler(this, &MyForm::btn_collapce_Click);
			// 
			// menu_strip
			// 
			this->menu_strip->AutoSize = false;
			this->menu_strip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->menu_strip->Dock = System::Windows::Forms::DockStyle::None;
			this->menu_strip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menu_strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menu_strip->Location = System::Drawing::Point(9, 33);
			this->menu_strip->Name = L"menu_strip";
			this->menu_strip->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->menu_strip->Size = System::Drawing::Size(249, 26);
			this->menu_strip->TabIndex = 3;
			this->menu_strip->Text = L"menuStrip1";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->добавитьТочкуToolStripMenuItem,
					this->добавитьОтрезокToolStripMenuItem, this->закраситьToolStripMenuItem, this->удалитьВсеТочкиToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem2->Text = L"Действия";
			// 
			// добавитьТочкуToolStripMenuItem
			// 
			this->добавитьТочкуToolStripMenuItem->Name = L"добавитьТочкуToolStripMenuItem";
			this->добавитьТочкуToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->добавитьТочкуToolStripMenuItem->Text = L"Добавить отсекатель";
			this->добавитьТочкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_add_rect_Click);
			// 
			// добавитьОтрезокToolStripMenuItem
			// 
			this->добавитьОтрезокToolStripMenuItem->Name = L"добавитьОтрезокToolStripMenuItem";
			this->добавитьОтрезокToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->добавитьОтрезокToolStripMenuItem->Text = L"Добавить отрезок";
			this->добавитьОтрезокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_add_line_Click);
			// 
			// закраситьToolStripMenuItem
			// 
			this->закраситьToolStripMenuItem->Name = L"закраситьToolStripMenuItem";
			this->закраситьToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->закраситьToolStripMenuItem->Text = L"Отсечь";
			this->закраситьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_color_Click);
			// 
			// удалитьВсеТочкиToolStripMenuItem
			// 
			this->удалитьВсеТочкиToolStripMenuItem->Name = L"удалитьВсеТочкиToolStripMenuItem";
			this->удалитьВсеТочкиToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->удалитьВсеТочкиToolStripMenuItem->Text = L"Удалить все точки";
			this->удалитьВсеТочкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьВсеТочкиToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->условиеЗадачиToolStripMenuItem,
					this->инструкцияToolStripMenuItem, this->обАвтореToolStripMenuItem
			});
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// условиеЗадачиToolStripMenuItem
			// 
			this->условиеЗадачиToolStripMenuItem->Name = L"условиеЗадачиToolStripMenuItem";
			this->условиеЗадачиToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->условиеЗадачиToolStripMenuItem->Text = L"Условие задачи";
			this->условиеЗадачиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::условиеЗадачиToolStripMenuItem_Click);
			// 
			// инструкцияToolStripMenuItem
			// 
			this->инструкцияToolStripMenuItem->Name = L"инструкцияToolStripMenuItem";
			this->инструкцияToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->инструкцияToolStripMenuItem->Text = L"Инструкция";
			this->инструкцияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::инструкцияToolStripMenuItem_Click);
			// 
			// обАвтореToolStripMenuItem
			// 
			this->обАвтореToolStripMenuItem->Name = L"обАвтореToolStripMenuItem";
			this->обАвтореToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->обАвтореToolStripMenuItem->Text = L"Об авторе";
			this->обАвтореToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обАвтореToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выйтиToolStripMenuItem });
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(60, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// label_rect
			// 
			this->label_rect->AutoSize = true;
			this->label_rect->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_rect->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_rect->Location = System::Drawing::Point(988, 93);
			this->label_rect->Name = L"label_rect";
			this->label_rect->Size = System::Drawing::Size(197, 24);
			this->label_rect->TabIndex = 5;
			this->label_rect->Text = L"Координаты вершин ";
			// 
			// button_add_rect
			// 
			this->button_add_rect->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_rect->Location = System::Drawing::Point(992, 195);
			this->button_add_rect->Name = L"button_add_rect";
			this->button_add_rect->Size = System::Drawing::Size(143, 35);
			this->button_add_rect->TabIndex = 7;
			this->button_add_rect->Text = L"Добавить";
			this->button_add_rect->UseVisualStyleBackColor = true;
			this->button_add_rect->Click += gcnew System::EventHandler(this, &MyForm::button_add_rect_Click);
			// 
			// textBox_x_rect_2
			// 
			this->textBox_x_rect_2->Location = System::Drawing::Point(1009, 169);
			this->textBox_x_rect_2->Name = L"textBox_x_rect_2";
			this->textBox_x_rect_2->Size = System::Drawing::Size(52, 20);
			this->textBox_x_rect_2->TabIndex = 9;
			// 
			// label_x_rect_1
			// 
			this->label_x_rect_1->AutoSize = true;
			this->label_x_rect_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_rect_1->Location = System::Drawing::Point(989, 146);
			this->label_x_rect_1->Name = L"label_x_rect_1";
			this->label_x_rect_1->Size = System::Drawing::Size(14, 13);
			this->label_x_rect_1->TabIndex = 10;
			this->label_x_rect_1->Text = L"X";
			// 
			// label_x_rect_2
			// 
			this->label_x_rect_2->AutoSize = true;
			this->label_x_rect_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_rect_2->Location = System::Drawing::Point(989, 172);
			this->label_x_rect_2->Name = L"label_x_rect_2";
			this->label_x_rect_2->Size = System::Drawing::Size(14, 13);
			this->label_x_rect_2->TabIndex = 11;
			this->label_x_rect_2->Text = L"X";
			// 
			// textBox_x_rect_1
			// 
			this->textBox_x_rect_1->Location = System::Drawing::Point(1009, 143);
			this->textBox_x_rect_1->Name = L"textBox_x_rect_1";
			this->textBox_x_rect_1->Size = System::Drawing::Size(52, 20);
			this->textBox_x_rect_1->TabIndex = 12;
			// 
			// button_color
			// 
			this->button_color->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_color->Location = System::Drawing::Point(992, 582);
			this->button_color->Name = L"button_color";
			this->button_color->Size = System::Drawing::Size(143, 35);
			this->button_color->TabIndex = 19;
			this->button_color->Text = L"Отсечь";
			this->button_color->UseVisualStyleBackColor = true;
			this->button_color->Click += gcnew System::EventHandler(this, &MyForm::button_color_Click);
			// 
			// pictureBox_menu
			// 
			this->pictureBox_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->pictureBox_menu->Location = System::Drawing::Point(923, 83);
			this->pictureBox_menu->Name = L"pictureBox_menu";
			this->pictureBox_menu->Size = System::Drawing::Size(267, 544);
			this->pictureBox_menu->TabIndex = 20;
			this->pictureBox_menu->TabStop = false;
			// 
			// pictureBox_left
			// 
			this->pictureBox_left->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox_left->Location = System::Drawing::Point(50, 83);
			this->pictureBox_left->Name = L"pictureBox_left";
			this->pictureBox_left->Size = System::Drawing::Size(10, 544);
			this->pictureBox_left->TabIndex = 22;
			this->pictureBox_left->TabStop = false;
			// 
			// pictureBox_right
			// 
			this->pictureBox_right->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox_right->Location = System::Drawing::Point(923, 83);
			this->pictureBox_right->Name = L"pictureBox_right";
			this->pictureBox_right->Size = System::Drawing::Size(10, 544);
			this->pictureBox_right->TabIndex = 23;
			this->pictureBox_right->TabStop = false;
			// 
			// pictureBox_down
			// 
			this->pictureBox_down->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox_down->Location = System::Drawing::Point(55, 617);
			this->pictureBox_down->Name = L"pictureBox_down";
			this->pictureBox_down->Size = System::Drawing::Size(872, 10);
			this->pictureBox_down->TabIndex = 24;
			this->pictureBox_down->TabStop = false;
			// 
			// pictureBox_up
			// 
			this->pictureBox_up->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox_up->Location = System::Drawing::Point(55, 83);
			this->pictureBox_up->Name = L"pictureBox_up";
			this->pictureBox_up->Size = System::Drawing::Size(872, 10);
			this->pictureBox_up->TabIndex = 25;
			this->pictureBox_up->TabStop = false;
			// 
			// surface
			// 
			this->surface->BackColor = System::Drawing::Color::White;
			this->surface->Location = System::Drawing::Point(60, 93);
			this->surface->Name = L"surface";
			this->surface->Size = System::Drawing::Size(863, 524);
			this->surface->TabIndex = 26;
			this->surface->TabStop = false;
			this->surface->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::surface_MouseDown);
			this->surface->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::surface_MouseMove);
			// 
			// button_clear
			// 
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clear->Location = System::Drawing::Point(992, 541);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(143, 35);
			this->button_clear->TabIndex = 28;
			this->button_clear->Text = L"Очистить";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::удалитьВсеТочкиToolStripMenuItem_Click);
			// 
			// label_color_choose
			// 
			this->label_color_choose->AutoSize = true;
			this->label_color_choose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_color_choose->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_color_choose->Location = System::Drawing::Point(988, 374);
			this->label_color_choose->Name = L"label_color_choose";
			this->label_color_choose->Size = System::Drawing::Size(129, 24);
			this->label_color_choose->TabIndex = 27;
			this->label_color_choose->Text = L"Выбрать цвет";
			// 
			// label_max_y
			// 
			this->label_max_y->AutoSize = true;
			this->label_max_y->Location = System::Drawing::Point(6, 83);
			this->label_max_y->Name = L"label_max_y";
			this->label_max_y->Size = System::Drawing::Size(25, 13);
			this->label_max_y->TabIndex = 37;
			this->label_max_y->Text = L"100";
			// 
			// label_min_x
			// 
			this->label_min_x->AutoSize = true;
			this->label_min_x->Location = System::Drawing::Point(47, 642);
			this->label_min_x->Name = L"label_min_x";
			this->label_min_x->Size = System::Drawing::Size(61, 13);
			this->label_min_x->TabIndex = 38;
			this->label_min_x->Text = L"-164,69466";
			// 
			// label_min_y
			// 
			this->label_min_y->AutoSize = true;
			this->label_min_y->Location = System::Drawing::Point(6, 614);
			this->label_min_y->Name = L"label_min_y";
			this->label_min_y->Size = System::Drawing::Size(28, 13);
			this->label_min_y->TabIndex = 39;
			this->label_min_y->Text = L"-100";
			// 
			// label_max_x
			// 
			this->label_max_x->Location = System::Drawing::Point(898, 642);
			this->label_max_x->Name = L"label_max_x";
			this->label_max_x->Size = System::Drawing::Size(61, 13);
			this->label_max_x->TabIndex = 0;
			this->label_max_x->Text = L"164,69466";
			// 
			// label_mid_x
			// 
			this->label_mid_x->AutoSize = true;
			this->label_mid_x->Location = System::Drawing::Point(484, 642);
			this->label_mid_x->Name = L"label_mid_x";
			this->label_mid_x->Size = System::Drawing::Size(13, 13);
			this->label_mid_x->TabIndex = 40;
			this->label_mid_x->Text = L"0";
			// 
			// label_mid_y
			// 
			this->label_mid_y->AutoSize = true;
			this->label_mid_y->Location = System::Drawing::Point(6, 358);
			this->label_mid_y->Name = L"label_mid_y";
			this->label_mid_y->Size = System::Drawing::Size(13, 13);
			this->label_mid_y->TabIndex = 41;
			this->label_mid_y->Text = L"0";
			// 
			// label_x_now
			// 
			this->label_x_now->AutoSize = true;
			this->label_x_now->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_now->Location = System::Drawing::Point(584, 46);
			this->label_x_now->Name = L"label_x_now";
			this->label_x_now->Size = System::Drawing::Size(14, 13);
			this->label_x_now->TabIndex = 42;
			this->label_x_now->Text = L"X";
			// 
			// label_y_now
			// 
			this->label_y_now->AutoSize = true;
			this->label_y_now->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_now->Location = System::Drawing::Point(649, 46);
			this->label_y_now->Name = L"label_y_now";
			this->label_y_now->Size = System::Drawing::Size(14, 13);
			this->label_y_now->TabIndex = 43;
			this->label_y_now->Text = L"Y";
			// 
			// pictureBox_now
			// 
			this->pictureBox_now->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->pictureBox_now->Location = System::Drawing::Point(573, 33);
			this->pictureBox_now->Name = L"pictureBox_now";
			this->pictureBox_now->Size = System::Drawing::Size(149, 38);
			this->pictureBox_now->TabIndex = 44;
			this->pictureBox_now->TabStop = false;
			// 
			// textBox_x_now
			// 
			this->textBox_x_now->Location = System::Drawing::Point(604, 43);
			this->textBox_x_now->Name = L"textBox_x_now";
			this->textBox_x_now->ReadOnly = true;
			this->textBox_x_now->Size = System::Drawing::Size(40, 20);
			this->textBox_x_now->TabIndex = 45;
			// 
			// textBox_y_now
			// 
			this->textBox_y_now->Location = System::Drawing::Point(669, 43);
			this->textBox_y_now->Name = L"textBox_y_now";
			this->textBox_y_now->ReadOnly = true;
			this->textBox_y_now->Size = System::Drawing::Size(40, 20);
			this->textBox_y_now->TabIndex = 46;
			// 
			// label_y_main
			// 
			this->label_y_main->AutoSize = true;
			this->label_y_main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_y_main->Location = System::Drawing::Point(483, 60);
			this->label_y_main->Name = L"label_y_main";
			this->label_y_main->Size = System::Drawing::Size(20, 20);
			this->label_y_main->TabIndex = 47;
			this->label_y_main->Text = L"Y";
			// 
			// label_x_main
			// 
			this->label_x_main->AutoSize = true;
			this->label_x_main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_x_main->Location = System::Drawing::Point(939, 351);
			this->label_x_main->Name = L"label_x_main";
			this->label_x_main->Size = System::Drawing::Size(20, 20);
			this->label_x_main->TabIndex = 48;
			this->label_x_main->Text = L"X";
			// 
			// label_sec
			// 
			this->label_sec->AutoSize = true;
			this->label_sec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_sec->Location = System::Drawing::Point(816, 46);
			this->label_sec->Name = L"label_sec";
			this->label_sec->Size = System::Drawing::Size(21, 13);
			this->label_sec->TabIndex = 50;
			this->label_sec->Text = L"мс";
			// 
			// label_T
			// 
			this->label_T->AutoSize = true;
			this->label_T->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_T->Location = System::Drawing::Point(751, 46);
			this->label_T->Name = L"label_T";
			this->label_T->Size = System::Drawing::Size(14, 13);
			this->label_T->TabIndex = 49;
			this->label_T->Text = L"T";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->pictureBox1->Location = System::Drawing::Point(740, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(97, 38);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// textBox_time
			// 
			this->textBox_time->Location = System::Drawing::Point(771, 43);
			this->textBox_time->Name = L"textBox_time";
			this->textBox_time->ReadOnly = true;
			this->textBox_time->Size = System::Drawing::Size(38, 20);
			this->textBox_time->TabIndex = 52;
			// 
			// button_col_rect
			// 
			this->button_col_rect->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_col_rect->Location = System::Drawing::Point(992, 401);
			this->button_col_rect->Name = L"button_col_rect";
			this->button_col_rect->Size = System::Drawing::Size(117, 29);
			this->button_col_rect->TabIndex = 58;
			this->button_col_rect->Text = L"Цвет отсекателя";
			this->button_col_rect->UseVisualStyleBackColor = true;
			this->button_col_rect->Click += gcnew System::EventHandler(this, &MyForm::button_color_rect_Click);
			// 
			// textBox_y_rect_1
			// 
			this->textBox_y_rect_1->Location = System::Drawing::Point(1092, 143);
			this->textBox_y_rect_1->Name = L"textBox_y_rect_1";
			this->textBox_y_rect_1->Size = System::Drawing::Size(52, 20);
			this->textBox_y_rect_1->TabIndex = 69;
			// 
			// label_y_rect_2
			// 
			this->label_y_rect_2->AutoSize = true;
			this->label_y_rect_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_rect_2->Location = System::Drawing::Point(1072, 172);
			this->label_y_rect_2->Name = L"label_y_rect_2";
			this->label_y_rect_2->Size = System::Drawing::Size(14, 13);
			this->label_y_rect_2->TabIndex = 68;
			this->label_y_rect_2->Text = L"Y";
			// 
			// label_y_rect_1
			// 
			this->label_y_rect_1->AutoSize = true;
			this->label_y_rect_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_rect_1->Location = System::Drawing::Point(1072, 146);
			this->label_y_rect_1->Name = L"label_y_rect_1";
			this->label_y_rect_1->Size = System::Drawing::Size(14, 13);
			this->label_y_rect_1->TabIndex = 67;
			this->label_y_rect_1->Text = L"Y";
			// 
			// textBox_y_rect_2
			// 
			this->textBox_y_rect_2->Location = System::Drawing::Point(1092, 169);
			this->textBox_y_rect_2->Name = L"textBox_y_rect_2";
			this->textBox_y_rect_2->Size = System::Drawing::Size(52, 20);
			this->textBox_y_rect_2->TabIndex = 66;
			// 
			// textBox_y_otr_1
			// 
			this->textBox_y_otr_1->Location = System::Drawing::Point(1092, 284);
			this->textBox_y_otr_1->Name = L"textBox_y_otr_1";
			this->textBox_y_otr_1->Size = System::Drawing::Size(52, 20);
			this->textBox_y_otr_1->TabIndex = 79;
			// 
			// label_y_otr_2
			// 
			this->label_y_otr_2->AutoSize = true;
			this->label_y_otr_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_otr_2->Location = System::Drawing::Point(1072, 313);
			this->label_y_otr_2->Name = L"label_y_otr_2";
			this->label_y_otr_2->Size = System::Drawing::Size(14, 13);
			this->label_y_otr_2->TabIndex = 78;
			this->label_y_otr_2->Text = L"Y";
			// 
			// label_y_otr_1
			// 
			this->label_y_otr_1->AutoSize = true;
			this->label_y_otr_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_otr_1->Location = System::Drawing::Point(1072, 287);
			this->label_y_otr_1->Name = L"label_y_otr_1";
			this->label_y_otr_1->Size = System::Drawing::Size(14, 13);
			this->label_y_otr_1->TabIndex = 77;
			this->label_y_otr_1->Text = L"Y";
			// 
			// textBox_y_otr_2
			// 
			this->textBox_y_otr_2->Location = System::Drawing::Point(1092, 310);
			this->textBox_y_otr_2->Name = L"textBox_y_otr_2";
			this->textBox_y_otr_2->Size = System::Drawing::Size(52, 20);
			this->textBox_y_otr_2->TabIndex = 76;
			// 
			// textBox_x_otr_1
			// 
			this->textBox_x_otr_1->Location = System::Drawing::Point(1009, 284);
			this->textBox_x_otr_1->Name = L"textBox_x_otr_1";
			this->textBox_x_otr_1->Size = System::Drawing::Size(52, 20);
			this->textBox_x_otr_1->TabIndex = 75;
			// 
			// label_x_otr_2
			// 
			this->label_x_otr_2->AutoSize = true;
			this->label_x_otr_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_otr_2->Location = System::Drawing::Point(989, 313);
			this->label_x_otr_2->Name = L"label_x_otr_2";
			this->label_x_otr_2->Size = System::Drawing::Size(14, 13);
			this->label_x_otr_2->TabIndex = 74;
			this->label_x_otr_2->Text = L"X";
			// 
			// label_x_otr_1
			// 
			this->label_x_otr_1->AutoSize = true;
			this->label_x_otr_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_otr_1->Location = System::Drawing::Point(989, 287);
			this->label_x_otr_1->Name = L"label_x_otr_1";
			this->label_x_otr_1->Size = System::Drawing::Size(14, 13);
			this->label_x_otr_1->TabIndex = 73;
			this->label_x_otr_1->Text = L"X";
			// 
			// textBox_x_otr_2
			// 
			this->textBox_x_otr_2->Location = System::Drawing::Point(1009, 310);
			this->textBox_x_otr_2->Name = L"textBox_x_otr_2";
			this->textBox_x_otr_2->Size = System::Drawing::Size(52, 20);
			this->textBox_x_otr_2->TabIndex = 72;
			// 
			// button_add_otr
			// 
			this->button_add_otr->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_otr->Location = System::Drawing::Point(992, 336);
			this->button_add_otr->Name = L"button_add_otr";
			this->button_add_otr->Size = System::Drawing::Size(143, 35);
			this->button_add_otr->TabIndex = 71;
			this->button_add_otr->Text = L"Добавить";
			this->button_add_otr->UseVisualStyleBackColor = true;
			this->button_add_otr->Click += gcnew System::EventHandler(this, &MyForm::button_add_line_Click);
			// 
			// label_otr_1
			// 
			this->label_otr_1->AutoSize = true;
			this->label_otr_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_otr_1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_otr_1->Location = System::Drawing::Point(988, 233);
			this->label_otr_1->Name = L"label_otr_1";
			this->label_otr_1->Size = System::Drawing::Size(181, 24);
			this->label_otr_1->TabIndex = 70;
			this->label_otr_1->Text = L"Координаты краев ";
			// 
			// button_col_res
			// 
			this->button_col_res->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_col_res->Location = System::Drawing::Point(992, 471);
			this->button_col_res->Name = L"button_col_res";
			this->button_col_res->Size = System::Drawing::Size(117, 29);
			this->button_col_res->TabIndex = 80;
			this->button_col_res->Text = L"Цвет результата";
			this->button_col_res->UseVisualStyleBackColor = true;
			this->button_col_res->Click += gcnew System::EventHandler(this, &MyForm::button_color_ots_Click);
			// 
			// button_col_line
			// 
			this->button_col_line->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_col_line->Location = System::Drawing::Point(992, 436);
			this->button_col_line->Name = L"button_col_line";
			this->button_col_line->Size = System::Drawing::Size(117, 29);
			this->button_col_line->TabIndex = 81;
			this->button_col_line->Text = L"Цвет отрезка";
			this->button_col_line->UseVisualStyleBackColor = true;
			this->button_col_line->Click += gcnew System::EventHandler(this, &MyForm::button_color_line_Click);
			// 
			// label_ots
			// 
			this->label_ots->AutoSize = true;
			this->label_ots->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_ots->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_ots->Location = System::Drawing::Point(988, 117);
			this->label_ots->Name = L"label_ots";
			this->label_ots->Size = System::Drawing::Size(108, 24);
			this->label_ots->TabIndex = 82;
			this->label_ots->Text = L"отсекателя";
			// 
			// label_otr_2
			// 
			this->label_otr_2->AutoSize = true;
			this->label_otr_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_otr_2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_otr_2->Location = System::Drawing::Point(988, 257);
			this->label_otr_2->Name = L"label_otr_2";
			this->label_otr_2->Size = System::Drawing::Size(79, 24);
			this->label_otr_2->TabIndex = 83;
			this->label_otr_2->Text = L"отрезка";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->ClientSize = System::Drawing::Size(1200, 675);
			this->Controls->Add(this->label_otr_2);
			this->Controls->Add(this->label_ots);
			this->Controls->Add(this->button_col_line);
			this->Controls->Add(this->button_col_res);
			this->Controls->Add(this->textBox_y_otr_1);
			this->Controls->Add(this->label_y_otr_2);
			this->Controls->Add(this->label_y_otr_1);
			this->Controls->Add(this->textBox_y_otr_2);
			this->Controls->Add(this->textBox_x_otr_1);
			this->Controls->Add(this->label_x_otr_2);
			this->Controls->Add(this->label_x_otr_1);
			this->Controls->Add(this->textBox_x_otr_2);
			this->Controls->Add(this->button_add_otr);
			this->Controls->Add(this->label_otr_1);
			this->Controls->Add(this->textBox_y_rect_1);
			this->Controls->Add(this->label_y_rect_2);
			this->Controls->Add(this->label_y_rect_1);
			this->Controls->Add(this->textBox_y_rect_2);
			this->Controls->Add(this->button_col_rect);
			this->Controls->Add(this->textBox_time);
			this->Controls->Add(this->label_sec);
			this->Controls->Add(this->label_T);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_x_main);
			this->Controls->Add(this->label_y_main);
			this->Controls->Add(this->textBox_y_now);
			this->Controls->Add(this->textBox_x_now);
			this->Controls->Add(this->label_y_now);
			this->Controls->Add(this->label_x_now);
			this->Controls->Add(this->label_mid_y);
			this->Controls->Add(this->label_mid_x);
			this->Controls->Add(this->label_max_x);
			this->Controls->Add(this->label_min_y);
			this->Controls->Add(this->label_min_x);
			this->Controls->Add(this->label_max_y);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->label_color_choose);
			this->Controls->Add(this->pictureBox_up);
			this->Controls->Add(this->pictureBox_down);
			this->Controls->Add(this->pictureBox_right);
			this->Controls->Add(this->pictureBox_left);
			this->Controls->Add(this->button_color);
			this->Controls->Add(this->textBox_x_rect_1);
			this->Controls->Add(this->label_x_rect_2);
			this->Controls->Add(this->label_x_rect_1);
			this->Controls->Add(this->textBox_x_rect_2);
			this->Controls->Add(this->button_add_rect);
			this->Controls->Add(this->label_rect);
			this->Controls->Add(this->btn_collapce);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->menu_strip);
			this->Controls->Add(this->pictureBox_menu);
			this->Controls->Add(this->surface);
			this->Controls->Add(this->pictureBox_now);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menu_strip;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная по компьютерной графике №1";
			this->menu_strip->ResumeLayout(false);
			this->menu_strip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_menu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_left))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_right))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_down))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_up))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->surface))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_now))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//закрытие приложения
		private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!(MessageBox::Show("Вы уверены, что хотите выйти?", "Подтверждение выхода", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No))
				this->Close();
		}

		//сворачивание приложения
		private: System::Void btn_collapce_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = FormWindowState::Minimized;
		}
	
		//инструкция
		private: System::Void инструкцияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Добро пожаловать!\n\n"
				"Добавление отсекателя:\n\n"
				"\tЧтобы добавить отсекатель, можно нажать на координатную плоскость левой кнопкой мыши два раза.\n"
				"\tТакже, есть возможность набрать с клавиатуры координаты точки нажать кнопку \"Добавить\".\n"
				"\tЧтобы добавить отрезок, можно ввести ее координаты на экране, либо продолжить нажимать на экран.\n"
				"\nОтсекание:\n\n"
				"\tЧтобы отсечь отрезок, необходимо нажать на кнопку \"Отсечь\" на экране либо.\n"
				"\nУдаление:\n\n"
				"\tЧтобы удалить все точки необходимо либо нажать на кнопку \"Очистить\" на экране либо в меню, либо после закраски добавте еще одну точку.\n"
				,
				"Инструкция");
		}

		//об авторе
		private: System::Void обАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Корецкий Александр \nГруппа ИУ7-45Б", "Об авторе");
		}

		//условие
		private: System::Void условиеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Отсекатель задается координатами его вершин. Необходимо реализовать алгоритм"
				"отсекания отрезков.",
				"Условие задачи №7");
		}

		//преобразование координат точки к координатам на экранее
		private: myPoint^ modifyPoint(myPoint^ point) {
			double min_x = 0;
			double min_y = 0;
			double max_x = 0;
			double max_y = 0;

			Double::TryParse(label_min_x->Text, min_x);
			Double::TryParse(label_min_y->Text, min_y);
			Double::TryParse(label_max_x->Text, max_x);
			Double::TryParse(label_max_y->Text, max_y);
			
			double kX = surL / (max_x - min_x);
			double kY = surH / (max_y - min_y);

			double new_x = (point->X - min_x) * kX;
			double new_y = (max_y - point->Y) * kY;
			myPoint^ res = gcnew myPoint(round(new_x), round(new_y));

			return res;
		}

		//преобразование координат на экране к координатам точки
		private: myPoint^ modifyPoint_from_real(myPoint^ point) {
			double min_x = 0;
			double min_y = 0;
			double max_x = 0;
			double max_y = 0;

			Double::TryParse(label_min_x->Text, min_x);
			Double::TryParse(label_min_y->Text, min_y);
			Double::TryParse(label_max_x->Text, max_x);
			Double::TryParse(label_max_y->Text, max_y);

			double kX = surL / (max_x - min_x);
			double kY = surH / (max_y - min_y);

			double new_x = point->X / kX + min_x;
			double new_y = max_y - point->Y / kY;
			myPoint^ res = gcnew myPoint(new_x, new_y);

			return res;
		}

		//вывод отрезка на экран
		private: System::Void drawLine() {
			Pen^ myPen = gcnew Pen(lineColor);
			Graphics^ g = surface->CreateGraphics();

			g->DrawLine(myPen, (int)lines[lines->Count - 1]->X, (int)lines[lines->Count - 1]->Y, (int)lines[lines->Count - 2]->X, (int)lines[lines->Count - 2]->Y);
		}

		//вывод отсекателя отрезка на экран
		private: System::Void drawRect() {
			Pen^ myPen = gcnew Pen(rectColor);
			Graphics^ g = surface->CreateGraphics();

			g->DrawRectangle(myPen, (int)rect[0]->X, (int)rect[0]->Y, (int)(rect[1]->X - rect[0]->X), (int)(rect[1]->Y - rect[0]->Y));
		}

		//добавление координат отсекателя
		private: System::Void button_add_rect_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_1 = 0;
			double y_1 = 0;
			double x_2 = 0;
			double y_2 = 0;

			if (Double::TryParse(textBox_x_rect_1->Text, x_1) && Double::TryParse(textBox_y_rect_1->Text, y_1) &&
				Double::TryParse(textBox_x_rect_2->Text, x_2) && Double::TryParse(textBox_y_rect_2->Text, y_2)) {
				myPoint^ PointBeg = gcnew myPoint(x_1, y_1);
				myPoint^ PointEnd = gcnew myPoint(x_2, y_2);

				textBox_x_rect_1->Text = "";
				textBox_x_rect_2->Text = "";
				textBox_y_rect_1->Text = "";
				textBox_y_rect_2->Text = "";

				rect->Add(modifyPoint(PointBeg));
				rect->Add(modifyPoint(PointEnd));

				drawRect();
			}
			else {
				textBox_x_rect_1->Text = "";
				textBox_x_rect_2->Text = "";
				textBox_y_rect_1->Text = "";
				textBox_y_rect_2->Text = "";
				MessageBox::Show("Некорректный ввод координат точки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		//добавление отрезка
		private: System::Void button_add_line_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_1 = 0;
			double y_1 = 0;
			double x_2 = 0;
			double y_2 = 0;

			if (Double::TryParse(textBox_x_otr_1->Text, x_1) && Double::TryParse(textBox_y_otr_1->Text, y_1) &&
				Double::TryParse(textBox_x_otr_2->Text, x_2) && Double::TryParse(textBox_y_otr_2->Text, y_2)) {
				myPoint^ PointBeg = gcnew myPoint(x_1, y_1);
				myPoint^ PointEnd = gcnew myPoint(x_2, y_2);

				textBox_x_otr_1->Text = "";
				textBox_y_otr_1->Text = "";
				textBox_x_otr_2->Text = "";
				textBox_y_otr_2->Text = "";

				lines->Add(modifyPoint(PointBeg));
				lines->Add(modifyPoint(PointEnd));

				drawLine();
			}
			else {
				textBox_x_otr_1->Text = "";
				textBox_y_otr_1->Text = "";
				textBox_x_otr_2->Text = "";
				textBox_y_otr_2->Text = "";
				MessageBox::Show("Некорректный ввод координат точки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		//отображение координат в реальном времени
		private: System::Void surface_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			double x_now = e->X;
			double y_now = e->Y;

			myPoint^ real = gcnew myPoint(x_now, y_now);
			myPoint^ res = gcnew myPoint(0, 0);

			res = modifyPoint_from_real(real);

			textBox_x_now->Text = res->X.ToString();
			textBox_y_now->Text = res->Y.ToString();
		}

		//добавление точки по координатам курсора
		private: System::Void add_by_click(System::Void) {
			double now_x = 0;
			double now_y = 0;

			Double::TryParse(textBox_x_now->Text, now_x);
			Double::TryParse(textBox_y_now->Text, now_y);

			myPoint^ newPoint = gcnew myPoint(now_x, now_y);

			if (rect->Count == 0)
				rect->Add(modifyPoint(newPoint));
			else if (rect->Count == 1) {
				rect->Add(modifyPoint(newPoint));
				drawRect();
			}
			else if (!is_line_closed) {
				lines->Add(modifyPoint(newPoint));
				is_line_closed = true;
			}
			else {
				lines->Add(modifyPoint(newPoint));
				drawLine();
				is_line_closed = false;
			}
		}

		//добавление точки нажатием на экран
		private: System::Void surface_MouseDown(Object^ sender, MouseEventArgs^ e) {
			add_by_click();
		}
		
		//удаление всех точек
		private: System::Void удалитьВсеТочкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			rect->Clear();
			lines->Clear();

			Graphics^ g = surface->CreateGraphics();
			g->Clear(Color::White);
		}

		//выбор цвета прямоугольника
		private: System::Void button_color_rect_Click(System::Object^ sender, System::EventArgs^ e) {
			ColorDialog^ colorDialog = gcnew ColorDialog();

			if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				rectColor = colorDialog->Color;
			}
		}

		//выбор цвета прямоугольника
		private: System::Void button_color_line_Click(System::Object^ sender, System::EventArgs^ e) {
			ColorDialog^ colorDialog = gcnew ColorDialog();

			if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				lineColor = colorDialog->Color;
			}
		}

		//выбор цвета прямоугольника
		private: System::Void button_color_ots_Click(System::Object^ sender, System::EventArgs^ e) {
			ColorDialog^ colorDialog = gcnew ColorDialog();

			if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				otsColor = colorDialog->Color;
			}
		}

		//отпределение знака
		private: int sign(double num) {
			if (num > 0)
				return 1;
			if (num < 0)
				return -1;
			return 0;
		}

		// проверка, принадлежит ли точка массиву
		private: bool isInArray(myPoint^ element, List<myPoint^>^ arr) {
			for (int i = 0; i < arr->Count; i++) {
				if (arr[i] == element) {
					return true;
				}
			}
			return false;
		}

		// задание битов
		private: int set_bits(myPoint^ point, myPoint^ rect_top_left, myPoint^ rect_bottom_right) {
			int bits = 0b0000;

			if (point->X < rect_top_left->X) bits |= MASK_LEFT;
			if (point->X > rect_bottom_right->X) bits |= MASK_RIGHT;
			if (point->Y < rect_top_left->Y) bits |= MASK_BOTTOM;
			if (point->Y > rect_bottom_right->Y) bits |= MASK_TOP;

			return bits;
		}

		// простой алгоритм отсечения
		private: void simple_clipping(Graphics^ g, Pen^ pen) {
			myPoint^ rect_top_left = rect[0];
			myPoint^ rect_bottom_right = rect[1];

			for (int i = 0; i < lines->Count; i += 2) {
				myPoint^ p1 = lines[i];
				myPoint^ p2 = lines[i + 1];

				int s1 = set_bits(p1, rect_top_left, rect_bottom_right);
				int s2 = set_bits(p2, rect_top_left, rect_bottom_right);

				// Полностью видимый отрезок
				if (s1 == 0 && s2 == 0) {
					g->DrawLine(pen, (int)p1->X, (int)p1->Y, (int)p2->X, (int)p2->Y);
					return;
				}

				// Полностью невидимый отрезок
				if (s1 & s2) {
					return;
				}

				int now_index = 0;
				List<myPoint^>^ result = gcnew List<myPoint^>();

				// Нет ли точки внутри отсекателя
				if (s1 == 0) {
					now_index = 1;
					result->Add(p1);
				}
				else if (s2 == 0) {
					now_index = 1;
					result->Add(p2);

					myPoint^ temp = gcnew myPoint(p1->X, p1->Y);
					p1 = p2;
					p2 = temp;

					int s_temp = s1;
					s1 = s2;
					s2 = s_temp;
				}
				double tan = (p2->Y - p1->Y) / (p2->X - p1->X);

				if (now_index == 0) {
					if (s1 & MASK_LEFT) {
						int y = round(tan * (rect[0]->X - p1->X) + p1->Y);

						if (y <= rect[1]->Y && y >= rect[0]->Y) {
							myPoint^ newPoint = gcnew myPoint(rect[0]->X, y);
							result->Add(newPoint);
						}
					}


					if (s1 & MASK_RIGHT) {
						int y = round(tan * (rect[1]->X - p1->X) + p1->Y);

						if (y <= rect[1]->Y && y >= rect[0]->Y) {
							myPoint^ newPoint = gcnew myPoint(rect[1]->X, y);
							result->Add(newPoint);
						}
					}

					if (s1 & MASK_TOP) {
						int x = round((rect[1]->Y - p1->Y) / tan + p1->X);

						if (x <= rect[1]->X && x >= rect[0]->X) {
							myPoint^ newPoint = gcnew myPoint(x, rect[1]->Y);
							result->Add(newPoint);
						}
					}

					if (s1 & MASK_BOTTOM) {
						int x = round((rect[0]->Y - p1->Y) / tan + p1->X);

						if (x <= rect[1]->X && x >= rect[0]->X) {
							myPoint^ newPoint = gcnew myPoint(x, rect[0]->Y);
							result->Add(newPoint);
						}
					}

					now_index++;
				}
				
				if (now_index == 1) {
					if (s2 & MASK_LEFT) {
						int y = round(tan * (rect[0]->X - p2->X) + p2->Y);

						if (y <= rect[1]->Y && y >= rect[0]->Y) {
							myPoint^ newPoint = gcnew myPoint(rect[0]->X, y);
							result->Add(newPoint);
						}
					}


					if (s2 & MASK_RIGHT) {
						int y = round(tan * (rect[1]->X - p2->X) + p2->Y);

						if (y <= rect[1]->Y && y >= rect[0]->Y) {
							myPoint^ newPoint = gcnew myPoint(rect[1]->X, y);
							result->Add(newPoint);
						}
					}

					if (s2 & MASK_TOP) {
						int x = round((rect[1]->Y - p2->Y) / tan + p2->X);

						if (x <= rect[1]->X && x >= rect[0]->X) {
							myPoint^ newPoint = gcnew myPoint(x, rect[1]->Y);
							result->Add(newPoint);
						}
					}

					if (s2 & MASK_BOTTOM) {
						int x = round((rect[0]->Y - p2->Y) / tan + p2->X);

						if (x <= rect[1]->X && x >= rect[0]->X) {
							myPoint^ newPoint = gcnew myPoint(x, rect[0]->Y);
							result->Add(newPoint);
						}
					}
				}

				if (result->Count == 2) {
					g->DrawLine(pen, (int)result[0]->X, (int)result[0]->Y, (int)result[1]->X, (int)result[1]->Y);
				}
			}
		}

		// отсекание отрезков
		private: System::Void button_color_Click(System::Object^ sender, System::EventArgs^ e) {
			Pen^ myPen = gcnew Pen(otsColor);
			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();
			simple_clipping(g, myPen);

			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			textBox_time->Text = search_time.ToString();
		}
};
}
