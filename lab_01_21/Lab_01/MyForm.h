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
	private: System::Windows::Forms::TextBox^ textBox_x_del;
	private: System::Windows::Forms::Label^ label_y_del;



	private: System::Windows::Forms::Label^ label_x_del;

	private: System::Windows::Forms::TextBox^ textBox_y_del;

	private: System::Windows::Forms::Button^ button_del;
	private: System::Windows::Forms::Label^ label_del;
	private: System::Windows::Forms::Button^ button_triangle_finder;
	private: System::Windows::Forms::PictureBox^ pictureBox_menu;
	private: System::Windows::Forms::PictureBox^ pictureBox_left;



	private: System::Windows::Forms::PictureBox^ pictureBox_right;
	private: System::Windows::Forms::PictureBox^ pictureBox_down;


	private: System::Windows::Forms::PictureBox^ pictureBox_up;

	private: System::Windows::Forms::ToolStripMenuItem^ добавитьТочкуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьТочкуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ найтиТреугольникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ surface;


	private: System::Windows::Forms::TextBox^ textBox_x_scale;

	private: System::Windows::Forms::Label^ label_y_scale;

	private: System::Windows::Forms::Label^ label_x_scale;
	private: System::Windows::Forms::TextBox^ textBox_y_scale;
	private: System::Windows::Forms::Button^ button_scale;



	private: System::Windows::Forms::Label^ label_scale;
	private: System::Windows::Forms::TextBox^ textBox_kx_scale;


	private: System::Windows::Forms::Label^ label_ky_scale;

	private: System::Windows::Forms::Label^ label_kx_scale;
	private: System::Windows::Forms::TextBox^ textBox_ky_scale;

	private: List<myPoint^>^ points;

	private: const int surH = 524;
	private: const int surL = 863;
	private: const int pointR = 5;
	private: const int pointD = 10;
	private: bool is_drawn = false;
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
private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяКНачальномуМасштабуToolStripMenuItem;
private: System::Windows::Forms::TextBox^ textBox_time;
private: System::Windows::Forms::Label^ label_sec;
private: System::Windows::Forms::Label^ label_T;
private: System::Windows::Forms::PictureBox^ pictureBox1;













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
			this->удалитьТочкуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьВсеТочкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вернутьсяКНачальномуМасштабуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->найтиТреугольникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->textBox_x_del = (gcnew System::Windows::Forms::TextBox());
			this->label_y_del = (gcnew System::Windows::Forms::Label());
			this->label_x_del = (gcnew System::Windows::Forms::Label());
			this->textBox_y_del = (gcnew System::Windows::Forms::TextBox());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->label_del = (gcnew System::Windows::Forms::Label());
			this->button_triangle_finder = (gcnew System::Windows::Forms::Button());
			this->pictureBox_menu = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_left = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_right = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_down = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_up = (gcnew System::Windows::Forms::PictureBox());
			this->surface = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_x_scale = (gcnew System::Windows::Forms::TextBox());
			this->label_y_scale = (gcnew System::Windows::Forms::Label());
			this->label_x_scale = (gcnew System::Windows::Forms::Label());
			this->textBox_y_scale = (gcnew System::Windows::Forms::TextBox());
			this->button_scale = (gcnew System::Windows::Forms::Button());
			this->label_scale = (gcnew System::Windows::Forms::Label());
			this->textBox_kx_scale = (gcnew System::Windows::Forms::TextBox());
			this->label_ky_scale = (gcnew System::Windows::Forms::Label());
			this->label_kx_scale = (gcnew System::Windows::Forms::Label());
			this->textBox_ky_scale = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox_time = (gcnew System::Windows::Forms::TextBox());
			this->label_sec = (gcnew System::Windows::Forms::Label());
			this->label_T = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label_title->Text = L"Лабораторная по компьютерной графике №1";
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
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->добавитьТочкуToolStripMenuItem,
					this->удалитьТочкуToolStripMenuItem, this->удалитьВсеТочкиToolStripMenuItem, this->вернутьсяКНачальномуМасштабуToolStripMenuItem,
					this->найтиТреугольникToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem2->Text = L"Действия";
			// 
			// добавитьТочкуToolStripMenuItem
			// 
			this->добавитьТочкуToolStripMenuItem->Name = L"добавитьТочкуToolStripMenuItem";
			this->добавитьТочкуToolStripMenuItem->Size = System::Drawing::Size(298, 22);
			this->добавитьТочкуToolStripMenuItem->Text = L"Добавить точку";
			this->добавитьТочкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// удалитьТочкуToolStripMenuItem
			// 
			this->удалитьТочкуToolStripMenuItem->Name = L"удалитьТочкуToolStripMenuItem";
			this->удалитьТочкуToolStripMenuItem->Size = System::Drawing::Size(298, 22);
			this->удалитьТочкуToolStripMenuItem->Text = L"Удалить точку";
			this->удалитьТочкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
			// 
			// удалитьВсеТочкиToolStripMenuItem
			// 
			this->удалитьВсеТочкиToolStripMenuItem->Name = L"удалитьВсеТочкиToolStripMenuItem";
			this->удалитьВсеТочкиToolStripMenuItem->Size = System::Drawing::Size(298, 22);
			this->удалитьВсеТочкиToolStripMenuItem->Text = L"Удалить все точки";
			this->удалитьВсеТочкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьВсеТочкиToolStripMenuItem_Click);
			// 
			// вернутьсяКНачальномуМасштабуToolStripMenuItem
			// 
			this->вернутьсяКНачальномуМасштабуToolStripMenuItem->Name = L"вернутьсяКНачальномуМасштабуToolStripMenuItem";
			this->вернутьсяКНачальномуМасштабуToolStripMenuItem->Size = System::Drawing::Size(298, 22);
			this->вернутьсяКНачальномуМасштабуToolStripMenuItem->Text = L"Вернуться к начальному масштабу";
			this->вернутьсяКНачальномуМасштабуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вернутьсяКНачальномуМасштабуToolStripMenuItem_Click);
			// 
			// найтиТреугольникToolStripMenuItem
			// 
			this->найтиТреугольникToolStripMenuItem->Name = L"найтиТреугольникToolStripMenuItem";
			this->найтиТреугольникToolStripMenuItem->Size = System::Drawing::Size(298, 22);
			this->найтиТреугольникToolStripMenuItem->Text = L"Найти треугольник";
			this->найтиТреугольникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::найтиТреугольникToolStripMenuItem_Click);
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
			// textBox_x_del
			// 
			this->textBox_x_del->Location = System::Drawing::Point(1009, 241);
			this->textBox_x_del->Name = L"textBox_x_del";
			this->textBox_x_del->Size = System::Drawing::Size(52, 20);
			this->textBox_x_del->TabIndex = 18;
			// 
			// label_y_del
			// 
			this->label_y_del->AutoSize = true;
			this->label_y_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_del->Location = System::Drawing::Point(989, 270);
			this->label_y_del->Name = L"label_y_del";
			this->label_y_del->Size = System::Drawing::Size(14, 13);
			this->label_y_del->TabIndex = 17;
			this->label_y_del->Text = L"Y";
			// 
			// label_x_del
			// 
			this->label_x_del->AutoSize = true;
			this->label_x_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_del->Location = System::Drawing::Point(989, 244);
			this->label_x_del->Name = L"label_x_del";
			this->label_x_del->Size = System::Drawing::Size(14, 13);
			this->label_x_del->TabIndex = 16;
			this->label_x_del->Text = L"X";
			// 
			// textBox_y_del
			// 
			this->textBox_y_del->Location = System::Drawing::Point(1009, 267);
			this->textBox_y_del->Name = L"textBox_y_del";
			this->textBox_y_del->Size = System::Drawing::Size(52, 20);
			this->textBox_y_del->TabIndex = 15;
			// 
			// button_del
			// 
			this->button_del->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_del->Location = System::Drawing::Point(992, 293);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(143, 35);
			this->button_del->TabIndex = 14;
			this->button_del->Text = L"Удалить";
			this->button_del->UseVisualStyleBackColor = true;
			this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
			// 
			// label_del
			// 
			this->label_del->AutoSize = true;
			this->label_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_del->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_del->Location = System::Drawing::Point(988, 214);
			this->label_del->Name = L"label_del";
			this->label_del->Size = System::Drawing::Size(137, 24);
			this->label_del->TabIndex = 13;
			this->label_del->Text = L"Удалить точку";
			// 
			// button_triangle_finder
			// 
			this->button_triangle_finder->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_triangle_finder->Location = System::Drawing::Point(992, 539);
			this->button_triangle_finder->Name = L"button_triangle_finder";
			this->button_triangle_finder->Size = System::Drawing::Size(143, 35);
			this->button_triangle_finder->TabIndex = 19;
			this->button_triangle_finder->Text = L"Найти треугольник";
			this->button_triangle_finder->UseVisualStyleBackColor = true;
			this->button_triangle_finder->Click += gcnew System::EventHandler(this, &MyForm::button_triangle_finder_Click);
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
			this->surface->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::surface_Paint);
			this->surface->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::surface_MouseDown);
			this->surface->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::surface_MouseMove);
			// 
			// textBox_x_scale
			// 
			this->textBox_x_scale->Location = System::Drawing::Point(1009, 358);
			this->textBox_x_scale->Name = L"textBox_x_scale";
			this->textBox_x_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_x_scale->TabIndex = 32;
			// 
			// label_y_scale
			// 
			this->label_y_scale->AutoSize = true;
			this->label_y_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_scale->Location = System::Drawing::Point(989, 387);
			this->label_y_scale->Name = L"label_y_scale";
			this->label_y_scale->Size = System::Drawing::Size(14, 13);
			this->label_y_scale->TabIndex = 31;
			this->label_y_scale->Text = L"Y";
			// 
			// label_x_scale
			// 
			this->label_x_scale->AutoSize = true;
			this->label_x_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_scale->Location = System::Drawing::Point(989, 361);
			this->label_x_scale->Name = L"label_x_scale";
			this->label_x_scale->Size = System::Drawing::Size(14, 13);
			this->label_x_scale->TabIndex = 30;
			this->label_x_scale->Text = L"X";
			// 
			// textBox_y_scale
			// 
			this->textBox_y_scale->Location = System::Drawing::Point(1009, 384);
			this->textBox_y_scale->Name = L"textBox_y_scale";
			this->textBox_y_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_y_scale->TabIndex = 29;
			// 
			// button_scale
			// 
			this->button_scale->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_scale->Location = System::Drawing::Point(992, 410);
			this->button_scale->Name = L"button_scale";
			this->button_scale->Size = System::Drawing::Size(143, 35);
			this->button_scale->TabIndex = 28;
			this->button_scale->Text = L"Масштабировать";
			this->button_scale->UseVisualStyleBackColor = true;
			this->button_scale->Click += gcnew System::EventHandler(this, &MyForm::button_scale_Click);
			// 
			// label_scale
			// 
			this->label_scale->AutoSize = true;
			this->label_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_scale->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_scale->Location = System::Drawing::Point(988, 331);
			this->label_scale->Name = L"label_scale";
			this->label_scale->Size = System::Drawing::Size(157, 24);
			this->label_scale->TabIndex = 27;
			this->label_scale->Text = L"Масштабировать";
			// 
			// textBox_kx_scale
			// 
			this->textBox_kx_scale->Location = System::Drawing::Point(1092, 358);
			this->textBox_kx_scale->Name = L"textBox_kx_scale";
			this->textBox_kx_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_kx_scale->TabIndex = 36;
			// 
			// label_ky_scale
			// 
			this->label_ky_scale->AutoSize = true;
			this->label_ky_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_ky_scale->Location = System::Drawing::Point(1072, 387);
			this->label_ky_scale->Name = L"label_ky_scale";
			this->label_ky_scale->Size = System::Drawing::Size(19, 13);
			this->label_ky_scale->TabIndex = 35;
			this->label_ky_scale->Text = L"Ky";
			// 
			// label_kx_scale
			// 
			this->label_kx_scale->AutoSize = true;
			this->label_kx_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_kx_scale->Location = System::Drawing::Point(1072, 361);
			this->label_kx_scale->Name = L"label_kx_scale";
			this->label_kx_scale->Size = System::Drawing::Size(19, 13);
			this->label_kx_scale->TabIndex = 34;
			this->label_kx_scale->Text = L"Kx";
			// 
			// textBox_ky_scale
			// 
			this->textBox_ky_scale->Location = System::Drawing::Point(1092, 384);
			this->textBox_ky_scale->Name = L"textBox_ky_scale";
			this->textBox_ky_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_ky_scale->TabIndex = 33;
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
			// textBox_time
			// 
			this->textBox_time->Location = System::Drawing::Point(771, 43);
			this->textBox_time->Name = L"textBox_time";
			this->textBox_time->ReadOnly = true;
			this->textBox_time->Size = System::Drawing::Size(40, 20);
			this->textBox_time->TabIndex = 52;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->ClientSize = System::Drawing::Size(1200, 675);
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
			this->Controls->Add(this->textBox_kx_scale);
			this->Controls->Add(this->label_ky_scale);
			this->Controls->Add(this->label_kx_scale);
			this->Controls->Add(this->textBox_ky_scale);
			this->Controls->Add(this->textBox_x_scale);
			this->Controls->Add(this->label_y_scale);
			this->Controls->Add(this->label_x_scale);
			this->Controls->Add(this->textBox_y_scale);
			this->Controls->Add(this->button_scale);
			this->Controls->Add(this->label_scale);
			this->Controls->Add(this->pictureBox_up);
			this->Controls->Add(this->pictureBox_down);
			this->Controls->Add(this->pictureBox_right);
			this->Controls->Add(this->pictureBox_left);
			this->Controls->Add(this->button_triangle_finder);
			this->Controls->Add(this->textBox_x_del);
			this->Controls->Add(this->label_y_del);
			this->Controls->Add(this->label_x_del);
			this->Controls->Add(this->textBox_y_del);
			this->Controls->Add(this->button_del);
			this->Controls->Add(this->label_del);
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
				"\nУдаление точки:\n\n"
				"\tЧтобы удалить точку, можно нажать правой кнопкой мыши на кнопку, которую вы хотите удалить.\n"
				"\tТакже, есть возможность набрать с клавиатуры координаты точки нажать кнопку \"Удалить\" либо пункт \"Удалить точку\" в меню в разделе \"Действия\".\n"
				"\tТакже, в меню в разделе \"Действия\" при выборе пункта \"Удалить все точки\", удалятся все точки.\n"
				"\nМасштабирование:\n\n"
				"\tЧтобы масштабировать изображение, нужно набрать с клавиатуры координаты центра, относительно которого вы будете масштабировать, "
				"и коэффициенты, на сколько вы будете масштабировать по оси Х и по оси У.\n"
				"\tТакже, в меню в разделе \"Действия\" при выборе пункта \"Вернуться к начальному масштабу\", изображение возвращается к начальному масштабу.\n"
				"\nРешение задачи:\n\n"
				"\tДля поиска треугольника, у которого максимальная высота минимальна, можно нажать на кнопку \"Найти треугольник\" на экране, либо в меню в разделе \"Действия\".\n"
				"\nДля определения координаты, в которой находится курсор, над осью координат есть рамка."
				"\nДля определения времени на работу программы, над осью координат есть рамка, справа от координат курсора."
				,
				"Инструкция");
		}

		//об авторе
		private: System::Void обАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Корецкий Александр \nГруппа ИУ7-45Б", "Об авторе");
		}

		//условие
		private: System::Void условиеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("На плоскости дано множество точек. Найти такой треугольник с вершинами в этих точках, у которого"
				"максимальная из трех высот имеет минимальное значение среди всех треугольников. Сделать графический вывод изображения.",
				"Условие задачи №21");
		}
		
		//рисование координатной сетки до начала работы
		private: System::Void surface_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			Pen^ boldPen = gcnew Pen(Color::Black, 3.0f);
			//вертикальная ось
			g->DrawLine(boldPen, surL / 2, 0, surL / 2, surH);

			//вертикальные вспомогательные линии
			g->DrawLine(Pens::Black, surL / 2 + surH / 6, 0, surL / 2 + surH / 6, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 6, 0, surL / 2 - surH / 6, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH / 3, 0, surL / 2 + surH / 3, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 3, 0, surL / 2 - surH / 3, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH / 2, 0, surL / 2 + surH / 2, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 2, 0, surL / 2 - surH / 2, surH);

			g->DrawLine(Pens::Black, surL / 2 + 2 * surH / 3, 0, surL / 2 + 2 * surH / 3, surH);
			g->DrawLine(Pens::Black, surL / 2 - 2 * surH / 3, 0, surL / 2 - 2 * surH / 3, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH / 6 * 5, 0, surL / 2 + surH / 6 * 5, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 6 * 5, 0, surL / 2 - surH / 6 * 5, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH, 0, surL / 2 + surH, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH, 0, surL / 2 - surH, surH);

			//горизонтальная ось
			g->DrawLine(boldPen, 0, surH / 2, surL, surH / 2);

			//горизонтальные вспомогательные линии
			g->DrawLine(Pens::Black, 0, surH / 6, surL, surH / 6);
			g->DrawLine(Pens::Black, 0, surH / 3, surL, surH / 3);
			g->DrawLine(Pens::Black, 0, 2 * surH / 3, surL, 2 * surH / 3);
			g->DrawLine(Pens::Black, 0, 5 * surH / 6, surL, 5 * surH / 6);

			//стрелка вверх
			g->DrawLine(boldPen, surL, surH / 2, surL - pointD, surH / 2 - pointR);
			g->DrawLine(boldPen, surL, surH / 2, surL - pointD, surH / 2 + pointR);

			//стрелка вниз
			g->DrawLine(boldPen, surL / 2, -2, surL / 2 - pointR, pointD);
			g->DrawLine(boldPen, surL / 2, -2, surL / 2 + pointR, pointD);
		}

		//перерисовка координатной сетки
		private: System::Void surface_Paint_now() {
			Graphics^ g = surface->CreateGraphics();
			Pen^ boldPen = gcnew Pen(Color::Black, 3.0f);

			//вертикальные вспомогательные линии
			g->DrawLine(Pens::Black, surL / 2 + surH / 6, 0, surL / 2 + surH / 6, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 6, 0, surL / 2 - surH / 6, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH / 3, 0, surL / 2 + surH / 3, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 3, 0, surL / 2 - surH / 3, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH / 2 , 0, surL / 2 + surH / 2, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 2, 0, surL / 2 - surH / 2, surH);

			g->DrawLine(Pens::Black, surL / 2 + 2 * surH / 3, 0, surL / 2 + 2 * surH / 3, surH);
			g->DrawLine(Pens::Black, surL / 2 - 2 * surH / 3, 0, surL / 2 - 2 * surH / 3, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH / 6 * 5, 0, surL / 2 + surH / 6 * 5, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH / 6 * 5, 0, surL / 2 - surH / 6 * 5, surH);

			g->DrawLine(Pens::Black, surL / 2 + surH, 0, surL / 2 + surH, surH);
			g->DrawLine(Pens::Black, surL / 2 - surH, 0, surL / 2 - surH, surH);

			g->DrawLine(Pens::Black, surL / 2, 0, surL / 2, surH);

			//горизонтальные вспомогательные линии
			g->DrawLine(Pens::Black, 0, surH / 6, surL, surH / 6);
			g->DrawLine(Pens::Black, 0, surH / 3, surL, surH / 3);
			g->DrawLine(Pens::Black, 0, 2 * surH / 3, surL, 2 * surH / 3);
			g->DrawLine(Pens::Black, 0, 5 * surH / 6, surL, 5 * surH / 6);
			g->DrawLine(Pens::Black, 0, surH / 2, surL, surH / 2);

			double min_x = 0;
			double min_y = 0;
			double max_x = 0;
			double max_y = 0;

			Double::TryParse(label_min_x->Text, min_x);
			Double::TryParse(label_min_y->Text, min_y);
			Double::TryParse(label_max_x->Text, max_x);
			Double::TryParse(label_max_y->Text, max_y);

			if (min_x * max_x <= 0) {
					double k = -min_x / (max_x - min_x);
					double x_zero = surL * k;

					//вертикальная ось
					g->DrawLine(boldPen, x_zero, 0, x_zero, surH);

				if (min_x < max_x) {
					//стрелка вверх
					g->DrawLine(boldPen, x_zero, -2, x_zero - pointR, pointD);
					g->DrawLine(boldPen, x_zero, -2, x_zero + pointR, pointD);
				}
				else {
					//стрелка вниз
					g->DrawLine(boldPen, x_zero, surH - 2, x_zero - pointR, surH - pointD);
					g->DrawLine(boldPen, x_zero, surH - 2, x_zero + pointR, surH - pointD);
				}
			}

			if (min_y * max_y <= 0) {
					double k = max_y / (max_y - min_y);
					double y_zero = surH * k;

					//горизонтальная ось
					g->DrawLine(boldPen, 0, y_zero, surL, y_zero);

				if (min_y < max_y) {
					//стрелка вправо
					g->DrawLine(boldPen, surL, y_zero, surL - pointD, y_zero - pointR);
					g->DrawLine(boldPen, surL, y_zero, surL - pointD, y_zero + pointR);
				}
				else {
					//стрелка влево
					g->DrawLine(boldPen, 0, y_zero, pointD, y_zero - pointR);
					g->DrawLine(boldPen, 0, y_zero, pointD, y_zero + pointR);
				}
			}

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
			myPoint^ res = gcnew myPoint(new_x, new_y);

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

		//рисование точки на экране
		private: System::Void surface_Paint_Point(myPoint^ point) {
			Graphics^ g = surface->CreateGraphics();
			g->DrawEllipse(Pens::Black, point->X - pointR, point->Y - pointR, pointD, pointD);
			g->FillEllipse(Brushes::Red, point->X - pointR, point->Y - pointR, pointD, pointD);
		}

		//вывод всех точек на экран
		private: System::Void draw_All_Points() {
			Graphics^ g = surface->CreateGraphics();
			g->Clear(Color::White);
			delete g;

			surface_Paint_now();

			for each (myPoint ^ point in points) {
				surface_Paint_Point(modifyPoint(point));
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

				for each (myPoint^ point in points) {
					if (point == newPoint)
					{
						MessageBox::Show("Точка уже принадлежит множеству!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}
				points->Add(newPoint);
				
				if (is_drawn) {
					draw_All_Points();
					textBox_time->Text = "";
					is_drawn = false;
				}
				else
					surface_Paint_Point(modifyPoint(newPoint));
			}
			else {
				textBox_x_add->Text = "";
				textBox_y_add->Text = "";
				MessageBox::Show("Некорректный ввод координат точки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		//удаление точки из списка
		private: System::Void removePoint(myPoint^ point)
		{
			int ind = -1;

			for (int i = 0; i < points->Count; i++) {
				if (points[i] == point) {
					ind = i;
					break;
				}
			}

			if (ind != -1) {
				points->RemoveAt(ind);
			}
		}

		//удаление точки
		private: System::Void button_del_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_del = 0;
			double y_del = 0;

			if (Double::TryParse(textBox_x_del->Text, x_del) && Double::TryParse(textBox_y_del->Text, y_del)) {
				myPoint^ newPoint = gcnew myPoint(x_del, y_del);

				textBox_x_del->Text = "";
				textBox_y_del->Text = "";

				bool point_in_list = false;

				for each (myPoint ^ point in points) {
					if (point == newPoint) {
						point_in_list = true;
						break;
					}
				}

				if (!point_in_list) {
					MessageBox::Show("Точка отсутствует в множестве!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				removePoint(newPoint);
			}
			else {
				textBox_x_del->Text = "";
				textBox_y_del->Text = "";
				MessageBox::Show("Некорректный ввод координат точки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			is_drawn = false;
			textBox_time->Text = "";
			draw_All_Points();
		}

		//масштабирование
		private: System::Void button_scale_Click(System::Object^ sender, System::EventArgs^ e) {
			double centre_x = 0;
			double centre_y = 0;
			double d_x = 0;
			double d_y = 0;

			if (Double::TryParse(textBox_x_scale->Text, centre_x) && Double::TryParse(textBox_y_scale->Text, centre_y) &&
				Double::TryParse(textBox_kx_scale->Text, d_x) && Double::TryParse(textBox_ky_scale->Text, d_y)) {
				double min_x = 0;
				double min_y = 0;
				double max_x = 0;
				double max_y = 0;

				Double::TryParse(label_min_x->Text, min_x);
				Double::TryParse(label_min_y->Text, min_y);
				Double::TryParse(label_max_x->Text, max_x);
				Double::TryParse(label_max_y->Text, max_y);

				double left_x = centre_x - d_x * (centre_x - min_x);
				double right_x = centre_x + d_x * (max_x - centre_x);
				double upper_y = centre_y + d_y * (max_y - centre_y); 
				double douwn_y = centre_y - d_y * (centre_y - min_y);

				label_min_x->Text = left_x.ToString();
				label_min_y->Text = douwn_y.ToString();
				label_max_x->Text = right_x.ToString();
				label_max_y->Text = upper_y.ToString();

				double mid_x = (left_x + right_x) / 2;
				double mid_y = (douwn_y + upper_y) / 2;
				label_mid_x->Text = mid_x.ToString();
				label_mid_y->Text = mid_y.ToString();

				draw_All_Points();

				textBox_x_scale->Text = "";
				textBox_y_scale->Text = "";
				textBox_kx_scale->Text = "";
				textBox_ky_scale->Text = "";

				if (is_drawn) {
					List<myPoint^>^ triangle = find_Min_Height_Triangle();

					triangle_w_height_drawer(triangle);
				}
			}
			else {
				textBox_x_scale->Text = "";
				textBox_y_scale->Text = "";
				textBox_kx_scale->Text = "";
				textBox_ky_scale->Text = "";
				MessageBox::Show("Некорректный ввод!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
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

		//модуль разнности
		private: double my_abs(double a, double b) {
			return (a - b) > 0 ? a - b : b - a;
		}

		//удаление точки по координатам курсора
		private: System::Void delete_by_click(System::Void) {
			bool is_point = false;
			double now_x = 0;
			double now_y = 0;

			Double::TryParse(textBox_x_now->Text, now_x);
			Double::TryParse(textBox_y_now->Text, now_y);

			myPoint^ newPoint = gcnew myPoint(now_x, now_y);

			double min_x = 0;
			double min_y = 0;
			double max_x = 0;
			double max_y = 0;

			Double::TryParse(label_min_x->Text, min_x);
			Double::TryParse(label_min_y->Text, min_y);
			Double::TryParse(label_max_x->Text, max_x);
			Double::TryParse(label_max_y->Text, max_y);

			double x_now = max_x > min_x ? max_x - min_x : min_x - max_x;
			double y_now = max_y > min_y ? max_y - min_y : min_y - max_y;

			for each (myPoint ^ point in points) {
				if (my_abs(point->X, newPoint->X) <= x_now / surL * pointR && my_abs(point->Y, newPoint->Y) <= y_now / surL * pointR) {
					removePoint(point);
					is_point = true;
					break;
				}
			}

			if (is_point) {
				draw_All_Points();
				textBox_time->Text = "";
				is_drawn = false;
			}
		}

		//добавление точки по координатам курсора
		private: System::Void add_by_click(System::Void) {
			double now_x = 0;
			double now_y = 0;

			Double::TryParse(textBox_x_now->Text, now_x);
			Double::TryParse(textBox_y_now->Text, now_y);

			myPoint^ newPoint = gcnew myPoint(now_x, now_y);

			for each (myPoint ^ point in points) {
				if (point == newPoint)
				{
					MessageBox::Show("Точка уже принадлежит множеству!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			points->Add(newPoint);

			if (is_drawn) {
				draw_All_Points();
				textBox_time->Text = "";
				is_drawn = false;
			}
			else
				surface_Paint_Point(modifyPoint(newPoint));
		}

		//удаление точки нажатием на экран
		private: System::Void surface_MouseDown(Object^ sender, MouseEventArgs^ e) {
			if (e->Button == System::Windows::Forms::MouseButtons::Right) {
				delete_by_click();
			}
			else if (e->Button == System::Windows::Forms::MouseButtons::Left) {
				add_by_click();
			}
		}
		
		//удаление всех точек
		private: System::Void удалитьВсеТочкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			points->Clear();
			draw_All_Points();
		}
		
		//возвращение к начальному масштабу
		private: System::Void вернутьсяКНачальномуМасштабуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			label_min_x->Text = "-164,69466";
			label_min_y->Text = "-100";

			label_max_x->Text = "164,69466";
			label_max_y->Text = "100";

			label_mid_x->Text = "0";
			label_mid_y->Text = "0";

			draw_All_Points();
		}

		//расстояние между двумя точками 
		private: double dist(myPoint^ point1, myPoint^ point2) {
			double dx = point1->X - point2->X;
			double dy = point1->Y - point2->Y;
			return sqrt(dx * dx + dy * dy);
		}

		//модификация координат треугольника 
		private: List<myPoint^>^ triangle_modify(List<myPoint^>^ triangle) {
			List<myPoint^>^ triangle_new = gcnew List<myPoint^>();

			triangle_new->Add(modifyPoint(triangle[0]));
			triangle_new->Add(modifyPoint(triangle[1]));
			triangle_new->Add(modifyPoint(triangle[2]));

			return triangle_new;
		}

		//проверка, находятся ли три точки на одной прямой
		private: bool triangle_checker(List<myPoint^>^ triangle) {
			double vec_mul = (triangle[1]->X - triangle[0]->X) * (triangle[2]->Y - triangle[0]->Y) - 
				(triangle[2]->X - triangle[0]->X) * (triangle[1]->Y - triangle[0]->Y);

			return (vec_mul == 0);
		}

		//нахождение нужного треугольника
		private: List<myPoint^>^ find_Min_Height_Triangle(System::Void) {
			List<myPoint^>^ minTriangle = gcnew List<myPoint^>();
			List<myPoint^>^ checkTriangle = gcnew List<myPoint^>();
			double minMaxHeight = std::numeric_limits<double>::max();

			for (int i = 0; i < points->Count - 2; ++i) {
				for (int j = i + 1; j < points->Count - 1; ++j) {
					for (int k = j + 1; k < points->Count; ++k) {
						myPoint^ point1 = points[i];
						myPoint^ point2 = points[j];
						myPoint^ point3 = points[k];

						checkTriangle->Add(point1);
						checkTriangle->Add(point2);
						checkTriangle->Add(point3);

						if (triangle_checker(checkTriangle))
							break;

						double a = dist(point1, point2);
						double b = dist(point2, point3);
						double c = dist(point3, point1);

						//вычисляем площадь треугольника по формуле Герона
						double p = (a + b + c) / 2;
						double area = sqrt(p * (p - a) * (p - b) * (p - c));

						//вычисляем высоту треугольника как отношение удвоенной площади к основанию
						double height = 2 * area / std::min(std::min(a, b), c);

						if (height < minMaxHeight) {
							minMaxHeight = height;
							minTriangle->Clear();
							minTriangle->Add(point1);
							minTriangle->Add(point2);
							minTriangle->Add(point3);
						}
					}
				}
			}

			return minTriangle;
		}
			
		//рисование треугольника
		private: System::Void triangle_drawer(List<myPoint^>^ triangle_old) {
			Graphics^ g = surface->CreateGraphics();
			Pen^ boldPen = gcnew Pen(Color::Blue, 3.0f);

			List<myPoint^>^ triangle = gcnew List<myPoint^>();
			triangle = triangle_modify(triangle_old);

			float x1 = (float)triangle[0]->X;
			float y1 = (float)triangle[0]->Y;
			float x2 = (float)triangle[1]->X;
			float y2 = (float)triangle[1]->Y;
			float x3 = (float)triangle[2]->X;
			float y3 = (float)triangle[2]->Y;

			g->DrawLine(boldPen, x1, y1, x2, y2);
			g->DrawLine(boldPen, x1, y1, x3, y3);
			g->DrawLine(boldPen, x3, y3, x2, y2);
		}

		//нахлждение координат точки пересечения прямой и перпендикуляра
		private: myPoint^ intersection(myPoint^ point1, myPoint^ point2, myPoint^ point3) {
			myPoint^ newPoint = gcnew myPoint(0, 0);

			double k = (point2->Y - point3->Y) / (point2->X - point3->X);

			newPoint->X = ((k * point2->X + point1->X / k + point1->Y - point2->Y) / (k + 1 / k));
			newPoint->Y = (k * (newPoint->X - point2->X) + point2->Y);

			return newPoint;
		}

		//рисование максимальной высоты треугольника
		private: System::Void triangle_height_drawer(List<myPoint^>^ triangle_old) {
			Graphics^ g = surface->CreateGraphics();
			Pen^ boldPen = gcnew Pen(Color::Green, 3.0f);

			List<myPoint^>^ triangle = gcnew List<myPoint^>();
			triangle = triangle_modify(triangle_old);

			double a = dist(triangle[0], triangle[1]);
			double b = dist(triangle[1], triangle[2]);
			double c = dist(triangle[2], triangle[0]);

			double minSide = std::min(a, std::min(b, c));

			float x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
			myPoint^ newPoint = gcnew myPoint(0, 0);

			if (minSide == a) {
				x1 = (float)triangle[2]->X;
				y1 = (float)triangle[2]->Y;

				newPoint = intersection(triangle[2], triangle[0], triangle[1]);
			}
			else if (minSide == b) {
				x1 = (float)triangle[0]->X;
				y1 = (float)triangle[0]->Y;

				newPoint = intersection(triangle[0], triangle[1], triangle[2]);
			}
			else {
				x1 = (float)triangle[1]->X;
				y1 = (float)triangle[1]->Y;

				newPoint = intersection(triangle[1], triangle[0], triangle[2]);
			}

			double xBase = (double)newPoint->X;
			double yBase = (double)newPoint->Y;

			g->DrawLine(boldPen, x1, y1, xBase, yBase);
		}

		//рисование треугольника с высотой
		private: System::Void triangle_w_height_drawer(List<myPoint^>^ triangle) {
			triangle_drawer(triangle);
			triangle_height_drawer(triangle);
		}

		//нахождение треугольника
		private: System::Void triangle_finder(System::Void) {
			List<myPoint^>^ triangle = find_Min_Height_Triangle();

			if (is_drawn) {
				draw_All_Points();
				textBox_time->Text = "";
			}

			if (triangle->Count == 0)
			{
				MessageBox::Show("Треугольник не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			triangle_w_height_drawer(triangle);
			is_drawn = true;
		}

		//нахождение треугольника при нажатии на кнопку
		private: System::Void button_triangle_finder_Click(System::Object^ sender, System::EventArgs^ e) {
			Stopwatch^ stopwatch = gcnew Stopwatch();
			stopwatch->Start();

			triangle_finder();

			stopwatch->Stop();
			textBox_time->Text = (stopwatch->ElapsedMilliseconds).ToString();
		}

		//нахождение треугольника при нажатии на кнопку в меню
		private: System::Void найтиТреугольникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Stopwatch^ stopwatch = gcnew Stopwatch();
			stopwatch->Start();

			triangle_finder();

			stopwatch->Stop();
			textBox_time->Text = (stopwatch->ElapsedMilliseconds).ToString();
		}
	};
}
