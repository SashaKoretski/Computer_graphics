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
	using namespace System::Windows::Forms::DataVisualization::Charting;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			InitializeChart_time();
			InitializeChart_step();
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























	private: System::Windows::Forms::PictureBox^ pictureBox_menu;
	private: System::Windows::Forms::PictureBox^ pictureBox_left;



	private: System::Windows::Forms::PictureBox^ pictureBox_right;
	private: System::Windows::Forms::PictureBox^ pictureBox_down;


	private: System::Windows::Forms::PictureBox^ pictureBox_up;




	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ surface;
	private: System::Windows::Forms::TextBox^ textBox_length;

	private: System::Windows::Forms::Label^ label_angle;





	private: System::Windows::Forms::Label^ label_length;
	private: System::Windows::Forms::TextBox^ textBox_angle;




	private: System::Windows::Forms::Button^ button_spectr_draw;

	private: System::Windows::Forms::Label^ label_spectr_draw;



















	private: const int surH = 524;
	private: const int surL = 863;
	private: Color MyColor = Color::Red;
	private: style MyStyle = error;




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


private: System::Windows::Forms::TextBox^ textBox_time;
private: System::Windows::Forms::Label^ label_sec;
private: System::Windows::Forms::Label^ label_T;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::TextBox^ textBox_y_beg;

private: System::Windows::Forms::Label^ label_y_end;


private: System::Windows::Forms::Label^ label_y_beg;
private: System::Windows::Forms::TextBox^ textBox_y_end;



private: System::Windows::Forms::TextBox^ textBox_x_beg;



private: System::Windows::Forms::Label^ label_x_end;


private: System::Windows::Forms::Label^ label_x_beg;
private: System::Windows::Forms::TextBox^ textBox_x_end;
private: System::Windows::Forms::Button^ button_draw;




private: System::Windows::Forms::Label^ label_draw;












private: System::Windows::Forms::Label^ label_font_color;

private: System::Windows::Forms::Label^ label_line_color;







private: System::Windows::Forms::Label^ label_color;




















private: System::Windows::Forms::Label^ label_alg;





