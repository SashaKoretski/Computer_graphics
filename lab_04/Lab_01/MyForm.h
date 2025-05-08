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
			InitializeChart_time_c();
			InitializeChart_time_e();
			/*InitializeChart_time();
			InitializeChart_step();*/
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
	private: System::Windows::Forms::TextBox^ textBox_step;
	private: System::Windows::Forms::Label^ label_amount;



	private: System::Windows::Forms::Label^ label_step;
	private: System::Windows::Forms::TextBox^ textBox_amount;











	private: System::Windows::Forms::Button^ button_spectr_draw;

	private: System::Windows::Forms::Label^ label_spectr_draw;



















	private: const int surH = 524;
	private: const int surL = 863;
	private: Color MyColor = Color::Red;
	private: style MyStyle = error;
	private: spec_style SpecSt = er;




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
private: System::Windows::Forms::TextBox^ textBox_y_cen;
private: System::Windows::Forms::Label^ label_b_el;



private: System::Windows::Forms::Label^ label_y_cen;
private: System::Windows::Forms::TextBox^ textBox_b_el;




private: System::Windows::Forms::TextBox^ textBox_x_cen;
private: System::Windows::Forms::Label^ label_r;








private: System::Windows::Forms::Label^ label_x_cen;
private: System::Windows::Forms::TextBox^ textBox_rad;
private: System::Windows::Forms::Button^ button_draw_circ;





private: System::Windows::Forms::Label^ label_centr;

















private: System::Windows::Forms::Label^ label_font_color;

private: System::Windows::Forms::Label^ label_line_color;







private: System::Windows::Forms::Label^ label_color;




















private: System::Windows::Forms::Label^ label_alg;





private: PointF^ pt_0 = gcnew PointF(0, 0);

private: System::Windows::Forms::CheckBox^ checkBox_bres;

private: System::Windows::Forms::CheckBox^ checkBox_param;




private: System::Windows::Forms::CheckBox^ checkBox_lib;
private: System::Windows::Forms::ToolStripMenuItem^ очиститьЭкранToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ исследоватьВременнуюХарактеристикуToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ исследоватьСтупенчатостьОтрезковToolStripMenuItem;
private: System::Windows::Forms::Button^ button_line_color;
private: System::Windows::Forms::Button^ button_color_font;
private: System::Windows::Forms::Button^ button_clear;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_time_eli;

private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_time_circ;

private: System::Windows::Forms::CheckBox^ checkBox_kanon;
private: System::Windows::Forms::Label^ label_rad;
private: System::Windows::Forms::Label^ label_elip;
private: System::Windows::Forms::Label^ label_a_el;
private: System::Windows::Forms::TextBox^ textBox_a_el;
private: System::Windows::Forms::Button^ button_draw_eli;
private: System::Windows::Forms::CheckBox^ checkBox_if_b;

private: System::Windows::Forms::CheckBox^ checkBox_if_a;
private: System::Windows::Forms::CheckBox^ checkBox_if_circ;
private: System::Windows::Forms::CheckBox^ checkBox_if_eli;



