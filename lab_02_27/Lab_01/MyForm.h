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
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;























	private: System::Windows::Forms::PictureBox^ pictureBox_menu;
	private: System::Windows::Forms::PictureBox^ pictureBox_left;



	private: System::Windows::Forms::PictureBox^ pictureBox_right;
	private: System::Windows::Forms::PictureBox^ pictureBox_down;


	private: System::Windows::Forms::PictureBox^ pictureBox_up;




	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ surface;
	private: System::Windows::Forms::TextBox^ textBox_x_move;



	private: System::Windows::Forms::Label^ label_y_move;


	private: System::Windows::Forms::Label^ label_x_move;
	private: System::Windows::Forms::TextBox^ textBox_y_move;
	private: System::Windows::Forms::Button^ button_move;




	private: System::Windows::Forms::Label^ label_move;














	private: const int surH = 524;
	private: const int surL = 863;
	//private: const int big_el_w = 300;




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

private: System::Windows::Forms::ToolStripMenuItem^ ����������������������������ToolStripMenuItem;
private: System::Windows::Forms::TextBox^ textBox_time;
private: System::Windows::Forms::Label^ label_sec;
private: System::Windows::Forms::Label^ label_T;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::TextBox^ textBox_kx_scale;

private: System::Windows::Forms::Label^ label_ky_scale;

private: System::Windows::Forms::Label^ label_kx_scale;
private: System::Windows::Forms::TextBox^ textBox_ky_scale;


private: System::Windows::Forms::TextBox^ textBox_x_scale;

private: System::Windows::Forms::Label^ label_y_scale;

private: System::Windows::Forms::Label^ label_x_scale;
private: System::Windows::Forms::TextBox^ textBox_y_scale;
private: System::Windows::Forms::Button^ button_scale;



private: System::Windows::Forms::Label^ label_scale;
private: System::Windows::Forms::TextBox^ textBox_alpha_turn;




private: System::Windows::Forms::Label^ label7;

private: System::Windows::Forms::TextBox^ textBox_x_turn;
private: System::Windows::Forms::Label^ label_y_turn;


private: System::Windows::Forms::Label^ label_x_turn;

private: System::Windows::Forms::TextBox^ textBox_y_turn;
private: System::Windows::Forms::Button^ button_turn;


private: System::Windows::Forms::Label^ label_turn;
private: System::Windows::Forms::TextBox^ textBox_kx_scale_axis;


private: System::Windows::Forms::Label^ label_ky_scale_axis;

private: System::Windows::Forms::Label^ label_kx_scale_axis;
private: System::Windows::Forms::TextBox^ textBox_ky_scale_axis;


private: System::Windows::Forms::TextBox^ textBox_x_scale_axis;

private: System::Windows::Forms::Label^ label_y_scale_axis;

private: System::Windows::Forms::Label^ label_x_scale_axis;
private: System::Windows::Forms::TextBox^ textBox_y_scale_axis;
private: System::Windows::Forms::Button^ button_scale_axis;



private: System::Windows::Forms::Label^ label_scale_axis_1;
private: System::Windows::Forms::Label^ label_scale_axis_2;
private: System::Windows::Forms::Button^ button_back;
private: System::Windows::Forms::Button^ button_forward;