private: PointF^ pt_0 = gcnew PointF(0, 0);
private: System::Windows::Forms::CheckBox^ checkBox_cda;
private: System::Windows::Forms::CheckBox^ checkBox_bres_deist;
private: System::Windows::Forms::CheckBox^ checkBox_bres_cel;
private: System::Windows::Forms::CheckBox^ checkBox_bres_stup;
private: System::Windows::Forms::CheckBox^ checkBox_by;
private: System::Windows::Forms::CheckBox^ checkBox_lib;
private: System::Windows::Forms::ToolStripMenuItem^ очиститьЭкранToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ исследоватьВременнуюХарактеристикуToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ исследоватьСтупенчатостьОтрезковToolStripMenuItem;
private: System::Windows::Forms::Button^ button_line_color;
private: System::Windows::Forms::Button^ button_color_font;
private: System::Windows::Forms::Button^ button_clear;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_time;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_step;











	   










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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->btn_collapce = (gcnew System::Windows::Forms::Button());
			this->menu_strip = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьЭкранToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->условиеЗадачиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструкцияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обАвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox_menu = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_left = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_right = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_down = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_up = (gcnew System::Windows::Forms::PictureBox());
			this->surface = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_length = (gcnew System::Windows::Forms::TextBox());
			this->label_angle = (gcnew System::Windows::Forms::Label());
			this->label_length = (gcnew System::Windows::Forms::Label());
			this->textBox_angle = (gcnew System::Windows::Forms::TextBox());
			this->button_spectr_draw = (gcnew System::Windows::Forms::Button());
			this->label_spectr_draw = (gcnew System::Windows::Forms::Label());
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
			this->textBox_y_beg = (gcnew System::Windows::Forms::TextBox());
			this->label_y_end = (gcnew System::Windows::Forms::Label());
			this->label_y_beg = (gcnew System::Windows::Forms::Label());
			this->textBox_y_end = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x_beg = (gcnew System::Windows::Forms::TextBox());
			this->label_x_end = (gcnew System::Windows::Forms::Label());
			this->label_x_beg = (gcnew System::Windows::Forms::Label());
			this->textBox_x_end = (gcnew System::Windows::Forms::TextBox());
			this->button_draw = (gcnew System::Windows::Forms::Button());
			this->label_draw = (gcnew System::Windows::Forms::Label());
			this->label_font_color = (gcnew System::Windows::Forms::Label());
			this->label_line_color = (gcnew System::Windows::Forms::Label());
			this->label_color = (gcnew System::Windows::Forms::Label());
			this->label_alg = (gcnew System::Windows::Forms::Label());
			this->checkBox_cda = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_bres_deist = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_bres_cel = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_bres_stup = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_by = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_lib = (gcnew System::Windows::Forms::CheckBox());
			this->button_line_color = (gcnew System::Windows::Forms::Button());
			this->button_color_font = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->chart_time = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_step = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menu_strip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_left))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_right))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_down))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_up))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->surface))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_now))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_time))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_step))->BeginInit();
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
			this->label_title->Text = L"Лабораторная по компьютерной графике №3";
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
				this->очиститьЭкранToolStripMenuItem,
					this->исследоватьВременнуюХарактеристикуToolStripMenuItem, this->исследоватьСтупенчатостьОтрезковToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem2->Text = L"Действия";
			// 
			// очиститьЭкранToolStripMenuItem
			// 
			this->очиститьЭкранToolStripMenuItem->Name = L"очиститьЭкранToolStripMenuItem";
			this->очиститьЭкранToolStripMenuItem->Size = System::Drawing::Size(339, 22);
			this->очиститьЭкранToolStripMenuItem->Text = L"Очистить экран";
			this->очиститьЭкранToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// исследоватьВременнуюХарактеристикуToolStripMenuItem
			// 
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Name = L"исследоватьВременнуюХарактеристикуToolStripMenuItem";
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Size = System::Drawing::Size(339, 22);
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Text = L"Исследовать временную характеристику";
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::исследоватьВременнуюХарактеристикуToolStripMenuItem_Click);
			// 
			// исследоватьСтупенчатостьОтрезковToolStripMenuItem
			// 
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem->Name = L"исследоватьСтупенчатостьОтрезковToolStripMenuItem";
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem->Size = System::Drawing::Size(339, 22);
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem->Text = L"Исследовать ступенчатость отрезков";
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::исследоватьСтупенчатостьОтрезковToolStripMenuItem_Click);
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
			this->surface->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::surface_MouseMove);
			// 
			// textBox_length
			// 
			this->textBox_length->Location = System::Drawing::Point(983, 451);
			this->textBox_length->Name = L"textBox_length";
			this->textBox_length->Size = System::Drawing::Size(52, 20);
			this->textBox_length->TabIndex = 32;
			this->textBox_length->Text = L"50";
			// 
			// label_angle
			// 
			this->label_angle->AutoSize = true;
			this->label_angle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_angle->Location = System::Drawing::Point(945, 480);
			this->label_angle->Name = L"label_angle";
			this->label_angle->Size = System::Drawing::Size(32, 13);
			this->label_angle->TabIndex = 31;
			this->label_angle->Text = L"Угол";
			// 
			// label_length
			// 
			this->label_length->AutoSize = true;
			this->label_length->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_length->Location = System::Drawing::Point(945, 454);
			this->label_length->Name = L"label_length";
			this->label_length->Size = System::Drawing::Size(40, 13);
			this->label_length->TabIndex = 30;
			this->label_length->Text = L"Длина";
			// 
			// textBox_angle
			// 
			this->textBox_angle->Location = System::Drawing::Point(983, 477);
			this->textBox_angle->Name = L"textBox_angle";
			this->textBox_angle->Size = System::Drawing::Size(52, 20);
			this->textBox_angle->TabIndex = 29;
			this->textBox_angle->Text = L"15";
			// 
			// button_spectr_draw
			// 
			this->button_spectr_draw->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_spectr_draw->Location = System::Drawing::Point(944, 503);
			this->button_spectr_draw->Name = L"button_spectr_draw";
			this->button_spectr_draw->Size = System::Drawing::Size(143, 35);
			this->button_spectr_draw->TabIndex = 28;
			this->button_spectr_draw->Text = L"Нарисовать";
			this->button_spectr_draw->UseVisualStyleBackColor = true;
			this->button_spectr_draw->Click += gcnew System::EventHandler(this, &MyForm::button_spectr_draw_Click);
			// 
			// label_spectr_draw
			// 
			this->label_spectr_draw->AutoSize = true;
			this->label_spectr_draw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_spectr_draw->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_spectr_draw->Location = System::Drawing::Point(992, 424);
			this->label_spectr_draw->Name = L"label_spectr_draw";
			this->label_spectr_draw->Size = System::Drawing::Size(177, 24);
			this->label_spectr_draw->TabIndex = 27;
			this->label_spectr_draw->Text = L"Нарисовать спектр";
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
			this->label_x_main->Location = System::Drawing::Point(940, 351);
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
			// textBox_y_beg
			// 
			this->textBox_y_beg->Location = System::Drawing::Point(1086, 235);
			this->textBox_y_beg->Name = L"textBox_y_beg";
			this->textBox_y_beg->Size = System::Drawing::Size(52, 20);
			this->textBox_y_beg->TabIndex = 62;
			this->textBox_y_beg->Text = L"0";
			// 
			// label_y_end
			// 
			this->label_y_end->AutoSize = true;
			this->label_y_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_end->Location = System::Drawing::Point(1066, 264);
			this->label_y_end->Name = L"label_y_end";
			this->label_y_end->Size = System::Drawing::Size(20, 13);
			this->label_y_end->TabIndex = 61;
			this->label_y_end->Text = L"Yк";
			// 
			// label_y_beg
			// 
			this->label_y_beg->AutoSize = true;
			this->label_y_beg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_beg->Location = System::Drawing::Point(1066, 238);
			this->label_y_beg->Name = L"label_y_beg";
			this->label_y_beg->Size = System::Drawing::Size(20, 13);
			this->label_y_beg->TabIndex = 60;
			this->label_y_beg->Text = L"Yн";
			// 
			// textBox_y_end
			// 
			this->textBox_y_end->Location = System::Drawing::Point(1086, 261);
			this->textBox_y_end->Name = L"textBox_y_end";
			this->textBox_y_end->Size = System::Drawing::Size(52, 20);
			this->textBox_y_end->TabIndex = 59;
			this->textBox_y_end->Text = L"50";
			// 
			// textBox_x_beg
			// 
			this->textBox_x_beg->Location = System::Drawing::Point(964, 235);
			this->textBox_x_beg->Name = L"textBox_x_beg";
			this->textBox_x_beg->Size = System::Drawing::Size(52, 20);
			this->textBox_x_beg->TabIndex = 58;
			this->textBox_x_beg->Text = L"0";
			// 
			// label_x_end
			// 
			this->label_x_end->AutoSize = true;
			this->label_x_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_end->Location = System::Drawing::Point(944, 264);
			this->label_x_end->Name = L"label_x_end";
			this->label_x_end->Size = System::Drawing::Size(20, 13);
			this->label_x_end->TabIndex = 57;
			this->label_x_end->Text = L"Xк";
			// 
			// label_x_beg
			// 
			this->label_x_beg->AutoSize = true;
			this->label_x_beg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_beg->Location = System::Drawing::Point(944, 238);
			this->label_x_beg->Name = L"label_x_beg";
			this->label_x_beg->Size = System::Drawing::Size(20, 13);
			this->label_x_beg->TabIndex = 56;
			this->label_x_beg->Text = L"Xн";
			// 
			// textBox_x_end
			// 
			this->textBox_x_end->Location = System::Drawing::Point(964, 261);
			this->textBox_x_end->Name = L"textBox_x_end";
			this->textBox_x_end->Size = System::Drawing::Size(52, 20);
			this->textBox_x_end->TabIndex = 55;
			this->textBox_x_end->Text = L"50";
			// 
			// button_draw
			// 
			this->button_draw->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_draw->Location = System::Drawing::Point(943, 290);
			this->button_draw->Name = L"button_draw";
			this->button_draw->Size = System::Drawing::Size(143, 35);
			this->button_draw->TabIndex = 54;
			this->button_draw->Text = L"Нарисовать";
			this->button_draw->UseVisualStyleBackColor = true;
			this->button_draw->Click += gcnew System::EventHandler(this, &MyForm::button_draw_Click);
			// 
			// label_draw
			// 
			this->label_draw->AutoSize = true;
			this->label_draw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_draw->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_draw->Location = System::Drawing::Point(991, 208);
			this->label_draw->Name = L"label_draw";
			this->label_draw->Size = System::Drawing::Size(187, 24);
			this->label_draw->TabIndex = 53;
			this->label_draw->Text = L"Нарисовать отрезок";
			// 
			// label_font_color
			// 
			this->label_font_color->AutoSize = true;
			this->label_font_color->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_font_color->Location = System::Drawing::Point(945, 403);
			this->label_font_color->Name = L"label_font_color";
			this->label_font_color->Size = System::Drawing::Size(61, 13);
			this->label_font_color->TabIndex = 67;
			this->label_font_color->Text = L"Цвет фона";
			// 
			// label_line_color
			// 
			this->label_line_color->AutoSize = true;
			this->label_line_color->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_line_color->Location = System::Drawing::Point(945, 377);
			this->label_line_color->Name = L"label_line_color";
			this->label_line_color->Size = System::Drawing::Size(65, 13);
			this->label_line_color->TabIndex = 66;
			this->label_line_color->Text = L"Цвет линии";
			// 
			// label_color
			// 
			this->label_color->AutoSize = true;
			this->label_color->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_color->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_color->Location = System::Drawing::Point(992, 347);
			this->label_color->Name = L"label_color";
			this->label_color->Size = System::Drawing::Size(129, 24);
			this->label_color->TabIndex = 63;
			this->label_color->Text = L"Выбрать цвет";
			// 
			// label_alg
			// 
			this->label_alg->AutoSize = true;
			this->label_alg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_alg->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_alg->Location = System::Drawing::Point(992, 93);
			this->label_alg->Name = L"label_alg";
			this->label_alg->Size = System::Drawing::Size(164, 24);
			this->label_alg->TabIndex = 73;
			this->label_alg->Text = L"Выбор алгоритма";
			// 
			// checkBox_cda
			// 
			this->checkBox_cda->AutoSize = true;
			this->checkBox_cda->Location = System::Drawing::Point(1089, 189);
			this->checkBox_cda->Name = L"checkBox_cda";
			this->checkBox_cda->Size = System::Drawing::Size(50, 17);
			this->checkBox_cda->TabIndex = 75;
			this->checkBox_cda->Text = L"ЦДА";
			this->checkBox_cda->UseVisualStyleBackColor = true;
			this->checkBox_cda->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_cda_CheckedChanged);
			// 
			// checkBox_bres_deist
			// 
			this->checkBox_bres_deist->AutoSize = true;
			this->checkBox_bres_deist->Location = System::Drawing::Point(944, 120);
			this->checkBox_bres_deist->Name = L"checkBox_bres_deist";
			this->checkBox_bres_deist->Size = System::Drawing::Size(235, 17);
			this->checkBox_bres_deist->TabIndex = 76;
			this->checkBox_bres_deist->Text = L"Брезенхем с действительными данными";
			this->checkBox_bres_deist->UseVisualStyleBackColor = true;
			this->checkBox_bres_deist->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_bres_deist_CheckedChanged);
			// 
			// checkBox_bres_cel
			// 
			this->checkBox_bres_cel->AutoSize = true;
			this->checkBox_bres_cel->Location = System::Drawing::Point(944, 143);
			this->checkBox_bres_cel->Name = L"checkBox_bres_cel";
			this->checkBox_bres_cel->Size = System::Drawing::Size(230, 17);
			this->checkBox_bres_cel->TabIndex = 77;
			this->checkBox_bres_cel->Text = L"Брезенхем с целочисленными данными";
			this->checkBox_bres_cel->UseVisualStyleBackColor = true;
			this->checkBox_bres_cel->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_bres_cel_CheckedChanged);
			// 
			// checkBox_bres_stup
			// 
			this->checkBox_bres_stup->AutoSize = true;
			this->checkBox_bres_stup->Location = System::Drawing::Point(944, 166);
			this->checkBox_bres_stup->Name = L"checkBox_bres_stup";
			this->checkBox_bres_stup->Size = System::Drawing::Size(236, 17);
			this->checkBox_bres_stup->TabIndex = 78;
			this->checkBox_bres_stup->Text = L"Брезенхем с устранением ступенчатости";
			this->checkBox_bres_stup->UseVisualStyleBackColor = true;
			this->checkBox_bres_stup->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_bres_stup_CheckedChanged);
			// 
			// checkBox_by
			// 
			this->checkBox_by->AutoSize = true;
			this->checkBox_by->Location = System::Drawing::Point(1145, 189);
			this->checkBox_by->Name = L"checkBox_by";
			this->checkBox_by->Size = System::Drawing::Size(38, 17);
			this->checkBox_by->TabIndex = 79;
			this->checkBox_by->Text = L"By";
			this->checkBox_by->UseVisualStyleBackColor = true;
			this->checkBox_by->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_by_CheckedChanged);
			// 
			// checkBox_lib
			// 
			this->checkBox_lib->AutoSize = true;
			this->checkBox_lib->Location = System::Drawing::Point(944, 189);
			this->checkBox_lib->Name = L"checkBox_lib";
			this->checkBox_lib->Size = System::Drawing::Size(143, 17);
			this->checkBox_lib->TabIndex = 80;
			this->checkBox_lib->Text = L"Библиотечная функция";
			this->checkBox_lib->UseVisualStyleBackColor = true;
			this->checkBox_lib->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_lib_CheckedChanged);
			// 
			// button_line_color
			// 
			this->button_line_color->Location = System::Drawing::Point(1023, 373);
			this->button_line_color->Name = L"button_line_color";
			this->button_line_color->Size = System::Drawing::Size(64, 21);
			this->button_line_color->TabIndex = 81;
			this->button_line_color->Text = L"Выбрать";
			this->button_line_color->UseVisualStyleBackColor = true;
			this->button_line_color->Click += gcnew System::EventHandler(this, &MyForm::button_line_color_Click);
			// 
			// button_color_font
			// 
			this->button_color_font->Location = System::Drawing::Point(1023, 400);
			this->button_color_font->Name = L"button_color_font";
			this->button_color_font->Size = System::Drawing::Size(64, 21);
			this->button_color_font->TabIndex = 82;
			this->button_color_font->Text = L"Выбрать";
			this->button_color_font->UseVisualStyleBackColor = true;
			this->button_color_font->Click += gcnew System::EventHandler(this, &MyForm::button_color_font_Click);
			// 
			// button_clear
			// 
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clear->Location = System::Drawing::Point(944, 582);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(143, 35);
			this->button_clear->TabIndex = 83;
			this->button_clear->Text = L"Очистить";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// chart_time
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart_time->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart_time->Legends->Add(legend1);
			this->chart_time->Location = System::Drawing::Point(60, 93);
			this->chart_time->Name = L"chart_time";
			this->chart_time->Size = System::Drawing::Size(863, 524);
			this->chart_time->TabIndex = 84;
			this->chart_time->Text = L"Временная характеристика";
			this->chart_time->Visible = false;
			// 
			// chart_step
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_step->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart_step->Legends->Add(legend2);
			this->chart_step->Location = System::Drawing::Point(60, 93);
			this->chart_step->Name = L"chart_step";
			this->chart_step->Size = System::Drawing::Size(863, 524);
			this->chart_step->TabIndex = 85;
			this->chart_step->Text = L"Временная характеристика";
			this->chart_step->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->ClientSize = System::Drawing::Size(1200, 675);
			this->Controls->Add(this->chart_step);
			this->Controls->Add(this->chart_time);
			this->Controls->Add(this->surface);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_color_font);
			this->Controls->Add(this->button_line_color);
			this->Controls->Add(this->checkBox_lib);
			this->Controls->Add(this->checkBox_by);
			this->Controls->Add(this->checkBox_bres_stup);
			this->Controls->Add(this->checkBox_bres_cel);
			this->Controls->Add(this->checkBox_bres_deist);
			this->Controls->Add(this->checkBox_cda);
			this->Controls->Add(this->label_alg);
			this->Controls->Add(this->label_font_color);
			this->Controls->Add(this->label_line_color);
			this->Controls->Add(this->label_color);
			this->Controls->Add(this->textBox_y_beg);
			this->Controls->Add(this->label_y_end);
			this->Controls->Add(this->label_y_beg);
			this->Controls->Add(this->textBox_y_end);
			this->Controls->Add(this->textBox_x_beg);
			this->Controls->Add(this->label_x_end);
			this->Controls->Add(this->label_x_beg);
			this->Controls->Add(this->textBox_x_end);
			this->Controls->Add(this->button_draw);
			this->Controls->Add(this->label_draw);
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
			this->Controls->Add(this->textBox_length);
			this->Controls->Add(this->label_angle);
			this->Controls->Add(this->label_length);
			this->Controls->Add(this->textBox_angle);
			this->Controls->Add(this->button_spectr_draw);
			this->Controls->Add(this->label_spectr_draw);
			this->Controls->Add(this->pictureBox_up);
			this->Controls->Add(this->pictureBox_down);
			this->Controls->Add(this->pictureBox_right);
			this->Controls->Add(this->pictureBox_left);
			this->Controls->Add(this->btn_collapce);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->menu_strip);
			this->Controls->Add(this->pictureBox_now);
			this->Controls->Add(this->pictureBox_menu);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_time))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_step))->EndInit();
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
				"\nРисование отрезка:\n\n"
				"\tЧтобы нарисовать отрезок, нужно набрать с клавиатуры координаты начала и конца отрезка.\n"
				"\nРисование спектра:\n\n"
				"\tЧтобы нарисовать спектр, нужно выбрать длину отрезка и угл поворота.\n"
				"\nСмена цвета:\n\n"
				"\tЧтобы сменить цвет, нужно нажать на кнопку выбора цвета. После смены цвета фона все линии затираются.\n"
				"\nВывод графиков:\n\n"
				"\tЧтобы посмотреть графики временной характеристики и анализа ступенчатости, нужно нажать на соответствующие"
				"пункты меню в разделе \"Действия\".\n\n"
				"\nОчистка полотна:\n\n"
				"\tЧтобы очистить полотно, в том числе и от графиков, можно нажать на кнопку очистить на экране либо"
				"пункты меню в разделе \"Действия\".\n\n"
				,
				"Инструкция");
		}

		//об авторе
		private: System::Void обАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Корецкий Александр \nГруппа ИУ7-45Б", "Об авторе");
		}

		//условие
		private: System::Void условиеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Реализовать алгоритмы рисования отрезка и провести анализ временной характеристики и ступенчатости отрезков.",
				"Условие задачи №3");
		}

		//преобразование координат точки к координатам на экранее
		private: PointF^ modifyPoint(PointF^ point) {
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

			double new_x = (double)((point->X - min_x) * kX);
			double new_y = (double)((max_y - point->Y) * kY);
			PointF^ res = gcnew PointF(new_x, new_y);

			return res;
		}

		//преобразование координат на экране к координатам точки
		private: PointF^ modifyPoint_from_real(PointF^ point) {
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
			PointF^ res = gcnew PointF(new_x, new_y);

			return res;
		}

		//отображение координат в реальном времени
		private: System::Void surface_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			double x_now = e->X;
			double y_now = e->Y;

			PointF^ real = gcnew PointF(x_now, y_now);
			PointF^ res = gcnew PointF(0, 0);

			res = modifyPoint_from_real(real);

			textBox_x_now->Text = res->X.ToString();
			textBox_y_now->Text = res->Y.ToString();
		}

		//модуль разнности
		private: double my_abs(double a, double b) {
			return (a - b) > 0 ? a - b : b - a;
		}

		//расстояние между двумя точками 
		private: double dist(PointF^ point1, PointF^ point2) {
			double dx = point1->X - point2->X;
			double dy = point1->Y - point2->Y;
			return sqrt(dx * dx + dy * dy);
		}

	    // обработчик событий
		private: System::Void checkBox_bres_deist_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_bres_deist->Checked) {
			checkBox_bres_cel->Checked = false;
			checkBox_bres_stup->Checked = false;
			checkBox_lib->Checked = false;
			checkBox_cda->Checked = false;
			checkBox_by->Checked = false;
			MyStyle = Bres_fl;
			}
		}

		private: System::Void checkBox_bres_cel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_bres_cel->Checked) {
				checkBox_bres_deist->Checked = false;
				checkBox_bres_stup->Checked = false;
				checkBox_lib->Checked = false;
				checkBox_cda->Checked = false;
				checkBox_by->Checked = false;
				MyStyle = Bres_int;
			}
		}

		private: System::Void checkBox_bres_stup_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_bres_stup->Checked) {
				checkBox_bres_cel->Checked = false;
				checkBox_bres_deist->Checked = false;
				checkBox_lib->Checked = false;
				checkBox_cda->Checked = false;
				checkBox_by->Checked = false;
				MyStyle = Bres_st;
			}
		}

		private: System::Void checkBox_lib_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_lib->Checked) {
				checkBox_bres_cel->Checked = false;
				checkBox_bres_stup->Checked = false;
				checkBox_bres_deist->Checked = false;
				checkBox_cda->Checked = false;
				checkBox_by->Checked = false;
				MyStyle = lib;
			}
		}

		private: System::Void checkBox_cda_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_cda->Checked) {
				checkBox_bres_cel->Checked = false;
				checkBox_bres_stup->Checked = false;
				checkBox_lib->Checked = false;
				checkBox_bres_deist->Checked = false;
				checkBox_by->Checked = false;
				MyStyle = CDA;
			}
		}

		private: System::Void checkBox_by_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_by->Checked) {
				checkBox_bres_cel->Checked = false;
				checkBox_bres_stup->Checked = false;
				checkBox_lib->Checked = false;
				checkBox_cda->Checked = false;
				checkBox_bres_deist->Checked = false;
				MyStyle = By;
			}
		}

		//рисование отрезка
		private: void line_draw(Line^ line, Graphics^ g) {
			chart_step->Visible = false;
			chart_time->Visible = false;

			switch (MyStyle)
			{
			case error:
				break;
			case CDA:
				line->CDA(g, MyColor);
				break;
			case Bres_fl:
				line->Bres_float(g, MyColor);
				break;
			case Bres_int:
				line->Bres_int(g, MyColor);
				break;
			case Bres_st:
				line->Bres_step(g, MyColor);
				break;
			case By:
				line->By(g, MyColor);
				break;
			case lib:
				line->lib(g, MyColor);
				break;
			default:
				break;
			}
		}

		//рисование отрезка по координатам
		private: System::Void button_draw_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_beg = 0;
			double y_beg = 0;
			double x_end = 0;
			double y_end = 0;
			unsigned int start_time = clock();

			if (Double::TryParse(textBox_x_beg->Text, x_beg) && Double::TryParse(textBox_y_beg->Text, y_beg) &&
				Double::TryParse(textBox_x_end->Text, x_end) && Double::TryParse(textBox_y_end->Text, y_end)) {
				PointF^ beg = gcnew PointF(x_beg, y_beg);
				PointF^ end = gcnew PointF(x_end, y_end);

				PointF^ beg_real = gcnew PointF(0, 0);
				PointF^ end_real = gcnew PointF(0, 0);

				beg_real = modifyPoint(beg);
				end_real = modifyPoint(end);

				Graphics^ g = surface->CreateGraphics();
				
				Line^ line = gcnew Line();
				line->beg = beg_real;
				line->end = end_real;

				line_draw(line, g);
			}
			else {
				MessageBox::Show("Некорректный ввод!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			textBox_time->Text = search_time.ToString();
		}
		
		//выбор цвета фона
		private: System::Void button_color_font_Click(System::Object^ sender, System::EventArgs^ e) {
			ColorDialog^ colorDialog = gcnew ColorDialog();

			if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				surface->BackColor = colorDialog->Color;
			}
		}

		//выбоц цвета линии
		private: System::Void button_line_color_Click(System::Object^ sender, System::EventArgs^ e) {
			ColorDialog^ colorDialog = gcnew ColorDialog();

			if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				MyColor = colorDialog->Color;
			}
		}
		
		//рисование спектра
		private: System::Void button_spectr_draw_Click(System::Object^ sender, System::EventArgs^ e) {
			chart_step->Visible = false;
			chart_time->Visible = false;

			double len = 0;
			double alp = 0;
			unsigned int start_time = clock();

			if (Double::TryParse(textBox_length->Text, len) && Double::TryParse(textBox_angle->Text, alp)) {
				if (alp <= 0) {
					MessageBox::Show("Некорректный ввод угла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				PointF^ beg = gcnew PointF(0, 0);
				PointF^ end = gcnew PointF(0, len);

				PointF^ beg_real = gcnew PointF(0, 0);
				PointF^ end_real = gcnew PointF(0, 0);

				beg_real = modifyPoint(beg);
				end_real = modifyPoint(end);

				Graphics^ g = surface->CreateGraphics();

				Line^ line = gcnew Line();
				line->beg = beg_real;
				line->end = end_real;

				for (double ang_now = 0; ang_now < 360; ang_now += alp) {
					line_draw(line, g);

					line->rotate(alp);
				}
			}
			else {
				MessageBox::Show("Некорректный ввод!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			textBox_time->Text = search_time.ToString();
		}
		
		//очистка полотна и стилей
		private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
			surface->BackColor = Color::Black;
			surface->BackColor = Color::White;
			MyColor = Color::Red;

			chart_time->Visible = false;
			chart_step->Visible = false;
		}

		//рассчет времени
		private: unsigned int CDU_count_time() {
			PointF^ beg_real = gcnew PointF(0, 0);
			PointF^ end_real = gcnew PointF(0, 100);

			Line^ line = gcnew Line();
			line->beg = beg_real;
			line->end = end_real;

			Graphics^ g = surface->CreateGraphics();

			double alp = 1;
			unsigned int start_time = clock();

			for (double ang_now = 0; ang_now < 360; ang_now += alp) {
				line->CDA(g, MyColor);

				line->rotate(alp);
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int Bres_int_count_time() {
			PointF^ beg_real = gcnew PointF(0, 0);
			PointF^ end_real = gcnew PointF(0, 100);

			Line^ line = gcnew Line();
			line->beg = beg_real;
			line->end = end_real;

			Graphics^ g = surface->CreateGraphics();

			double alp = 1;
			unsigned int start_time = clock();

			for (double ang_now = 0; ang_now < 360; ang_now += alp) {
				line->Bres_int(g, MyColor);

				line->rotate(alp);
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int Bres_f_count_time() {
			PointF^ beg_real = gcnew PointF(0, 0);
			PointF^ end_real = gcnew PointF(0, 100);

			Line^ line = gcnew Line();
			line->beg = beg_real;
			line->end = end_real;

			Graphics^ g = surface->CreateGraphics();

			double alp = 1;
			unsigned int start_time = clock();

			for (double ang_now = 0; ang_now < 360; ang_now += alp) {
				line->Bres_float(g, MyColor);

				line->rotate(alp);
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int Bres_step_count_time() {
			PointF^ beg_real = gcnew PointF(0, 0);
			PointF^ end_real = gcnew PointF(0, 100);

			Line^ line = gcnew Line();
			line->beg = beg_real;
			line->end = end_real;

			Graphics^ g = surface->CreateGraphics();

			double alp = 1;
			unsigned int start_time = clock();

			for (double ang_now = 0; ang_now < 360; ang_now += alp) {
				line->Bres_step(g, MyColor);

				line->rotate(alp);
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int By_count_time() {
			PointF^ beg_real = gcnew PointF(0, 0);
			PointF^ end_real = gcnew PointF(0, 100);

			Line^ line = gcnew Line();
			line->beg = beg_real;
			line->end = end_real;

			Graphics^ g = surface->CreateGraphics();

			double alp = 1;
			unsigned int start_time = clock();

			for (double ang_now = 0; ang_now < 360; ang_now += alp) {
				line->By(g, MyColor);

				line->rotate(alp);
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int lib_count_time() {
			PointF^ beg_real = gcnew PointF(0, 0);
			PointF^ end_real = gcnew PointF(0, 100);

			Line^ line = gcnew Line();
			line->beg = beg_real;
			line->end = end_real;

			Graphics^ g = surface->CreateGraphics();

			double alp = 1;
			unsigned int start_time = clock();

			for (double ang_now = 0; ang_now < 360; ang_now += alp) {
				line->lib(g, MyColor);

				line->rotate(alp);
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		//инициализация временной характеристики
		private: void InitializeChart_time() {
			ChartArea^ chartArea1 = gcnew ChartArea();
			chart_time->ChartAreas->Add(chartArea1);

			Series^ series1 = gcnew Series();
			series1->Name = "Алгоритмы";

			series1->Points->AddXY("ЦДУ", CDU_count_time());
			series1->Points->AddXY("Брезенхем с действ. д.", Bres_int_count_time());
			series1->Points->AddXY("Брезенхем с цел. д.", Bres_f_count_time());
			series1->Points->AddXY("Брезенхем с устран. ступ.", Bres_step_count_time());
			series1->Points->AddXY("Ву", By_count_time());
			series1->Points->AddXY("Библиотечная", lib_count_time());

			chartArea1->AxisX->Title = "Время (мс)";

			chart_time->Series->Add(series1);

			series1->ChartType = SeriesChartType::Column;
		}

		//вывод временной характеристики
		private: System::Void исследоватьВременнуюХарактеристикуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			chart_time->Visible = true;
			chart_time->BringToFront();
		}

		//инициализация характеристики ступенчатости
		private: void InitializeChart_step() {
			ChartArea^ chartArea1 = gcnew ChartArea();
			chart_step->ChartAreas->Add(chartArea1);
			
			Graphics^ g = surface->CreateGraphics();


			PointF^ beg_real = gcnew PointF(0, 0);
			PointF^ end_real = gcnew PointF(0, 100);

			Line^ line = gcnew Line();
			line->beg = beg_real;
			line->end = end_real;
			
			//ЦДА
			Series^ series1 = gcnew Series();
			series1->Name = String::Format("ЦДА", 0);
			series1->ChartType = SeriesChartType::Line;

			for (int i = 1; i <= 90; i ++) {
				int st = line->CDA(g, MyColor);
				series1->Points->AddXY(i, st);

				line->rotate(1);
			}

			chart_step->Series->Add(series1);

			//Брез действ
			Series^ series2 = gcnew Series();
			series2->Name = String::Format("Брезенхем с действ. д.", 0);
			series2->ChartType = SeriesChartType::Line;

			for (int i = 1; i <= 90; i++) {
				int st = line->Bres_float(g, MyColor);
				series2->Points->AddXY(i, st);

				line->rotate(1);
			}

			chart_step->Series->Add(series2);

			//Брез цел
			Series^ series3 = gcnew Series();
			series3->Name = String::Format("Брезенхем с цел. д.", 0);
			series3->ChartType = SeriesChartType::Line;

			for (int i = 1; i <= 90; i++) {
				int st = line->Bres_int(g, MyColor);
				series3->Points->AddXY(i, st);

				line->rotate(1);
			}

			chart_step->Series->Add(series3);

			//Брез с устран ступ
			Series^ series4 = gcnew Series();
			series4->Name = String::Format("Брезенхем с устран. ступ.", 0);
			series4->ChartType = SeriesChartType::Line;

			for (int i = 1; i <= 90; i++) {
				int st = line->Bres_step(g, MyColor);
				series4->Points->AddXY(i, st);

				line->rotate(1);
			}

			chart_step->Series->Add(series4);

			//Ву
			Series^ series5 = gcnew Series();
			series5->Name = String::Format("Ву", 0);
			series5->ChartType = SeriesChartType::Line;

			for (int i = 1; i <= 90; i++) {
				int st = line->By(g, MyColor);
				series5->Points->AddXY(i, st);

				line->rotate(1);
			}

			chart_step->Series->Add(series5);

			this->Controls->Add(chart_step);
		}

		//вывод характеристики ступенчатости
		private: System::Void исследоватьСтупенчатостьОтрезковToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			chart_step->Visible = true;
			chart_step->BringToFront();
		}
};
}
