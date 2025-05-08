#pragma once

#include "MyClasses.h"
#include <iostream>
#include <limits>
#include <cmath>
#include <utility>
#include <limits>
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
			points = gcnew List<myPoint^>();
			coloredPix = gcnew List<myPoint^>();
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

	private: System::Windows::Forms::Label^ label_add;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::TextBox^ textBox_y_add;
	private: System::Windows::Forms::Label^ label_x_add;
	private: System::Windows::Forms::Label^ label_y_add;




	private: System::Windows::Forms::TextBox^ textBox_x_add;

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






















	private: List<myPoint^>^ points;
	private: List<myPoint^>^ coloredPix;
	private: myPoint^ zatravPoint = gcnew myPoint(0, 0);

	private: const int surH = 524;
	private: const int surL = 863;
	private: const int pointR = 5;
	private: const int pointD = 10;
	private: bool is_drawn = false;
	private: Wait if_wait = error;
	private: Color MyColor = Color::Red;
	private: bool if_closed = false;
	private: myPoint^ beg_point = gcnew myPoint(0, 0);
	private: bool seed_chosen = false;


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
private: System::Windows::Forms::Button^ button_close;
private: System::Windows::Forms::Label^ label_wait;
private: System::Windows::Forms::CheckBox^ checkBox_wait;
private: System::Windows::Forms::CheckBox^ checkBox_no_wait;

private: System::Windows::Forms::Button^ button_font_color;
private: System::Windows::Forms::ToolStripMenuItem^ закраситьToolStripMenuItem;
private: System::Windows::Forms::TextBox^ textBox_x_seed;

private: System::Windows::Forms::Label^ label_y_seed;

private: System::Windows::Forms::Label^ label_x_seed;
private: System::Windows::Forms::TextBox^ textBox_y_seed;
private: System::Windows::Forms::Button^ button_add_seed;