private: List<Figure^>^ states = gcnew List<Figure^>();













	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->btn_collapce = (gcnew System::Windows::Forms::Button());
			this->menu_strip = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox_menu = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_left = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_right = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_down = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_up = (gcnew System::Windows::Forms::PictureBox());
			this->surface = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_x_move = (gcnew System::Windows::Forms::TextBox());
			this->label_y_move = (gcnew System::Windows::Forms::Label());
			this->label_x_move = (gcnew System::Windows::Forms::Label());
			this->textBox_y_move = (gcnew System::Windows::Forms::TextBox());
			this->button_move = (gcnew System::Windows::Forms::Button());
			this->label_move = (gcnew System::Windows::Forms::Label());
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
			this->textBox_kx_scale = (gcnew System::Windows::Forms::TextBox());
			this->label_ky_scale = (gcnew System::Windows::Forms::Label());
			this->label_kx_scale = (gcnew System::Windows::Forms::Label());
			this->textBox_ky_scale = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x_scale = (gcnew System::Windows::Forms::TextBox());
			this->label_y_scale = (gcnew System::Windows::Forms::Label());
			this->label_x_scale = (gcnew System::Windows::Forms::Label());
			this->textBox_y_scale = (gcnew System::Windows::Forms::TextBox());
			this->button_scale = (gcnew System::Windows::Forms::Button());
			this->label_scale = (gcnew System::Windows::Forms::Label());
			this->textBox_alpha_turn = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_x_turn = (gcnew System::Windows::Forms::TextBox());
			this->label_y_turn = (gcnew System::Windows::Forms::Label());
			this->label_x_turn = (gcnew System::Windows::Forms::Label());
			this->textBox_y_turn = (gcnew System::Windows::Forms::TextBox());
			this->button_turn = (gcnew System::Windows::Forms::Button());
			this->label_turn = (gcnew System::Windows::Forms::Label());
			this->textBox_kx_scale_axis = (gcnew System::Windows::Forms::TextBox());
			this->label_ky_scale_axis = (gcnew System::Windows::Forms::Label());
			this->label_kx_scale_axis = (gcnew System::Windows::Forms::Label());
			this->textBox_ky_scale_axis = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x_scale_axis = (gcnew System::Windows::Forms::TextBox());
			this->label_y_scale_axis = (gcnew System::Windows::Forms::Label());
			this->label_x_scale_axis = (gcnew System::Windows::Forms::Label());
			this->textBox_y_scale_axis = (gcnew System::Windows::Forms::TextBox());
			this->button_scale_axis = (gcnew System::Windows::Forms::Button());
			this->label_scale_axis_1 = (gcnew System::Windows::Forms::Label());
			this->label_scale_axis_2 = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->button_forward = (gcnew System::Windows::Forms::Button());
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
			this->label_title->Text = L"������������ �� ������������ ������� �1";
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
					this->����������ToolStripMenuItem, this->�����ToolStripMenuItem
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
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����������������������������ToolStripMenuItem });
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem2->Text = L"��������";
			// 
			// ����������������������������ToolStripMenuItem
			// 
			this->����������������������������ToolStripMenuItem->Name = L"����������������������������ToolStripMenuItem";
			this->����������������������������ToolStripMenuItem->Size = System::Drawing::Size(298, 22);
			this->����������������������������ToolStripMenuItem->Text = L"��������� � ���������� ��������";
			this->����������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->��������ToolStripMenuItem->Text = L"�� ������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(60, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
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
			this->surface->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::surface_MouseMove);
			// 
			// textBox_x_move
			// 
			this->textBox_x_move->Location = System::Drawing::Point(1009, 358);
			this->textBox_x_move->Name = L"textBox_x_move";
			this->textBox_x_move->Size = System::Drawing::Size(52, 20);
			this->textBox_x_move->TabIndex = 32;
			// 
			// label_y_move
			// 
			this->label_y_move->AutoSize = true;
			this->label_y_move->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_move->Location = System::Drawing::Point(989, 387);
			this->label_y_move->Name = L"label_y_move";
			this->label_y_move->Size = System::Drawing::Size(20, 13);
			this->label_y_move->TabIndex = 31;
			this->label_y_move->Text = L"dY";
			// 
			// label_x_move
			// 
			this->label_x_move->AutoSize = true;
			this->label_x_move->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_move->Location = System::Drawing::Point(989, 361);
			this->label_x_move->Name = L"label_x_move";
			this->label_x_move->Size = System::Drawing::Size(20, 13);
			this->label_x_move->TabIndex = 30;
			this->label_x_move->Text = L"dX";
			// 
			// textBox_y_move
			// 
			this->textBox_y_move->Location = System::Drawing::Point(1009, 384);
			this->textBox_y_move->Name = L"textBox_y_move";
			this->textBox_y_move->Size = System::Drawing::Size(52, 20);
			this->textBox_y_move->TabIndex = 29;
			// 
			// button_move
			// 
			this->button_move->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_move->Location = System::Drawing::Point(992, 410);
			this->button_move->Name = L"button_move";
			this->button_move->Size = System::Drawing::Size(143, 35);
			this->button_move->TabIndex = 28;
			this->button_move->Text = L"���������";
			this->button_move->UseVisualStyleBackColor = true;
			this->button_move->Click += gcnew System::EventHandler(this, &MyForm::button_move_Click);
			// 
			// label_move
			// 
			this->label_move->AutoSize = true;
			this->label_move->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_move->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_move->Location = System::Drawing::Point(988, 331);
			this->label_move->Name = L"label_move";
			this->label_move->Size = System::Drawing::Size(103, 24);
			this->label_move->TabIndex = 27;
			this->label_move->Text = L"���������";
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
			this->label_sec->Text = L"��";
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
			// textBox_kx_scale
			// 
			this->textBox_kx_scale->Location = System::Drawing::Point(1092, 120);
			this->textBox_kx_scale->Name = L"textBox_kx_scale";
			this->textBox_kx_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_kx_scale->TabIndex = 62;
			// 
			// label_ky_scale
			// 
			this->label_ky_scale->AutoSize = true;
			this->label_ky_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_ky_scale->Location = System::Drawing::Point(1072, 149);
			this->label_ky_scale->Name = L"label_ky_scale";
			this->label_ky_scale->Size = System::Drawing::Size(19, 13);
			this->label_ky_scale->TabIndex = 61;
			this->label_ky_scale->Text = L"Ky";
			// 
			// label_kx_scale
			// 
			this->label_kx_scale->AutoSize = true;
			this->label_kx_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_kx_scale->Location = System::Drawing::Point(1072, 123);
			this->label_kx_scale->Name = L"label_kx_scale";
			this->label_kx_scale->Size = System::Drawing::Size(19, 13);
			this->label_kx_scale->TabIndex = 60;
			this->label_kx_scale->Text = L"Kx";
			// 
			// textBox_ky_scale
			// 
			this->textBox_ky_scale->Location = System::Drawing::Point(1092, 146);
			this->textBox_ky_scale->Name = L"textBox_ky_scale";
			this->textBox_ky_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_ky_scale->TabIndex = 59;
			// 
			// textBox_x_scale
			// 
			this->textBox_x_scale->Location = System::Drawing::Point(1009, 120);
			this->textBox_x_scale->Name = L"textBox_x_scale";
			this->textBox_x_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_x_scale->TabIndex = 58;
			// 
			// label_y_scale
			// 
			this->label_y_scale->AutoSize = true;
			this->label_y_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_scale->Location = System::Drawing::Point(989, 149);
			this->label_y_scale->Name = L"label_y_scale";
			this->label_y_scale->Size = System::Drawing::Size(14, 13);
			this->label_y_scale->TabIndex = 57;
			this->label_y_scale->Text = L"Y";
			// 
			// label_x_scale
			// 
			this->label_x_scale->AutoSize = true;
			this->label_x_scale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_scale->Location = System::Drawing::Point(989, 123);
			this->label_x_scale->Name = L"label_x_scale";
			this->label_x_scale->Size = System::Drawing::Size(14, 13);
			this->label_x_scale->TabIndex = 56;
			this->label_x_scale->Text = L"X";
			// 
			// textBox_y_scale
			// 
			this->textBox_y_scale->Location = System::Drawing::Point(1009, 146);
			this->textBox_y_scale->Name = L"textBox_y_scale";
			this->textBox_y_scale->Size = System::Drawing::Size(52, 20);
			this->textBox_y_scale->TabIndex = 55;
			// 
			// button_scale
			// 
			this->button_scale->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_scale->Location = System::Drawing::Point(992, 172);
			this->button_scale->Name = L"button_scale";
			this->button_scale->Size = System::Drawing::Size(143, 35);
			this->button_scale->TabIndex = 54;
			this->button_scale->Text = L"��������������";
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
			this->label_scale->Location = System::Drawing::Point(988, 93);
			this->label_scale->Name = L"label_scale";
			this->label_scale->Size = System::Drawing::Size(157, 24);
			this->label_scale->TabIndex = 53;
			this->label_scale->Text = L"��������������";
			// 
			// textBox_alpha_turn
			// 
			this->textBox_alpha_turn->Location = System::Drawing::Point(1104, 240);
			this->textBox_alpha_turn->Name = L"textBox_alpha_turn";
			this->textBox_alpha_turn->Size = System::Drawing::Size(52, 20);
			this->textBox_alpha_turn->TabIndex = 72;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label7->Location = System::Drawing::Point(1067, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 70;
			this->label7->Text = L"Alpha";
			// 
			// textBox_x_turn
			// 
			this->textBox_x_turn->Location = System::Drawing::Point(1009, 240);
			this->textBox_x_turn->Name = L"textBox_x_turn";
			this->textBox_x_turn->Size = System::Drawing::Size(52, 20);
			this->textBox_x_turn->TabIndex = 68;
			// 
			// label_y_turn
			// 
			this->label_y_turn->AutoSize = true;
			this->label_y_turn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_turn->Location = System::Drawing::Point(989, 269);
			this->label_y_turn->Name = L"label_y_turn";
			this->label_y_turn->Size = System::Drawing::Size(14, 13);
			this->label_y_turn->TabIndex = 67;
			this->label_y_turn->Text = L"Y";
			// 
			// label_x_turn
			// 
			this->label_x_turn->AutoSize = true;
			this->label_x_turn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_turn->Location = System::Drawing::Point(989, 243);
			this->label_x_turn->Name = L"label_x_turn";
			this->label_x_turn->Size = System::Drawing::Size(14, 13);
			this->label_x_turn->TabIndex = 66;
			this->label_x_turn->Text = L"X";
			// 
			// textBox_y_turn
			// 
			this->textBox_y_turn->Location = System::Drawing::Point(1009, 266);
			this->textBox_y_turn->Name = L"textBox_y_turn";
			this->textBox_y_turn->Size = System::Drawing::Size(52, 20);
			this->textBox_y_turn->TabIndex = 65;
			// 
			// button_turn
			// 
			this->button_turn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_turn->Location = System::Drawing::Point(992, 292);
			this->button_turn->Name = L"button_turn";
			this->button_turn->Size = System::Drawing::Size(143, 35);
			this->button_turn->TabIndex = 64;
			this->button_turn->Text = L"���������";
			this->button_turn->UseVisualStyleBackColor = true;
			// 
			// label_turn
			// 
			this->label_turn->AutoSize = true;
			this->label_turn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_turn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_turn->Location = System::Drawing::Point(988, 213);
			this->label_turn->Name = L"label_turn";
			this->label_turn->Size = System::Drawing::Size(102, 24);
			this->label_turn->TabIndex = 63;
			this->label_turn->Text = L"���������";
			// 
			// textBox_kx_scale_axis
			// 
			this->textBox_kx_scale_axis->Location = System::Drawing::Point(1092, 526);
			this->textBox_kx_scale_axis->Name = L"textBox_kx_scale_axis";
			this->textBox_kx_scale_axis->Size = System::Drawing::Size(52, 20);
			this->textBox_kx_scale_axis->TabIndex = 82;
			// 
			// label_ky_scale_axis
			// 
			this->label_ky_scale_axis->AutoSize = true;
			this->label_ky_scale_axis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_ky_scale_axis->Location = System::Drawing::Point(1072, 555);
			this->label_ky_scale_axis->Name = L"label_ky_scale_axis";
			this->label_ky_scale_axis->Size = System::Drawing::Size(19, 13);
			this->label_ky_scale_axis->TabIndex = 81;
			this->label_ky_scale_axis->Text = L"Ky";
			// 
			// label_kx_scale_axis
			// 
			this->label_kx_scale_axis->AutoSize = true;
			this->label_kx_scale_axis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_kx_scale_axis->Location = System::Drawing::Point(1072, 529);
			this->label_kx_scale_axis->Name = L"label_kx_scale_axis";
			this->label_kx_scale_axis->Size = System::Drawing::Size(19, 13);
			this->label_kx_scale_axis->TabIndex = 80;
			this->label_kx_scale_axis->Text = L"Kx";
			// 
			// textBox_ky_scale_axis
			// 
			this->textBox_ky_scale_axis->Location = System::Drawing::Point(1092, 552);
			this->textBox_ky_scale_axis->Name = L"textBox_ky_scale_axis";
			this->textBox_ky_scale_axis->Size = System::Drawing::Size(52, 20);
			this->textBox_ky_scale_axis->TabIndex = 79;
			// 
			// textBox_x_scale_axis
			// 
			this->textBox_x_scale_axis->Location = System::Drawing::Point(1009, 526);
			this->textBox_x_scale_axis->Name = L"textBox_x_scale_axis";
			this->textBox_x_scale_axis->Size = System::Drawing::Size(52, 20);
			this->textBox_x_scale_axis->TabIndex = 78;
			// 
			// label_y_scale_axis
			// 
			this->label_y_scale_axis->AutoSize = true;
			this->label_y_scale_axis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_y_scale_axis->Location = System::Drawing::Point(989, 555);
			this->label_y_scale_axis->Name = L"label_y_scale_axis";
			this->label_y_scale_axis->Size = System::Drawing::Size(14, 13);
			this->label_y_scale_axis->TabIndex = 77;
			this->label_y_scale_axis->Text = L"Y";
			// 
			// label_x_scale_axis
			// 
			this->label_x_scale_axis->AutoSize = true;
			this->label_x_scale_axis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_x_scale_axis->Location = System::Drawing::Point(989, 529);
			this->label_x_scale_axis->Name = L"label_x_scale_axis";
			this->label_x_scale_axis->Size = System::Drawing::Size(14, 13);
			this->label_x_scale_axis->TabIndex = 76;
			this->label_x_scale_axis->Text = L"X";
			// 
			// textBox_y_scale_axis
			// 
			this->textBox_y_scale_axis->Location = System::Drawing::Point(1009, 552);
			this->textBox_y_scale_axis->Name = L"textBox_y_scale_axis";
			this->textBox_y_scale_axis->Size = System::Drawing::Size(52, 20);
			this->textBox_y_scale_axis->TabIndex = 75;
			// 
			// button_scale_axis
			// 
			this->button_scale_axis->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_scale_axis->Location = System::Drawing::Point(992, 578);
			this->button_scale_axis->Name = L"button_scale_axis";
			this->button_scale_axis->Size = System::Drawing::Size(143, 35);
			this->button_scale_axis->TabIndex = 74;
			this->button_scale_axis->Text = L"��������������";
			this->button_scale_axis->UseVisualStyleBackColor = true;
			this->button_scale_axis->Click += gcnew System::EventHandler(this, &MyForm::button_scale_axis_Click);
			// 
			// label_scale_axis_1
			// 
			this->label_scale_axis_1->AutoSize = true;
			this->label_scale_axis_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_scale_axis_1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_scale_axis_1->Location = System::Drawing::Point(988, 475);
			this->label_scale_axis_1->Name = L"label_scale_axis_1";
			this->label_scale_axis_1->Size = System::Drawing::Size(157, 24);
			this->label_scale_axis_1->TabIndex = 73;
			this->label_scale_axis_1->Text = L"��������������";
			// 
			// label_scale_axis_2
			// 
			this->label_scale_axis_2->AutoSize = true;
			this->label_scale_axis_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->label_scale_axis_2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_scale_axis_2->Location = System::Drawing::Point(988, 499);
			this->label_scale_axis_2->Name = L"label_scale_axis_2";
			this->label_scale_axis_2->Size = System::Drawing::Size(179, 24);
			this->label_scale_axis_2->TabIndex = 83;
			this->label_scale_axis_2->Text = L"������� ���������";
			// 
			// button_back
			// 
			this->button_back->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back->Location = System::Drawing::Point(849, 33);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(39, 38);
			this->button_back->TabIndex = 85;
			this->button_back->Text = L"<-";
			this->button_back->UseVisualStyleBackColor = true;
			// 
			// button_forward
			// 
			this->button_forward->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_forward->Location = System::Drawing::Point(894, 33);
			this->button_forward->Name = L"button_forward";
			this->button_forward->Size = System::Drawing::Size(39, 38);
			this->button_forward->TabIndex = 86;
			this->button_forward->Text = L"->";
			this->button_forward->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->ClientSize = System::Drawing::Size(1200, 675);
			this->Controls->Add(this->button_forward);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label_scale_axis_2);
			this->Controls->Add(this->textBox_kx_scale_axis);
			this->Controls->Add(this->label_ky_scale_axis);
			this->Controls->Add(this->label_kx_scale_axis);
			this->Controls->Add(this->textBox_ky_scale_axis);
			this->Controls->Add(this->textBox_x_scale_axis);
			this->Controls->Add(this->label_y_scale_axis);
			this->Controls->Add(this->label_x_scale_axis);
			this->Controls->Add(this->textBox_y_scale_axis);
			this->Controls->Add(this->button_scale_axis);
			this->Controls->Add(this->label_scale_axis_1);
			this->Controls->Add(this->textBox_alpha_turn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox_x_turn);
			this->Controls->Add(this->label_y_turn);
			this->Controls->Add(this->label_x_turn);
			this->Controls->Add(this->textBox_y_turn);
			this->Controls->Add(this->button_turn);
			this->Controls->Add(this->label_turn);
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
			this->Controls->Add(this->textBox_x_move);
			this->Controls->Add(this->label_y_move);
			this->Controls->Add(this->label_x_move);
			this->Controls->Add(this->textBox_y_move);
			this->Controls->Add(this->button_move);
			this->Controls->Add(this->label_move);
			this->Controls->Add(this->pictureBox_up);
			this->Controls->Add(this->pictureBox_down);
			this->Controls->Add(this->pictureBox_right);
			this->Controls->Add(this->pictureBox_left);
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
			this->Text = L"������������ �� ������������ ������� �1";
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

		//�������� ����������
		private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!(MessageBox::Show("�� �������, ��� ������ �����?", "������������� ������", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No))
				this->Close();
		}

		//������������ ����������
		private: System::Void btn_collapce_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = FormWindowState::Minimized;
		}
	
		//����������
		private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("����� ����������!\n\n"
				"���������� �����:\n\n"
				"\t����� �������� �����, ����� ������ �� ������������ ��������� ����� ������� ����.\n"
				"\t�����, ���� ����������� ������� � ���������� ���������� ����� ������ ������ \"��������\" ���� ����� \"�������� �����\" � ���� � ������� \"��������\".\n"
				"\n�������� �����:\n\n"
				"\t����� ������� �����, ����� ������ ������ ������� ���� �� ������, ������� �� ������ �������.\n"
				"\t�����, ���� ����������� ������� � ���������� ���������� ����� ������ ������ \"�������\" ���� ����� \"������� �����\" � ���� � ������� \"��������\".\n"
				"\t�����, � ���� � ������� \"��������\" ��� ������ ������ \"������� ��� �����\", �������� ��� �����.\n"
				"\n���������������:\n\n"
				"\t����� �������������� �����������, ����� ������� � ���������� ���������� ������, ������������ �������� �� ������ ��������������, "
				"� ������������, �� ������� �� ������ �������������� �� ��� � � �� ��� �.\n"
				"\t�����, � ���� � ������� \"��������\" ��� ������ ������ \"��������� � ���������� ��������\", ����������� ������������ � ���������� ��������.\n"
				"\n������� ������:\n\n"
				"\t��� ������ ������������, � �������� ������������ ������ ����������, ����� ������ �� ������ \"����� �����������\" �� ������, ���� � ���� � ������� \"��������\".\n"
				"\n��� ����������� ����������, � ������� ��������� ������, ��� ���� ��������� ���� �����."
				"\n��� ����������� ������� �� ������ ���������, ��� ���� ��������� ���� �����, ������ �� ��������� �������."
				,
				"����������");
		}

		//�� ������
		private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("�������� ��������� \n������ ��7-45�", "�� ������");
		}

		//�������
		private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("���������� �������� �������, ����������� ��� �������, ���������������, �������.",
				"������� ������ �27");
		}
		
		//��������� ������������ ����� �� ������ ������
		private: System::Void surface_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			Pen^ boldPen = gcnew Pen(Color::Black, 3.0f);
			//������������ ���
			g->DrawLine(boldPen, surL / 2, 0, surL / 2, surH);

			//������������ ��������������� �����
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

			//�������������� ���
			g->DrawLine(boldPen, 0, surH / 2, surL, surH / 2);

			//�������������� ��������������� �����
			g->DrawLine(Pens::Black, 0, surH / 6, surL, surH / 6);
			g->DrawLine(Pens::Black, 0, surH / 3, surL, surH / 3);
			g->DrawLine(Pens::Black, 0, 2 * surH / 3, surL, 2 * surH / 3);
			g->DrawLine(Pens::Black, 0, 5 * surH / 6, surL, 5 * surH / 6);

			//������� �����
			g->DrawLine(boldPen, surL, surH / 2, surL - 10, surH / 2 - 5);
			g->DrawLine(boldPen, surL, surH / 2, surL - 10, surH / 2 + 5);

			//������� ����
			g->DrawLine(boldPen, surL / 2, -2, surL / 2 - 5, 10);
			g->DrawLine(boldPen, surL / 2, -2, surL / 2 + 5, 10);

			/*PointF^ c = gcnew PointF(0, 0);
			picture_paint_now(c, 1, 1);*/
			int body_w = 300;
			int body_h = 150;
			g->DrawEllipse(boldPen,
				surL / 2 - body_w / 2,
				surH / 2 - body_h / 2,
				body_w,
				body_h);
		}

		//��������� ������ 1
		private: double ellipse_eq1(double x, double a, double b, double x0, double y0) {
			return(sqrt(abs((1 - pow((x - x0) / a, 2)) * pow(b, 2))) + y0);
		}

		//��������� ������ 2
		private: double ellipse_eq2(double x, double a, double b, double x0, double y0) {
			return(-sqrt(abs((1 - pow((x - x0) / a, 2)) * pow(b, 2))) + y0);
		}

		//��������� ������ �� ������ ������
		private: System::Void picture_paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			Pen^ boldPen = gcnew Pen(Color::Red, 3.0f);

			int body_w = 300;
			int body_h = 150;
			int head_r = 20;
			int eye_r = 5;

			//����
			g->DrawEllipse(boldPen, surL / 2 - body_w / 2, surH / 2 - body_h / 2, body_w, body_h);

			//������
			g->DrawEllipse(boldPen, 
				surL / 2 - body_w / 2, 
				surH / 2 - head_r, 
				head_r * 2, 
				head_r * 2);
			g->DrawEllipse(boldPen, 
				surL / 2 - body_w / 2 + head_r - eye_r, 
				surH / 2 - eye_r * 3, 
				eye_r * 2, 
				eye_r * 2);
			g->DrawLine(boldPen, 
				surL / 2 - body_w / 2 + head_r - 2 * eye_r, 
				surH / 2 + eye_r, 
				surL / 2 - body_w / 2 + head_r + 2 * eye_r, 
				surH / 2 + eye_r);

			//������� �������
			g->DrawLine(boldPen, 
				surL / 2 - body_w / 4, 
				ellipse_eq2(surL / 2 - body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2),
				surL / 2, 
				surH / 2 - body_h / 2 - body_h / 3);
			g->DrawLine(boldPen, 
				surL / 2, 
				surH / 2 - body_h / 2 - body_h / 3, 
				surL / 2 + body_w / 2, 
				surH / 2 - body_h / 2 - body_h / 3);
			g->DrawLine(boldPen, 
				surL / 2 + body_w / 2, 
				surH / 2 - body_h / 2 - body_h / 3, 
				surL / 2 + body_w / 4, 
				ellipse_eq2(surL / 2 + body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2));

			//������ �������
			g->DrawLine(boldPen, 
				surL / 2 + body_w / 4, 
				ellipse_eq1(surL / 2 + body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2),
				surL / 2 + body_w / 2, 
				surH / 2 + body_h / 2 + body_h / 3);
			g->DrawLine(boldPen, 
				surL / 2 + body_w / 2, 
				surH / 2 + body_h / 2 + body_h / 3, surL / 2, 
				surH / 2 + body_h / 2 + body_h / 3);
			g->DrawLine(boldPen, 
				surL / 2, 
				surH / 2 + body_h / 2 + body_h / 3, 
				surL / 2 - body_w / 4, 
				ellipse_eq1(surL / 2 - body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2));

			//�����
			g->DrawLine(boldPen, 
				surL / 2 + body_w / 2, 
				surH / 2, 
				surL / 2 + body_w / 2 + body_w / 3, 
				surH / 2 - body_h / 2 - body_h / 3);
			g->DrawLine(boldPen, 
				surL / 2 + body_w / 2 + body_w / 3,
				surH / 2 - body_h / 2 - body_h / 3, 
				surL / 2 + body_w / 2 + body_w / 2, 
				surH / 2 - body_h / 2);
			g->DrawLine(boldPen, 
				surL / 2 + body_w / 2 + body_w / 2, 
				surH / 2 - body_h / 2, 
				surL / 2 + body_w / 2 + body_w / 3, 
				surH / 2);
			g->DrawLine(boldPen,
				surL / 2 + body_w / 2 + body_w / 3,
				surH / 2,
				surL / 2 + body_w / 2 + body_w / 2,
				surH / 2 + body_h / 3);
			g->DrawLine(boldPen,
				surL / 2 + body_w / 2 + body_w / 2,
				surH / 2 + body_h / 3,
				ellipse_eq1(surH / 2 + body_h / 3, body_h / 2, body_w / 2, surH / 2, surL / 2),
				surH / 2 + body_h / 3);
		}

		//����������� ������������ �����
		private: System::Void surface_Paint_now() {
			Graphics^ g = surface->CreateGraphics();
			g->Clear(Color::White);
			Pen^ boldPen = gcnew Pen(Color::Black, 3.0f);

			//������������ ��������������� �����
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

			//�������������� ��������������� �����
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

					//������������ ���
					g->DrawLine(boldPen, x_zero, 0, x_zero, surH);

				if (min_x < max_x) {
					//������� �����
					g->DrawLine(boldPen, x_zero, -2, x_zero - 5, 10);
					g->DrawLine(boldPen, x_zero, -2, x_zero + 5, 10);
				}
				else {
					//������� ����
					g->DrawLine(boldPen, x_zero, surH - 2, x_zero - 5, surH - 10);
					g->DrawLine(boldPen, x_zero, surH - 2, x_zero + 5, surH - 10);
				}
			}

			if (min_y * max_y <= 0) {
					double k = max_y / (max_y - min_y);
					double y_zero = surH * k;

					//�������������� ���
					g->DrawLine(boldPen, 0, y_zero, surL, y_zero);

				if (min_y < max_y) {
					//������� ������
					g->DrawLine(boldPen, surL, y_zero, surL - 10, y_zero - 5);
					g->DrawLine(boldPen, surL, y_zero, surL - 10, y_zero + 5);
				}
				else {
					//������� �����
					g->DrawLine(boldPen, 0, y_zero, 10, y_zero - 5);
					g->DrawLine(boldPen, 0, y_zero, 10, y_zero + 5);
				}
			}

		}

		//��������� ������
		private: System::Void picture_paint_now(Figure^ fig_now) {
			Graphics^ g = surface->CreateGraphics();
			Pen^ boldPen = gcnew Pen(Color::Red, 3.0f);

			int body_w_beg = 300;
			int body_h_beg = 150;
			int head_w_beg = 20;
			int eye_w_beg = 5;
			int head_h_beg = 20;
			int eye_h_beg = 5;

			int body_w = body_w_beg * fig_now->kx;
			int body_h = body_h_beg * fig_now->ky;
			int head_w = head_w_beg * fig_now->kx;
			int eye_w = eye_w_beg * fig_now->kx;
			int head_h = head_h_beg * fig_now->ky;
			int eye_h = eye_h_beg * fig_now->ky;

			PointF^ mod_center = gcnew PointF(0, 0);
			mod_center = modifyPoint(fig_now->center);

			//����
			g->DrawEllipse(boldPen,
				(int)mod_center->X - body_w / 2, // ���� ��������������� ���� ��-������������!!
				(int)mod_center->Y - body_h / 2,
				body_w,
				body_h);

			//������
			//g->DrawEllipse(boldPen,
			//	surL / 2 - body_w / 2,
			//	surH / 2 - head_r,
			//	head_r * 2,
			//	head_r * 2);
			//g->DrawEllipse(boldPen,
			//	surL / 2 - body_w / 2 + head_r - eye_r,
			//	surH / 2 - eye_r * 3,
			//	eye_r * 2,
			//	eye_r * 2);
			//g->DrawLine(boldPen,
			//	surL / 2 - body_w / 2 + head_r - 2 * eye_r,
			//	surH / 2 + eye_r,
			//	surL / 2 - body_w / 2 + head_r + 2 * eye_r,
			//	surH / 2 + eye_r);

			////������� �������
			//g->DrawLine(boldPen,
			//	surL / 2 - body_w / 4,
			//	ellipse_eq2(surL / 2 - body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2),
			//	surL / 2,
			//	surH / 2 - body_h / 2 - body_h / 3);
			//g->DrawLine(boldPen,
			//	surL / 2,
			//	surH / 2 - body_h / 2 - body_h / 3,
			//	surL / 2 + body_w / 2,
			//	surH / 2 - body_h / 2 - body_h / 3);
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 2,
			//	surH / 2 - body_h / 2 - body_h / 3,
			//	surL / 2 + body_w / 4,
			//	ellipse_eq2(surL / 2 + body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2));

			////������ �������
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 4,
			//	ellipse_eq1(surL / 2 + body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2),
			//	surL / 2 + body_w / 2,
			//	surH / 2 + body_h / 2 + body_h / 3);
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 2,
			//	surH / 2 + body_h / 2 + body_h / 3, surL / 2,
			//	surH / 2 + body_h / 2 + body_h / 3);
			//g->DrawLine(boldPen,
			//	surL / 2,
			//	surH / 2 + body_h / 2 + body_h / 3,
			//	surL / 2 - body_w / 4,
			//	ellipse_eq1(surL / 2 - body_w / 4, body_w / 2, body_h / 2, surL / 2, surH / 2));

			////�����
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 2,
			//	surH / 2,
			//	surL / 2 + body_w / 2 + body_w / 3,
			//	surH / 2 - body_h / 2 - body_h / 3);
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 2 + body_w / 3,
			//	surH / 2 - body_h / 2 - body_h / 3,
			//	surL / 2 + body_w / 2 + body_w / 2,
			//	surH / 2 - body_h / 2);
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 2 + body_w / 2,
			//	surH / 2 - body_h / 2,
			//	surL / 2 + body_w / 2 + body_w / 3,
			//	surH / 2);
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 2 + body_w / 3,
			//	surH / 2,
			//	surL / 2 + body_w / 2 + body_w / 2,
			//	surH / 2 + body_h / 3);
			//g->DrawLine(boldPen,
			//	surL / 2 + body_w / 2 + body_w / 2,
			//	surH / 2 + body_h / 3,
			//	ellipse_eq1(surH / 2 + body_h / 3, body_h / 2, body_w / 2, surH / 2, surL / 2),
			//	surH / 2 + body_h / 3);
		}

		//�������������� ��������� ����� � ����������� �� �������
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

		//�������������� ��������� �� ������ � ����������� �����
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

		//��������������� ������
		private: System::Void button_scale_Click(System::Object^ sender, System::EventArgs^ e) {
			double centre_x = 0;
			double centre_y = 0;
			double d_x = 0;
			double d_y = 0;

			if (Double::TryParse(textBox_x_scale->Text, centre_x) && Double::TryParse(textBox_y_scale->Text, centre_y) &&
				Double::TryParse(textBox_kx_scale->Text, d_x) && Double::TryParse(textBox_ky_scale->Text, d_y)) {

				PointF^ pt_now = gcnew PointF(centre_x, centre_y);
				Figure^ st_now = gcnew Figure();

				st_now->scale(d_x, d_y, pt_now, states);

				surface_Paint_now();
				picture_paint_now(states[states->Count - 1]);

				textBox_x_scale->Text = "";
				textBox_y_scale->Text = "";
				textBox_kx_scale->Text = "";
				textBox_ky_scale->Text = "";
			}
			else {
				textBox_x_scale->Text = "";
				textBox_y_scale->Text = "";
				textBox_kx_scale->Text = "";
				textBox_ky_scale->Text = "";
				MessageBox::Show("������������ ����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		//����������� ��������� � �������� �������
		private: System::Void surface_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			double x_now = e->X;
			double y_now = e->Y;

			PointF^ real = gcnew PointF(x_now, y_now);
			PointF^ res = gcnew PointF(0, 0);

			res = modifyPoint_from_real(real);

			textBox_x_now->Text = res->X.ToString();
			textBox_y_now->Text = res->Y.ToString();
		}

		//������ ���������
		private: double my_abs(double a, double b) {
			return (a - b) > 0 ? a - b : b - a;
		}
		
		//����������� � ���������� ��������
		private: System::Void ����������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			label_min_x->Text = "-164,69466";
			label_min_y->Text = "-100";

			label_max_x->Text = "164,69466";
			label_max_y->Text = "100";

			label_mid_x->Text = "0";
			label_mid_y->Text = "0";

			surface_Paint_now();
			if (states->Count > 0)
				picture_paint_now(states[states->Count - 1]);
		}

		//���������� ����� ����� ������� 
		private: double dist(PointF^ point1, PointF^ point2) {
			double dx = point1->X - point2->X;
			double dy = point1->Y - point2->Y;
			return sqrt(dx * dx + dy * dy);
		}

		//���������� ��������� ����� ����������� ������ � ��������������
		private: PointF^ intersection(PointF^ point1, PointF^ point2, PointF^ point3) {
			PointF^ newPoint = gcnew PointF(0, 0);

			double k = (point2->Y - point3->Y) / (point2->X - point3->X);

			newPoint->X = ((k * point2->X + point1->X / k + point1->Y - point2->Y) / (k + 1 / k));
			newPoint->Y = (k * (newPoint->X - point2->X) + point2->Y);

			return newPoint;
		}

		//��������������� ������� ���������
		private: System::Void button_scale_axis_Click(System::Object^ sender, System::EventArgs^ e) {
			double centre_x = 0;
			double centre_y = 0;
			double d_x = 0;
			double d_y = 0;

			if (Double::TryParse(textBox_x_scale_axis->Text, centre_x) && Double::TryParse(textBox_y_scale_axis->Text, centre_y) &&
				Double::TryParse(textBox_kx_scale_axis->Text, d_x) && Double::TryParse(textBox_ky_scale_axis->Text, d_y)) {
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

				surface_Paint_now();
				if (states->Count > 0)
					picture_paint_now(states[states->Count - 1]);

				textBox_x_scale_axis->Text = "";
				textBox_y_scale_axis->Text = "";
				textBox_kx_scale_axis->Text = "";
				textBox_ky_scale_axis->Text = "";
			}
			else {
				textBox_x_scale_axis->Text = "";
				textBox_y_scale_axis->Text = "";
				textBox_kx_scale_axis->Text = "";
				textBox_ky_scale_axis->Text = "";
				MessageBox::Show("������������ ����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		//������� ������
		private: System::Void button_move_Click(System::Object^ sender, System::EventArgs^ e) {
			double d_x = 0;
			double d_y = 0;

			if (Double::TryParse(textBox_x_move->Text, d_x) && Double::TryParse(textBox_y_move->Text, d_y)) {
				Figure^ st_now = gcnew Figure();

				st_now->move(d_x, d_y, states);

				textBox_x_move->Text = "";
				textBox_y_move->Text = "";

				surface_Paint_now();
				picture_paint_now(states[states->Count - 1]);
			}
			else {
				textBox_x_move->Text = "";
				textBox_y_move->Text = "";

				MessageBox::Show("������������ ����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
	};
}