private: System::Windows::Forms::Label^ label_if_eli;















	   










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
			this->textBox_step = (gcnew System::Windows::Forms::TextBox());
			this->label_amount = (gcnew System::Windows::Forms::Label());
			this->label_step = (gcnew System::Windows::Forms::Label());
			this->textBox_amount = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox_y_cen = (gcnew System::Windows::Forms::TextBox());
			this->label_b_el = (gcnew System::Windows::Forms::Label());
			this->label_y_cen = (gcnew System::Windows::Forms::Label());
			this->textBox_b_el = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x_cen = (gcnew System::Windows::Forms::TextBox());
			this->label_r = (gcnew System::Windows::Forms::Label());
			this->label_x_cen = (gcnew System::Windows::Forms::Label());
			this->textBox_rad = (gcnew System::Windows::Forms::TextBox());
			this->button_draw_circ = (gcnew System::Windows::Forms::Button());
			this->label_centr = (gcnew System::Windows::Forms::Label());
			this->label_font_color = (gcnew System::Windows::Forms::Label());
			this->label_line_color = (gcnew System::Windows::Forms::Label());
			this->label_color = (gcnew System::Windows::Forms::Label());
			this->label_alg = (gcnew System::Windows::Forms::Label());
			this->checkBox_bres = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_param = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_lib = (gcnew System::Windows::Forms::CheckBox());
			this->button_line_color = (gcnew System::Windows::Forms::Button());
			this->button_color_font = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->chart_time_eli = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_time_circ = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox_kanon = (gcnew System::Windows::Forms::CheckBox());
			this->label_rad = (gcnew System::Windows::Forms::Label());
			this->label_elip = (gcnew System::Windows::Forms::Label());
			this->label_a_el = (gcnew System::Windows::Forms::Label());
			this->textBox_a_el = (gcnew System::Windows::Forms::TextBox());
			this->button_draw_eli = (gcnew System::Windows::Forms::Button());
			this->checkBox_if_b = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_if_a = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_if_circ = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_if_eli = (gcnew System::Windows::Forms::CheckBox());
			this->label_if_eli = (gcnew System::Windows::Forms::Label());
			this->menu_strip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_left))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_right))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_down))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_up))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->surface))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_now))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_time_eli))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_time_circ))->BeginInit();
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
			this->label_title->Text = L"Лабораторная по компьютерной графике №4";
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
			this->очиститьЭкранToolStripMenuItem->Size = System::Drawing::Size(453, 22);
			this->очиститьЭкранToolStripMenuItem->Text = L"Очистить экран";
			this->очиститьЭкранToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// исследоватьВременнуюХарактеристикуToolStripMenuItem
			// 
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Name = L"исследоватьВременнуюХарактеристикуToolStripMenuItem";
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Size = System::Drawing::Size(453, 22);
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Text = L"Исследовать временную характеристику для окружностей";
			this->исследоватьВременнуюХарактеристикуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::исследоватьВременнуюХарактеристикуToolStripMenuItem_Click);
			// 
			// исследоватьСтупенчатостьОтрезковToolStripMenuItem
			// 
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem->Name = L"исследоватьСтупенчатостьОтрезковToolStripMenuItem";
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem->Size = System::Drawing::Size(453, 22);
			this->исследоватьСтупенчатостьОтрезковToolStripMenuItem->Text = L"Исследовать временную характеристику для эллипсов";
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
			this->условиеЗадачиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->условиеЗадачиToolStripMenuItem->Text = L"Условие задачи";
			this->условиеЗадачиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::условиеЗадачиToolStripMenuItem_Click);
			// 
			// инструкцияToolStripMenuItem
			// 
			this->инструкцияToolStripMenuItem->Name = L"инструкцияToolStripMenuItem";
			this->инструкцияToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->инструкцияToolStripMenuItem->Text = L"Инструкция";
			this->инструкцияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::инструкцияToolStripMenuItem_Click);
			// 
			// обАвтореToolStripMenuItem
			// 
			this->обАвтореToolStripMenuItem->Name = L"обАвтореToolStripMenuItem";
			this->обАвтореToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			// textBox_step
			// 
			this->textBox_step->Location = System::Drawing::Point(1023, 513);
			this->textBox_step->Name = L"textBox_step";
			this->textBox_step->Size = System::Drawing::Size(52, 20);
			this->textBox_step->TabIndex = 32;
			this->textBox_step->Text = L"5";
			// 
			// label_amount
			// 
			this->label_amount->AutoSize = true;
			this->label_amount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_amount->Location = System::Drawing::Point(945, 542);
			this->label_amount->Name = L"label_amount";
			this->label_amount->Size = System::Drawing::Size(66, 13);
			this->label_amount->TabIndex = 31;
			this->label_amount->Text = L"Количество";
			// 
			// label_step
			// 
			this->label_step->AutoSize = true;
			this->label_step->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_step->Location = System::Drawing::Point(945, 516);
			this->label_step->Name = L"label_step";
			this->label_step->Size = System::Drawing::Size(27, 13);
			this->label_step->TabIndex = 30;
			this->label_step->Text = L"Шаг";
			// 
			// textBox_amount
			// 
			this->textBox_amount->Location = System::Drawing::Point(1023, 539);
			this->textBox_amount->Name = L"textBox_amount";
			this->textBox_amount->Size = System::Drawing::Size(52, 20);
			this->textBox_amount->TabIndex = 29;
			this->textBox_amount->Text = L"15";
			// 
			// button_spectr_draw
			// 
			this->button_spectr_draw->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_spectr_draw->Location = System::Drawing::Point(939, 588);
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
			this->label_spectr_draw->Location = System::Drawing::Point(992, 486);
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
			// textBox_y_cen
			// 
			this->textBox_y_cen->Location = System::Drawing::Point(1086, 235);
			this->textBox_y_cen->Name = L"textBox_y_cen";
			this->textBox_y_cen->Size = System::Drawing::Size(52, 20);
			this->textBox_y_cen->TabIndex = 62;
			this->textBox_y_cen->Text = L"0";
			// 
			// label_b_el
			// 
			this->label_b_el->AutoSize = true;
			this->label_b_el->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_b_el->Location = System::Drawing::Point(1066, 338);
			this->label_b_el->Name = L"label_b_el";
			this->label_b_el->Size = System::Drawing::Size(13, 13);
			this->label_b_el->TabIndex = 61;
			this->label_b_el->Text = L"b";
			// 
			// label_y_cen
			// 
			this->label_y_cen->AutoSize = true;
			this->label_y_cen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_cen->Location = System::Drawing::Point(1066, 238);
			this->label_y_cen->Name = L"label_y_cen";
			this->label_y_cen->Size = System::Drawing::Size(20, 13);
			this->label_y_cen->TabIndex = 60;
			this->label_y_cen->Text = L"Yц";
			// 
			// textBox_b_el
			// 
			this->textBox_b_el->Location = System::Drawing::Point(1086, 335);
			this->textBox_b_el->Name = L"textBox_b_el";
			this->textBox_b_el->Size = System::Drawing::Size(52, 20);
			this->textBox_b_el->TabIndex = 59;
			this->textBox_b_el->Text = L"50";
			// 
			// textBox_x_cen
			// 
			this->textBox_x_cen->Location = System::Drawing::Point(964, 235);
			this->textBox_x_cen->Name = L"textBox_x_cen";
			this->textBox_x_cen->Size = System::Drawing::Size(52, 20);
			this->textBox_x_cen->TabIndex = 58;
			this->textBox_x_cen->Text = L"0";
			// 
			// label_r
			// 
			this->label_r->AutoSize = true;
			this->label_r->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_r->Location = System::Drawing::Point(944, 288);
			this->label_r->Name = L"label_r";
			this->label_r->Size = System::Drawing::Size(15, 13);
			this->label_r->TabIndex = 57;
			this->label_r->Text = L"R";
			// 
			// label_x_cen
			// 
			this->label_x_cen->AutoSize = true;
			this->label_x_cen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_cen->Location = System::Drawing::Point(944, 238);
			this->label_x_cen->Name = L"label_x_cen";
			this->label_x_cen->Size = System::Drawing::Size(20, 13);
			this->label_x_cen->TabIndex = 56;
			this->label_x_cen->Text = L"Xц";
			// 
			// textBox_rad
			// 
			this->textBox_rad->Location = System::Drawing::Point(964, 285);
			this->textBox_rad->Name = L"textBox_rad";
			this->textBox_rad->Size = System::Drawing::Size(52, 20);
			this->textBox_rad->TabIndex = 55;
			this->textBox_rad->Text = L"50";
			// 
			// button_draw_circ
			// 
			this->button_draw_circ->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_draw_circ->Location = System::Drawing::Point(966, 361);
			this->button_draw_circ->Name = L"button_draw_circ";
			this->button_draw_circ->Size = System::Drawing::Size(89, 45);
			this->button_draw_circ->TabIndex = 54;
			this->button_draw_circ->Text = L"Нарисовать окружность";
			this->button_draw_circ->UseVisualStyleBackColor = true;
			this->button_draw_circ->Click += gcnew System::EventHandler(this, &MyForm::button_draw_circ_Click);
			// 
			// label_centr
			// 
			this->label_centr->AutoSize = true;
			this->label_centr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_centr->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_centr->Location = System::Drawing::Point(991, 208);
			this->label_centr->Name = L"label_centr";
			this->label_centr->Size = System::Drawing::Size(185, 24);
			this->label_centr->TabIndex = 53;
			this->label_centr->Text = L"Координаты центра";
			// 
			// label_font_color
			// 
			this->label_font_color->AutoSize = true;
			this->label_font_color->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_font_color->Location = System::Drawing::Point(945, 465);
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
			this->label_line_color->Location = System::Drawing::Point(945, 439);
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
			this->label_color->Location = System::Drawing::Point(992, 409);
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
			// checkBox_bres
			// 
			this->checkBox_bres->AutoSize = true;
			this->checkBox_bres->Location = System::Drawing::Point(944, 120);
			this->checkBox_bres->Name = L"checkBox_bres";
			this->checkBox_bres->Size = System::Drawing::Size(140, 17);
			this->checkBox_bres->TabIndex = 76;
			this->checkBox_bres->Text = L"Алгоритм Брезенхема";
			this->checkBox_bres->UseVisualStyleBackColor = true;
			this->checkBox_bres->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_bres_deist_CheckedChanged);
			// 
			// checkBox_param
			// 
			this->checkBox_param->AutoSize = true;
			this->checkBox_param->Location = System::Drawing::Point(944, 166);
			this->checkBox_param->Name = L"checkBox_param";
			this->checkBox_param->Size = System::Drawing::Size(174, 17);
			this->checkBox_param->TabIndex = 78;
			this->checkBox_param->Text = L"Параметрическое уравнение";
			this->checkBox_param->UseVisualStyleBackColor = true;
			this->checkBox_param->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_bres_stup_CheckedChanged);
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
			this->button_line_color->Location = System::Drawing::Point(1023, 435);
			this->button_line_color->Name = L"button_line_color";
			this->button_line_color->Size = System::Drawing::Size(64, 21);
			this->button_line_color->TabIndex = 81;
			this->button_line_color->Text = L"Выбрать";
			this->button_line_color->UseVisualStyleBackColor = true;
			this->button_line_color->Click += gcnew System::EventHandler(this, &MyForm::button_line_color_Click);
			// 
			// button_color_font
			// 
			this->button_color_font->Location = System::Drawing::Point(1023, 462);
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
			this->button_clear->Location = System::Drawing::Point(1098, 588);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(75, 35);
			this->button_clear->TabIndex = 83;
			this->button_clear->Text = L"Очистить";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// chart_time_eli
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart_time_eli->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart_time_eli->Legends->Add(legend1);
			this->chart_time_eli->Location = System::Drawing::Point(60, 93);
			this->chart_time_eli->Name = L"chart_time_eli";
			this->chart_time_eli->Size = System::Drawing::Size(863, 524);
			this->chart_time_eli->TabIndex = 84;
			this->chart_time_eli->Text = L"Временная характеристика";
			this->chart_time_eli->Visible = false;
			// 
			// chart_time_circ
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_time_circ->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart_time_circ->Legends->Add(legend2);
			this->chart_time_circ->Location = System::Drawing::Point(60, 93);
			this->chart_time_circ->Name = L"chart_time_circ";
			this->chart_time_circ->Size = System::Drawing::Size(863, 524);
			this->chart_time_circ->TabIndex = 85;
			this->chart_time_circ->Text = L"Временная характеристика";
			this->chart_time_circ->Visible = false;
			// 
			// checkBox_kanon
			// 
			this->checkBox_kanon->AutoSize = true;
			this->checkBox_kanon->Location = System::Drawing::Point(944, 143);
			this->checkBox_kanon->Name = L"checkBox_kanon";
			this->checkBox_kanon->Size = System::Drawing::Size(154, 17);
			this->checkBox_kanon->TabIndex = 86;
			this->checkBox_kanon->Text = L"Каноническое уравнение";
			this->checkBox_kanon->UseVisualStyleBackColor = true;
			this->checkBox_kanon->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_bres_cel_CheckedChanged);
			// 
			// label_rad
			// 
			this->label_rad->AutoSize = true;
			this->label_rad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_rad->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_rad->Location = System::Drawing::Point(992, 258);
			this->label_rad->Name = L"label_rad";
			this->label_rad->Size = System::Drawing::Size(181, 24);
			this->label_rad->TabIndex = 87;
			this->label_rad->Text = L"Радиус окружности";
			// 
			// label_elip
			// 
			this->label_elip->AutoSize = true;
			this->label_elip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_elip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_elip->Location = System::Drawing::Point(992, 308);
			this->label_elip->Name = L"label_elip";
			this->label_elip->Size = System::Drawing::Size(159, 24);
			this->label_elip->TabIndex = 88;
			this->label_elip->Text = L"Полуоси эллипса";
			// 
			// label_a_el
			// 
			this->label_a_el->AutoSize = true;
			this->label_a_el->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_a_el->Location = System::Drawing::Point(946, 338);
			this->label_a_el->Name = L"label_a_el";
			this->label_a_el->Size = System::Drawing::Size(13, 13);
			this->label_a_el->TabIndex = 90;
			this->label_a_el->Text = L"a";
			// 
			// textBox_a_el
			// 
			this->textBox_a_el->Location = System::Drawing::Point(966, 335);
			this->textBox_a_el->Name = L"textBox_a_el";
			this->textBox_a_el->Size = System::Drawing::Size(52, 20);
			this->textBox_a_el->TabIndex = 89;
			this->textBox_a_el->Text = L"50";
			// 
			// button_draw_eli
			// 
			this->button_draw_eli->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_draw_eli->Location = System::Drawing::Point(1061, 361);
			this->button_draw_eli->Name = L"button_draw_eli";
			this->button_draw_eli->Size = System::Drawing::Size(89, 45);
			this->button_draw_eli->TabIndex = 91;
			this->button_draw_eli->Text = L"Нарисовать эллипс";
			this->button_draw_eli->UseVisualStyleBackColor = true;
			this->button_draw_eli->Click += gcnew System::EventHandler(this, &MyForm::button_draw_eli_Click);
			// 
			// checkBox_if_b
			// 
			this->checkBox_if_b->AutoSize = true;
			this->checkBox_if_b->Location = System::Drawing::Point(1141, 565);
			this->checkBox_if_b->Name = L"checkBox_if_b";
			this->checkBox_if_b->Size = System::Drawing::Size(32, 17);
			this->checkBox_if_b->TabIndex = 92;
			this->checkBox_if_b->Text = L"b";
			this->checkBox_if_b->UseVisualStyleBackColor = true;
			this->checkBox_if_b->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_if_b_CheckedChanged);
			// 
			// checkBox_if_a
			// 
			this->checkBox_if_a->AutoSize = true;
			this->checkBox_if_a->Location = System::Drawing::Point(1081, 565);
			this->checkBox_if_a->Name = L"checkBox_if_a";
			this->checkBox_if_a->Size = System::Drawing::Size(32, 17);
			this->checkBox_if_a->TabIndex = 93;
			this->checkBox_if_a->Text = L"a";
			this->checkBox_if_a->UseVisualStyleBackColor = true;
			this->checkBox_if_a->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_if_a_CheckedChanged);
			// 
			// checkBox_if_circ
			// 
			this->checkBox_if_circ->AutoSize = true;
			this->checkBox_if_circ->Location = System::Drawing::Point(1081, 542);
			this->checkBox_if_circ->Name = L"checkBox_if_circ";
			this->checkBox_if_circ->Size = System::Drawing::Size(94, 17);
			this->checkBox_if_circ->TabIndex = 94;
			this->checkBox_if_circ->Text = L"Окружностей";
			this->checkBox_if_circ->UseVisualStyleBackColor = true;
			this->checkBox_if_circ->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_if_circ_CheckedChanged);
			// 
			// checkBox_if_eli
			// 
			this->checkBox_if_eli->AutoSize = true;
			this->checkBox_if_eli->Location = System::Drawing::Point(1081, 516);
			this->checkBox_if_eli->Name = L"checkBox_if_eli";
			this->checkBox_if_eli->Size = System::Drawing::Size(75, 17);
			this->checkBox_if_eli->TabIndex = 95;
			this->checkBox_if_eli->Text = L"Эллипсов";
			this->checkBox_if_eli->UseVisualStyleBackColor = true;
			this->checkBox_if_eli->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_if_eli_CheckedChanged);
			// 
			// label_if_eli
			// 
			this->label_if_eli->AutoSize = true;
			this->label_if_eli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_if_eli->Location = System::Drawing::Point(944, 566);
			this->label_if_eli->Name = L"label_if_eli";
			this->label_if_eli->Size = System::Drawing::Size(114, 13);
			this->label_if_eli->TabIndex = 96;
			this->label_if_eli->Text = L"Если эллипс, шаг по:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->ClientSize = System::Drawing::Size(1200, 675);
			this->Controls->Add(this->label_if_eli);
			this->Controls->Add(this->checkBox_if_eli);
			this->Controls->Add(this->checkBox_if_circ);
			this->Controls->Add(this->checkBox_if_a);
			this->Controls->Add(this->checkBox_if_b);
			this->Controls->Add(this->button_draw_eli);
			this->Controls->Add(this->label_a_el);
			this->Controls->Add(this->textBox_a_el);
			this->Controls->Add(this->label_elip);
			this->Controls->Add(this->label_rad);
			this->Controls->Add(this->checkBox_kanon);
			this->Controls->Add(this->chart_time_eli);
			this->Controls->Add(this->surface);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_color_font);
			this->Controls->Add(this->button_line_color);
			this->Controls->Add(this->checkBox_lib);
			this->Controls->Add(this->checkBox_param);
			this->Controls->Add(this->checkBox_bres);
			this->Controls->Add(this->label_alg);
			this->Controls->Add(this->label_font_color);
			this->Controls->Add(this->label_line_color);
			this->Controls->Add(this->label_color);
			this->Controls->Add(this->textBox_y_cen);
			this->Controls->Add(this->label_b_el);
			this->Controls->Add(this->label_y_cen);
			this->Controls->Add(this->textBox_b_el);
			this->Controls->Add(this->textBox_x_cen);
			this->Controls->Add(this->label_r);
			this->Controls->Add(this->label_x_cen);
			this->Controls->Add(this->textBox_rad);
			this->Controls->Add(this->button_draw_circ);
			this->Controls->Add(this->label_centr);
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
			this->Controls->Add(this->textBox_step);
			this->Controls->Add(this->label_amount);
			this->Controls->Add(this->label_step);
			this->Controls->Add(this->textBox_amount);
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
			this->Controls->Add(this->chart_time_circ);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_time_eli))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_time_circ))->EndInit();
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
				"\nРисование окружности:\n\n"
				"\tЧтобы нарисовать окружность, нужно набрать с клавиатуры координаты центра и радиус.\n"
				"\nРисование эллипса:\n\n"
				"\tЧтобы нарисовать эллипс, нужно набрать координаты центра и размеры полуосей.\n"
				"\nСмена цвета:\n\n"
				"\tЧтобы сменить цвет, нужно нажать на кнопку выбора цвета. После смены цвета фона все линии затираются.\n"
				"\nВывод графиков:\n\n"
				"\tЧтобы посмотреть графики временные характеристики, нужно нажать на соответствующие"
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
			MessageBox::Show("Реализовать алгоритмы рисования окружности и эллипса и провести анализ временной характеристики.",
				"Условие задачи №4");
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
		if (checkBox_bres->Checked) {
			checkBox_kanon->Checked = false;
			checkBox_param->Checked = false;
			checkBox_lib->Checked = false;
			MyStyle = Bres;
			}
		}

		private: System::Void checkBox_bres_cel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_kanon->Checked) {
				checkBox_bres->Checked = false;
				checkBox_param->Checked = false;
				checkBox_lib->Checked = false;
				MyStyle = kanon;
			}
		}

		private: System::Void checkBox_bres_stup_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_param->Checked) {
				checkBox_bres->Checked = false;
				checkBox_kanon->Checked = false;
				checkBox_lib->Checked = false;
				MyStyle = param;
			}
		}

		private: System::Void checkBox_lib_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_lib->Checked) {
				checkBox_kanon->Checked = false;
				checkBox_param->Checked = false;
				checkBox_bres->Checked = false;
				MyStyle = lib;
			}
		}

		//рисование окружности
		private: void circ_draw(Circle^ circ, Graphics^ g) {
			chart_time_circ->Visible = false;
			chart_time_eli->Visible = false;

			switch (MyStyle)
			{
			case error:
				break;
			case kanon:
				circ->kanon(g, MyColor);
				break;
			case Bres:
				circ->Bres(g, MyColor);
				break;
			case param:
				circ->param(g, MyColor);
				break;
			case lib:
				circ->lib(g, MyColor);
				break;
			default:
				break;
			}
		}

		//рисование эллипсов
		private: void eli_draw(Ellipce^ eli, Graphics^ g) {
			chart_time_circ->Visible = false;
			chart_time_eli->Visible = false;

			switch (MyStyle)
			{
			case error:
				break;
			case kanon:
				eli->kanon(g, MyColor);
				break;
			case Bres:
				eli->Bres(g, MyColor);
				break;
			case param:
				eli->param(g, MyColor);
				break;
			case lib:
				eli->lib(g, MyColor);
				break;
			default:
				break;
			}
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
		
		//очистка полотна и стилей
		private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
			surface->BackColor = Color::Black;
			surface->BackColor = Color::White;
			MyColor = Color::Red;

			chart_time_circ->Visible = false;
			chart_time_eli->Visible = false;
		}

		//рассчет времени
		private: unsigned int para_count_time_c() {
			double rad = 20;
			double step = 2;
			PointF^ cent = gcnew PointF(0, 0);

			Circle^ circ = gcnew Circle();
			circ->cent = cent;
			circ->rad = rad;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				circ->param(g, MyColor);

				circ->rad += 5;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int Bres_count_time_c() {
			double rad = 20;
			double step = 2;
			PointF^ cent = gcnew PointF(0, 0);

			Circle^ circ = gcnew Circle();
			circ->cent = cent;
			circ->rad = rad;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				circ->Bres(g, MyColor);

				circ->rad += 5;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int kanon_count_time_c() {
			double rad = 20;
			double step = 2;
			PointF^ cent = gcnew PointF(0, 0);

			Circle^ circ = gcnew Circle();
			circ->cent = cent;
			circ->rad = rad;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				circ->kanon(g, MyColor);

				circ->rad += 5;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int lib_count_time_c() {
			double rad = 20;
			double step = 2;
			PointF^ cent = gcnew PointF(0, 0);

			Circle^ circ = gcnew Circle();
			circ->cent = cent;
			circ->rad = rad;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				circ->lib(g, MyColor);

				circ->rad += 5;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		//инициализация временной характеристики для окружности
		private: void InitializeChart_time_c() {
			ChartArea^ chartArea1 = gcnew ChartArea();
			chart_time_circ->ChartAreas->Add(chartArea1);

			Series^ series1 = gcnew Series();
			series1->Name = "Алгоритмы рисования окружностей";

			series1->Points->AddXY("Параметрический", para_count_time_c());
			series1->Points->AddXY("Канонический", kanon_count_time_c());
			series1->Points->AddXY("Брезенхем", Bres_count_time_c());
			series1->Points->AddXY("Библиотечная", lib_count_time_c());

			chartArea1->AxisX->Title = "Время (мс)";

			chart_time_circ->Series->Add(series1);

			series1->ChartType = SeriesChartType::Column;
		}

		//рассчет времени
		private: unsigned int para_count_time_e() {
			double a = 20;
			double b = 30;
			PointF^ cent = gcnew PointF(0, 0);

			Ellipce^ eli = gcnew Ellipce();
			eli->cent = cent;
			eli->halfax_a = a;
			eli->halfax_b = b;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				eli->param(g, MyColor);

				eli->halfax_a += 5;
				eli->halfax_b += 4;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int Bres_count_time_e() {
			double a = 20;
			double b = 30;
			PointF^ cent = gcnew PointF(0, 0);

			Ellipce^ eli = gcnew Ellipce();
			eli->cent = cent;
			eli->halfax_a = a;
			eli->halfax_b = b;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				eli->Bres(g, MyColor);

				eli->halfax_a += 5;
				eli->halfax_b += 4;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int kanon_count_time_e() {
			double a = 20;
			double b = 30;
			PointF^ cent = gcnew PointF(0, 0);

			Ellipce^ eli = gcnew Ellipce();
			eli->cent = cent;
			eli->halfax_a = a;
			eli->halfax_b = b;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				eli->kanon(g, MyColor);

				eli->halfax_a += 5;
				eli->halfax_b += 4;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		private: unsigned int lib_count_time_e() {
			double a = 20;
			double b = 30;
			PointF^ cent = gcnew PointF(0, 0);

			Ellipce^ eli = gcnew Ellipce();
			eli->cent = cent;
			eli->halfax_a = a;
			eli->halfax_b = b;

			Graphics^ g = surface->CreateGraphics();

			unsigned int start_time = clock();

			for (double i = 0; i < 100; i += 1) {
				eli->lib(g, MyColor);

				eli->halfax_a += 5;
				eli->halfax_b += 4;
			}
			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			return(search_time);
		}

		//вывод временной характеристики для окружности
		private: System::Void исследоватьВременнуюХарактеристикуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			chart_time_circ->Visible = true;
			chart_time_circ->BringToFront();
		}

		//инициализация временной характеристики для эллипса
		private: void InitializeChart_time_e() {
			ChartArea^ chartArea1 = gcnew ChartArea();
			chart_time_eli->ChartAreas->Add(chartArea1);

			Series^ series1 = gcnew Series();
			series1->Name = "Алгоритмы рисования эллипсов";

			series1->Points->AddXY("Параметрический", para_count_time_e());
			series1->Points->AddXY("Канонический", kanon_count_time_e());
			series1->Points->AddXY("Брезенхем", Bres_count_time_e());
			series1->Points->AddXY("Библиотечная", lib_count_time_e());

			chartArea1->AxisX->Title = "Время (мс)";

			chart_time_eli->Series->Add(series1);

			series1->ChartType = SeriesChartType::Column;
		}

		//вывод характеристики ступенчатости для эллипса
		private: System::Void исследоватьСтупенчатостьОтрезковToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			chart_time_eli->Visible = true;
			chart_time_eli->BringToFront();
		}

		//рисование окружности
		private: System::Void button_draw_circ_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_cen = 0;
			double y_cen = 0;
			double rad = 0;
			unsigned int start_time = clock();

			if (Double::TryParse(textBox_x_cen->Text, x_cen) && Double::TryParse(textBox_y_cen->Text, y_cen) &&
				Double::TryParse(textBox_rad->Text, rad)) {
				PointF^ cen = gcnew PointF(x_cen, y_cen);

				PointF^ cen_real = gcnew PointF(0, 0);
				PointF^ fake_rad = gcnew PointF(rad, rad);

				PointF^ real_rad = gcnew PointF(rad, rad);
				cen_real = modifyPoint(cen);
				real_rad = modifyPoint(fake_rad);

				Graphics^ g = surface->CreateGraphics();

				Circle^ circle = gcnew Circle();
				circle->cent = cen_real;
				circle->rad = surH / 2 - real_rad->Y;

				circ_draw(circle, g);
			}
			else {
				MessageBox::Show("Некорректный ввод!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			textBox_time->Text = search_time.ToString();
		}

		//рисование эллипса
		private: System::Void button_draw_eli_Click(System::Object^ sender, System::EventArgs^ e) {
			double x_cen = 0;
			double y_cen = 0;
			double halfax_a = 0;
			double halfax_b = 0;
			unsigned int start_time = clock();

			if (Double::TryParse(textBox_x_cen->Text, x_cen) && Double::TryParse(textBox_y_cen->Text, y_cen) &&
				Double::TryParse(textBox_a_el->Text, halfax_a) && Double::TryParse(textBox_b_el->Text, halfax_b)) {
				PointF^ cen = gcnew PointF(x_cen, y_cen);

				PointF^ cen_real = gcnew PointF(0, 0);
				PointF^ fake_a = gcnew PointF(halfax_a, halfax_a);
				PointF^ fake_b = gcnew PointF(halfax_b, halfax_b);

				PointF^ real_a = gcnew PointF(halfax_a, halfax_a);
				PointF^ real_b = gcnew PointF(halfax_a, halfax_a);
				cen_real = modifyPoint(cen);
				real_a = modifyPoint(fake_a);
				real_b = modifyPoint(fake_b);

				Graphics^ g = surface->CreateGraphics();

				Ellipce^ eli = gcnew Ellipce();
				eli->cent = cen_real;
				eli->halfax_a = surL / 2 - real_a->X;
				eli->halfax_b = surH / 2 - real_b->Y;

				eli_draw(eli, g);
			}
			else {
				MessageBox::Show("Некорректный ввод!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			unsigned int end_time = clock();
			unsigned int search_time = end_time - start_time;

			textBox_time->Text = search_time.ToString();
		}

     	// обработчик событий
		private: System::Void checkBox_if_eli_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_if_eli->Checked) {
				checkBox_if_circ->Checked = false;
			}

			SpecSt = er;
		}

		private: System::Void checkBox_if_circ_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_if_circ->Checked) {
				checkBox_if_eli->Checked = false;
			}

			if (checkBox_if_circ->Checked) {
				checkBox_if_a->Checked = false;
				checkBox_if_b->Checked = false;
			}

			SpecSt = circ;
		}

		private: System::Void checkBox_if_a_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_if_a->Checked) {
				checkBox_if_b->Checked = false;
			}

			if (checkBox_if_circ->Checked) {
				checkBox_if_a->Checked = false;
				checkBox_if_b->Checked = false;
			}

			SpecSt = eli_a;
		}

		private: System::Void checkBox_if_b_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox_if_b->Checked) {
				checkBox_if_a->Checked = false;
			}

			if (checkBox_if_circ->Checked) {
				checkBox_if_a->Checked = false;
				checkBox_if_b->Checked = false;
			}

			SpecSt = eli_b;
		}

		//рисование спектра
		private: System::Void button_spectr_draw_Click(System::Object^ sender, System::EventArgs^ e) {
			if (SpecSt == circ) {
				double x_cen = 0;
				double y_cen = 0;
				double rad = 0;

				double step = 0;
				int amount = 0;
				unsigned int start_time = clock();

				if (Double::TryParse(textBox_x_cen->Text, x_cen) && Double::TryParse(textBox_y_cen->Text, y_cen) && Double::TryParse(textBox_rad->Text, rad)
					&& Double::TryParse(textBox_step->Text, step) && INT::TryParse(textBox_amount->Text, amount)) {
					PointF^ cen = gcnew PointF(x_cen, y_cen);

					PointF^ cen_real = gcnew PointF(0, 0);
					PointF^ fake_rad = gcnew PointF(rad, rad);
					PointF^ fake_step = gcnew PointF(step, step);

					PointF^ real_rad = gcnew PointF(rad, rad);
					PointF^ real_step = gcnew PointF(step, step);
					cen_real = modifyPoint(cen);
					real_rad = modifyPoint(fake_rad);
					real_step = modifyPoint(fake_step);

					Graphics^ g = surface->CreateGraphics();

					Circle^ circle = gcnew Circle();
					circle->cent = cen_real;
					circle->rad = surH / 2 - real_rad->Y;

					for (int i = 0; i < amount; i++) {
						circ_draw(circle, g);
						circle->rad += surH / 2 - real_step->Y;
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
			else if (SpecSt == eli_a) {
				double x_cen = 0;
				double y_cen = 0;
				double halfax_a = 0;
				double halfax_b = 0;

				double step = 0;
				int amount = 0;
				unsigned int start_time = clock();

				if (Double::TryParse(textBox_x_cen->Text, x_cen) && Double::TryParse(textBox_y_cen->Text, y_cen) &&
					Double::TryParse(textBox_a_el->Text, halfax_a) && Double::TryParse(textBox_b_el->Text, halfax_b)
					&& Double::TryParse(textBox_step->Text, step) && INT::TryParse(textBox_amount->Text, amount)) {
					PointF^ cen = gcnew PointF(x_cen, y_cen);

					PointF^ cen_real = gcnew PointF(0, 0);
					PointF^ fake_a = gcnew PointF(halfax_a, halfax_a);
					PointF^ fake_b = gcnew PointF(halfax_b, halfax_b);
					PointF^ fake_step = gcnew PointF(step, step);

					PointF^ real_a = gcnew PointF(halfax_a, halfax_a);
					PointF^ real_b = gcnew PointF(halfax_a, halfax_a);
					PointF^ real_step = gcnew PointF(step, step);
					cen_real = modifyPoint(cen);
					real_a = modifyPoint(fake_a);
					real_b = modifyPoint(fake_b);
					real_step = modifyPoint(fake_step);

					Graphics^ g = surface->CreateGraphics();

					Ellipce^ eli = gcnew Ellipce();
					eli->cent = cen_real;
					eli->halfax_a = surL / 2 - real_a->X;
					eli->halfax_b = surH / 2 - real_b->Y;

					for (int i = 0; i < amount; i++) {
						eli_draw(eli, g);
						eli->halfax_b *= (eli->halfax_a + surL / 2 - real_step->X) / eli->halfax_a;
						eli->halfax_a += surL / 2 - real_step->X;
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
			else if (SpecSt == eli_b) {
				double x_cen = 0;
				double y_cen = 0;
				double halfax_a = 0;
				double halfax_b = 0;

				double step = 0;
				int amount = 0;
				unsigned int start_time = clock();

				if (Double::TryParse(textBox_x_cen->Text, x_cen) && Double::TryParse(textBox_y_cen->Text, y_cen) &&
					Double::TryParse(textBox_a_el->Text, halfax_a) && Double::TryParse(textBox_b_el->Text, halfax_b)
					&& Double::TryParse(textBox_step->Text, step) && INT::TryParse(textBox_amount->Text, amount)) {
					PointF^ cen = gcnew PointF(x_cen, y_cen);

					PointF^ cen_real = gcnew PointF(0, 0);
					PointF^ fake_a = gcnew PointF(halfax_a, halfax_a);
					PointF^ fake_b = gcnew PointF(halfax_b, halfax_b);
					PointF^ fake_step = gcnew PointF(step, step);

					PointF^ real_a = gcnew PointF(halfax_a, halfax_a);
					PointF^ real_b = gcnew PointF(halfax_a, halfax_a);
					PointF^ real_step = gcnew PointF(step, step);
					cen_real = modifyPoint(cen);
					real_a = modifyPoint(fake_a);
					real_b = modifyPoint(fake_b);
					real_step = modifyPoint(fake_step);

					Graphics^ g = surface->CreateGraphics();

					Ellipce^ eli = gcnew Ellipce();
					eli->cent = cen_real;
					eli->halfax_a = surL / 2 - real_a->X;
					eli->halfax_b = surH / 2 - real_b->Y;

					for (int i = 0; i < amount; i++) {
						eli_draw(eli, g);
						eli->halfax_a *= (eli->halfax_b + surH / 2 - real_step->Y) / eli->halfax_b;
						eli->halfax_b += surH / 2 - real_step->Y;
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
		}
};
}