private: System::Windows::Forms::Label^ label_seed_pix;
private: System::Windows::Forms::CheckBox^ checkBox_seed_chosen;















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
			this->закраситьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьВсеТочкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->условиеЗадачиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструкцияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обАвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_add = (gcnew System::Windows::Forms::Label());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->textBox_y_add = (gcnew System::Windows::Forms::TextBox());
			this->label_x_add = (gcnew System::Windows::Forms::Label());
			this->label_y_add = (gcnew System::Windows::Forms::Label());
			this->textBox_x_add = (gcnew System::Windows::Forms::TextBox());
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
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label_wait = (gcnew System::Windows::Forms::Label());
			this->checkBox_wait = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_no_wait = (gcnew System::Windows::Forms::CheckBox());
			this->button_font_color = (gcnew System::Windows::Forms::Button());
			this->textBox_x_seed = (gcnew System::Windows::Forms::TextBox());
			this->label_y_seed = (gcnew System::Windows::Forms::Label());
			this->label_x_seed = (gcnew System::Windows::Forms::Label());
			this->textBox_y_seed = (gcnew System::Windows::Forms::TextBox());
			this->button_add_seed = (gcnew System::Windows::Forms::Button());
			this->label_seed_pix = (gcnew System::Windows::Forms::Label());
			this->checkBox_seed_chosen = (gcnew System::Windows::Forms::CheckBox());
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
			this->label_title->Text = L"Лабораторная по компьютерной графике №6";
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
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->добавитьТочкуToolStripMenuItem,
					this->закраситьToolStripMenuItem, this->удалитьВсеТочкиToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem2->Text = L"Действия";
			// 
			// добавитьТочкуToolStripMenuItem
			// 
			this->добавитьТочкуToolStripMenuItem->Name = L"добавитьТочкуToolStripMenuItem";
			this->добавитьТочкуToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->добавитьТочкуToolStripMenuItem->Text = L"Добавить точку";
			this->добавитьТочкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// закраситьToolStripMenuItem
			// 
			this->закраситьToolStripMenuItem->Name = L"закраситьToolStripMenuItem";
			this->закраситьToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->закраситьToolStripMenuItem->Text = L"Закрасить";
			this->закраситьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_color_Click);
			// 
			// удалитьВсеТочкиToolStripMenuItem
			// 
			this->удалитьВсеТочкиToolStripMenuItem->Name = L"удалитьВсеТочкиToolStripMenuItem";
			this->удалитьВсеТочкиToolStripMenuItem->Size = System::Drawing::Size(194, 22);
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
			// label_add
			// 
			this->label_add->AutoSize = true;
			this->label_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_add->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_add->Location = System::Drawing::Point(988, 93);
			this->label_add->Name = L"label_add";
			this->label_add->Size = System::Drawing::Size(147, 24);
			this->label_add->TabIndex = 5;
			this->label_add->Text = L"Добавить точку";
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(992, 176);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(143, 35);
			this->button_add->TabIndex = 7;
			this->button_add->Text = L"Добавить";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// textBox_y_add
			// 
			this->textBox_y_add->Location = System::Drawing::Point(1009, 150);
			this->textBox_y_add->Name = L"textBox_y_add";
			this->textBox_y_add->Size = System::Drawing::Size(52, 20);
			this->textBox_y_add->TabIndex = 9;
			// 
			// label_x_add
			// 
			this->label_x_add->AutoSize = true;
			this->label_x_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_add->Location = System::Drawing::Point(989, 127);
			this->label_x_add->Name = L"label_x_add";
			this->label_x_add->Size = System::Drawing::Size(14, 13);
			this->label_x_add->TabIndex = 10;
			this->label_x_add->Text = L"X";
			// 
			// label_y_add
			// 
			this->label_y_add->AutoSize = true;
			this->label_y_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_add->Location = System::Drawing::Point(989, 153);
			this->label_y_add->Name = L"label_y_add";
			this->label_y_add->Size = System::Drawing::Size(14, 13);
			this->label_y_add->TabIndex = 11;
			this->label_y_add->Text = L"Y";
			// 
			// textBox_x_add
			// 
			this->textBox_x_add->Location = System::Drawing::Point(1009, 124);
			this->textBox_x_add->Name = L"textBox_x_add";
			this->textBox_x_add->Size = System::Drawing::Size(52, 20);
			this->textBox_x_add->TabIndex = 12;
			// 
			// button_color
			// 
			this->button_color->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_color->Location = System::Drawing::Point(992, 582);
			this->button_color->Name = L"button_color";
			this->button_color->Size = System::Drawing::Size(143, 35);
			this->button_color->TabIndex = 19;
			this->button_color->Text = L"Закрасить";
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
			this->label_color_choose->Location = System::Drawing::Point(988, 255);
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
			// button_close
			// 
			this->button_close->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_close->Location = System::Drawing::Point(992, 217);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(143, 35);
			this->button_close->TabIndex = 53;
			this->button_close->Text = L"Замкнуть";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button_close_Click);
			// 
			// label_wait
			// 
			this->label_wait->AutoSize = true;
			this->label_wait->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_wait->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_wait->Location = System::Drawing::Point(988, 314);
			this->label_wait->Name = L"label_wait";
			this->label_wait->Size = System::Drawing::Size(174, 24);
			this->label_wait->TabIndex = 54;
			this->label_wait->Text = L"Выбрать задержку";
			// 
			// checkBox_wait
			// 
			this->checkBox_wait->AutoSize = true;
			this->checkBox_wait->Location = System::Drawing::Point(992, 341);
			this->checkBox_wait->Name = L"checkBox_wait";
			this->checkBox_wait->Size = System::Drawing::Size(91, 17);
			this->checkBox_wait->TabIndex = 55;
			this->checkBox_wait->Text = L"с задержкой";
			this->checkBox_wait->UseVisualStyleBackColor = true;
			this->checkBox_wait->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_if_wait);
			// 
			// checkBox_no_wait
			// 
			this->checkBox_no_wait->AutoSize = true;
			this->checkBox_no_wait->Location = System::Drawing::Point(992, 366);
			this->checkBox_no_wait->Name = L"checkBox_no_wait";
			this->checkBox_no_wait->Size = System::Drawing::Size(97, 17);
			this->checkBox_no_wait->TabIndex = 56;
			this->checkBox_no_wait->Text = L"без задержки";
			this->checkBox_no_wait->UseVisualStyleBackColor = true;
			this->checkBox_no_wait->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_if_no_wait);
			// 
			// button_font_color
			// 
			this->button_font_color->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_font_color->Location = System::Drawing::Point(992, 282);
			this->button_font_color->Name = L"button_font_color";
			this->button_font_color->Size = System::Drawing::Size(117, 29);
			this->button_font_color->TabIndex = 58;
			this->button_font_color->Text = L"Цвет закраски";
			this->button_font_color->UseVisualStyleBackColor = true;
			this->button_font_color->Click += gcnew System::EventHandler(this, &MyForm::button_color_font_Click);
			// 
			// textBox_x_seed
			// 
			this->textBox_x_seed->Location = System::Drawing::Point(1009, 412);
			this->textBox_x_seed->Name = L"textBox_x_seed";
			this->textBox_x_seed->Size = System::Drawing::Size(52, 20);
			this->textBox_x_seed->TabIndex = 64;
			// 
			// label_y_seed
			// 
			this->label_y_seed->AutoSize = true;
			this->label_y_seed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_seed->Location = System::Drawing::Point(989, 441);
			this->label_y_seed->Name = L"label_y_seed";
			this->label_y_seed->Size = System::Drawing::Size(14, 13);
			this->label_y_seed->TabIndex = 63;
			this->label_y_seed->Text = L"Y";
			// 
			// label_x_seed
			// 
			this->label_x_seed->AutoSize = true;
			this->label_x_seed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_seed->Location = System::Drawing::Point(989, 415);
			this->label_x_seed->Name = L"label_x_seed";
			this->label_x_seed->Size = System::Drawing::Size(14, 13);
			this->label_x_seed->TabIndex = 62;
			this->label_x_seed->Text = L"X";
			// 
			// textBox_y_seed
			// 
			this->textBox_y_seed->Location = System::Drawing::Point(1009, 438);
			this->textBox_y_seed->Name = L"textBox_y_seed";
			this->textBox_y_seed->Size = System::Drawing::Size(52, 20);
			this->textBox_y_seed->TabIndex = 61;
			// 
			// button_add_seed
			// 
			this->button_add_seed->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_seed->Location = System::Drawing::Point(992, 464);
			this->button_add_seed->Name = L"button_add_seed";
			this->button_add_seed->Size = System::Drawing::Size(143, 35);
			this->button_add_seed->TabIndex = 60;
			this->button_add_seed->Text = L"Добавить";
			this->button_add_seed->UseVisualStyleBackColor = true;
			this->button_add_seed->Click += gcnew System::EventHandler(this, &MyForm::button_add_seed_Click);
			// 
			// label_seed_pix
			// 
			this->label_seed_pix->AutoSize = true;
			this->label_seed_pix->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_seed_pix->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_seed_pix->Location = System::Drawing::Point(988, 386);
			this->label_seed_pix->Name = L"label_seed_pix";
			this->label_seed_pix->Size = System::Drawing::Size(202, 24);
			this->label_seed_pix->TabIndex = 59;
			this->label_seed_pix->Text = L"Затравочный пиксель";
			// 
			// checkBox_seed_chosen
			// 
			this->checkBox_seed_chosen->AutoSize = true;
			this->checkBox_seed_chosen->Enabled = false;
			this->checkBox_seed_chosen->Location = System::Drawing::Point(1067, 425);
			this->checkBox_seed_chosen->Name = L"checkBox_seed_chosen";
			this->checkBox_seed_chosen->Size = System::Drawing::Size(65, 17);
			this->checkBox_seed_chosen->TabIndex = 65;
			this->checkBox_seed_chosen->Text = L"Выбран";
			this->checkBox_seed_chosen->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->ClientSize = System::Drawing::Size(1200, 675);
			this->Controls->Add(this->checkBox_seed_chosen);
			this->Controls->Add(this->textBox_x_seed);
			this->Controls->Add(this->label_y_seed);
			this->Controls->Add(this->label_x_seed);
			this->Controls->Add(this->textBox_y_seed);
			this->Controls->Add(this->button_add_seed);
			this->Controls->Add(this->label_seed_pix);
			this->Controls->Add(this->button_font_color);
			this->Controls->Add(this->checkBox_no_wait);
			this->Controls->Add(this->checkBox_wait);
			this->Controls->Add(this->label_wait);
			this->Controls->Add(this->button_close);
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
			this->Controls->Add(this->textBox_x_add);
			this->Controls->Add(this->label_y_add);
			this->Controls->Add(this->label_x_add);
			this->Controls->Add(this->textBox_y_add);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->label_add);
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
				"Добавление точки:\n\n"
				"\tЧтобы добавить точку, можно нажать на координатную плоскость левой кнопкой мыши.\n"
				"\tТакже, есть возможность набрать с клавиатуры координаты точки нажать кнопку \"Добавить\" либо пункт \"Добавить точку\" в меню в разделе \"Действия\".\n"
				"\tЧтобы добавить затравочную точку, необходимо ввести ее координаты на экране.\n"
				"\nЗакраска:\n\n"
				"\tЧтобы закрасить фигуру, необходимо сначала замкнуть ее, затем нажать на кнопку \"Закрасить\" на экране либо в меню.\n"
				"\nУдаление:\n\n"
				"\tЧтобы удалить все точкиб необходимо либо нажать на кнопку \"Очистить\" на экране либо в меню, либо после закраски добавте еще одну точку.\n"
				,
				"Инструкция");
		}

		//об авторе
		private: System::Void обАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Корецкий Александр \nГруппа ИУ7-45Б", "Об авторе");
		}

		//условие
		private: System::Void условиеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Фигура задается координатами ее точек. Необходимо реализовать алгоритм"
				"закрашивания фигуры с задержкой и без с помощью затравочной точки.",
				"Условие задачи №6");
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

		//вывод последнего отрезка на экран
		private: System::Void draw_Line(myPoint^ newPoint) {
			if (if_closed == true) {
				points->Add(newPoint);
				beg_point = newPoint;
			}
			else if (points->Count >= 1)
				Bres_int(newPoint, points[points->Count - 1]);
			else {
				Graphics^ g = surface->CreateGraphics();
				g->Clear(Color::White);
				points->Add(newPoint);
				beg_point = newPoint;
			}
		}

		//добавление точки в список
		private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_add = 0;
			double y_add = 0;

			if (Double::TryParse(textBox_x_add->Text, x_add) && Double::TryParse(textBox_y_add->Text, y_add)) {
				myPoint^ newPoint = gcnew myPoint(x_add, y_add);

				textBox_x_add->Text = "";
				textBox_y_add->Text = "";
								
				draw_Line(modifyPoint(newPoint));
			}
			else {
				textBox_x_add->Text = "";
				textBox_y_add->Text = "";
				MessageBox::Show("Некорректный ввод координат точки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		//добавление затравочного пикселя
		private: System::Void button_add_seed_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_add = 0;
			double y_add = 0;

			if (Double::TryParse(textBox_x_seed->Text, x_add) && Double::TryParse(textBox_y_seed->Text, y_add)) {
				myPoint^ newPoint = gcnew myPoint(x_add, y_add);

				zatravPoint = modifyPoint(newPoint);

				seed_chosen = true;
				checkBox_seed_chosen->Checked = true;
			}
			else {
				textBox_x_seed->Text = "";
				textBox_y_seed->Text = "";
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

			draw_Line(modifyPoint(newPoint));
			if_closed = false;
		}

		//добавление точки нажатием на экран
		private: System::Void surface_MouseDown(Object^ sender, MouseEventArgs^ e) {
			add_by_click();
			if_closed = false;
		}
		
		//удаление всех точек
		private: System::Void удалитьВсеТочкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if_closed = false;
			
			seed_chosen = false;
			checkBox_seed_chosen->Checked = false;
			textBox_x_seed->Text = "";
			textBox_y_seed->Text = "";

			points->Clear();
			coloredPix->Clear();

			Graphics^ g = surface->CreateGraphics();
			g->Clear(Color::White);
		}
	
		//замкнуть фигуру
		private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
			if_closed = true;
			if (points->Count >= 2)
				Bres_int(beg_point, points[points->Count - 1]);
		}

		//обработчик событий
		private: System::Void checkBox_if_wait(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_wait->Checked) {
				checkBox_no_wait->Checked = false;
			}

			if_wait = wait;
		}

		private: System::Void checkBox_if_no_wait(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_no_wait->Checked) {
				checkBox_wait->Checked = false;
			}

			if_wait = no_wait;
		}

		//выбор цвета фона
		private: System::Void button_color_font_Click(System::Object^ sender, System::EventArgs^ e) {
			ColorDialog^ colorDialog = gcnew ColorDialog();

			if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				MyColor = colorDialog->Color;
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

		//рисование отрезка с добавлением точек
		private: void Bres_int(myPoint^ end, myPoint^ beg) {
			Brush^ Pen = gcnew SolidBrush(Color::Black);
			Graphics^ g = surface->CreateGraphics();

			double dx = end->X - beg->X;
			double dy = end->Y - beg->Y;

			int x_sign = sign(dx);
			int y_sign = sign(dy);

			dx *= x_sign;
			dy *= y_sign;

			bool ch = false;
			if (dx < dy) {
				double temp = dx;
				dx = dy;
				dy = temp;

				ch = true;
			}

			double error = 2 * dy - dx;

			double x = beg->X;
			double y = beg->Y;

			for (int i = 0; i < dx + 1; i++) {
				g->FillRectangle(Pen, x, y, 1, 1);
				myPoint^ now = gcnew myPoint(x, y);
				
				points->Add(now);

				double add_x = x;
				double add_y = y;

				if (error >= 0) {
					if (ch)
						x += x_sign;
					else
						y += y_sign;

					error -= 2 * dx;
				}

				if (ch)
					y += y_sign;
				else
					x += x_sign;

				error += 2 * dy;
			}
		}

		//закраска
		private: System::Void button_color_Click(System::Object^ sender, System::EventArgs^ e) {
			unsigned int start_time = clock();

			if (!if_closed) {
				MessageBox::Show("Фигура не замкнута!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (points->Count == 0) {
				MessageBox::Show("Фигура пуста!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			switch (if_wait)
			{
			case wait:
				wait_color();
				break;
			case no_wait:
				no_wait_color();
				break;
			default:
				break;
			}
			points->Clear();
			coloredPix->Clear();

			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			textBox_time->Text = search_time.ToString();
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

		//с задержкой
		private: void wait_color() {
			Graphics^ g = surface->CreateGraphics();
			SolidBrush^ brush = gcnew SolidBrush(MyColor);

			List<myPoint^>^ myStack;
			myStack = gcnew List<myPoint^>();
			myStack->Add(zatravPoint);

			while (myStack->Count > 0) {
				myPoint^ pointNow = myStack[myStack->Count - 1];

				myStack->RemoveAt(myStack->Count - 1);

				coloredPix->Add(pointNow);

				g->FillRectangle(brush, pointNow->X, pointNow->Y, 1, 1);

				myPoint^ pointNext = gcnew myPoint(pointNow->X + 1, pointNow->Y);

				while (!isInArray(pointNext, points) && !isInArray(pointNext, coloredPix)) {
					myPoint^ pointAdd = gcnew myPoint(pointNext->X, pointNext->Y);
					coloredPix->Add(pointAdd);
					g->FillRectangle(brush, pointNext->X++, pointNext->Y, 1, 1);
				}
				
				int rx = pointNext->X - 1;

				pointNext->X = pointNow->X - 1;
				
				while (!isInArray(pointNext, points) && !isInArray(pointNext, coloredPix)) {
					myPoint^ pointAdd = gcnew myPoint(pointNext->X, pointNext->Y);
					coloredPix->Add(pointAdd);
					g->FillRectangle(brush, pointNext->X--, pointNext->Y, 1, 1);
				}

				int lx = pointNext->X + 1;

				for (int i = 1; i > -2; i -= 2) {
					myPoint^ pointNew = gcnew myPoint(lx, pointNow->Y + i);

					while (pointNew->X <= rx) {
						int flag = 0;

						while (!isInArray(pointNew, points) && !isInArray(pointNew, coloredPix) && pointNew->X <= rx) {
							pointNew->X++;
							flag = 1;
						}

						if (flag) {
							myPoint^ pointAdd = gcnew myPoint(pointNew->X - 1, pointNew->Y);
							myStack->Add(pointAdd);

							flag = 0;
						}

						int start_x = pointNew->X;

						while ((isInArray(pointNew, points) || isInArray(pointNew, coloredPix)) && pointNew->X < rx)
							pointNew->X++;

						if (pointNew->X == start_x)
							pointNew->X++;
					}
				}
			}
			std::cout << coloredPix->Count;
		}
			 
		//без задержки
		private: void no_wait_color() {
			Graphics^ g = surface->CreateGraphics();
			SolidBrush^ brush = gcnew SolidBrush(MyColor);

			List<myPoint^>^ myStack;
			myStack = gcnew List<myPoint^>();
			myStack->Add(zatravPoint);

			while (myStack->Count > 0) {
				myPoint^ pointNow = myStack[myStack->Count - 1];

				myStack->RemoveAt(myStack->Count - 1);

				coloredPix->Add(pointNow);

				myPoint^ pointNext = gcnew myPoint(pointNow->X + 1, pointNow->Y);

				while (!isInArray(pointNext, points) && !isInArray(pointNext, coloredPix)) {
					myPoint^ pointAdd = gcnew myPoint(pointNext->X, pointNext->Y);
					coloredPix->Add(pointAdd);
					pointNext->X++;
				}

				int rx = pointNext->X - 1;

				pointNext->X = pointNow->X - 1;

				while (!isInArray(pointNext, points) && !isInArray(pointNext, coloredPix)) {
					myPoint^ pointAdd = gcnew myPoint(pointNext->X, pointNext->Y);
					coloredPix->Add(pointAdd);
					pointNext->X--;
				}

				int lx = pointNext->X + 1;

				for (int i = 1; i > -2; i -= 2) {
					myPoint^ pointNew = gcnew myPoint(lx, pointNow->Y + i);

					while (pointNew->X <= rx) {
						int flag = 0;

						while (!isInArray(pointNew, points) && !isInArray(pointNew, coloredPix) && pointNew->X <= rx) {
							pointNew->X++;
							flag = 1;
						}

						if (flag) {
							myPoint^ pointAdd = gcnew myPoint(pointNew->X - 1, pointNew->Y);
							myStack->Add(pointAdd);

							flag = 0;
						}

						int start_x = pointNew->X;

						while ((isInArray(pointNew, points) || isInArray(pointNew, coloredPix)) && pointNew->X < rx)
							pointNew->X++;

						if (pointNew->X == start_x)
							pointNew->X++;
					}
				}
			}

			for (int i = 0; i < coloredPix->Count; i++)
				g->FillRectangle(brush, coloredPix[i]->X, coloredPix[i]->Y, 1, 1);
		}
};
}
