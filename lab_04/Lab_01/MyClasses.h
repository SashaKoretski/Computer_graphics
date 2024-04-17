#pragma once

#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <cliext/vector>

using namespace cliext;

using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

int sign(double num) {
	if (num > 0)
		return 1;
	if (num < 0)
		return -1;
	return 0;
}

Color NewColor(Color oldColor, int num) {
	int newRed = Math::Min(oldColor.R + num, 255); 
	int newGreen = Math::Min(oldColor.G + num, 255);
	int newBlue = Math::Min(oldColor.B + num, 255);
	return Color::FromArgb(newRed, newGreen, newBlue);
}

enum style {
	error,
	param,
	Bres, 
	kanon,
	lib
};

enum spec_style {
	circ,
	eli_a,
	eli_b,
	er
};

public ref class Ellipce {
public:
	PointF^ cent;
	float halfax_a;
	float halfax_b;

	int pointSize = 1;

	void param(Graphics^ g, Color col) {
		Brush^ Pen = gcnew SolidBrush(col);

		if (halfax_a == 0 || halfax_b == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		double step = 1;

		if (halfax_a > halfax_b)
			step /= halfax_a;
		else
			step /= halfax_b;

		for (double i = 0; i <= 3.1415 / 2 + step; i += step) {
			double x = halfax_a * cos(i);
			double y = halfax_b * sin(i);

			g->FillRectangle(Pen, x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, x + cent->X, -y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, -y + cent->Y, pointSize, pointSize);
		}
	}

	void Bres(Graphics^ g, Color col) {
		Brush^ Pen = gcnew SolidBrush(col);

		if (halfax_a == 0 || halfax_b == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		double x = 0;
		double y = halfax_b;
		double sqr_a = halfax_a * halfax_a;
		double sqr_b = halfax_b * halfax_b;

		g->FillRectangle(Pen, x + cent->X, y + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, -x + cent->X, y + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, x + cent->X, -y + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, -x + cent->X, -y + cent->Y, pointSize, pointSize);

		double delta = sqr_b - sqr_a * (2 * halfax_b + 1);

		while (y > 0) {
			if (delta <= 0) {
				double d1 = 2 * delta + sqr_a * (2 * y - 1);
				x++;
				delta += sqr_b * (2 * x + 1);
				if (d1 >= 0) {
					y--;
					delta += sqr_a * (-2 * y + 1);
				}
			}
			else {
				double d2 = 2 * delta + sqr_b * (-2 * x - 1);
				y--;
				delta += sqr_a * (-2 * y + 1);
				if (d2 < 0) {
					x++;
					delta += sqr_b * (2 * x + 1);
				}
			}

			g->FillRectangle(Pen, x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, x + cent->X, -y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, -y + cent->Y, pointSize, pointSize);
		}
	}

	void kanon(Graphics^ g, Color col) {
		Brush^ Pen = gcnew SolidBrush(col);

		if (halfax_a == 0 || halfax_b == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		int x_center = static_cast<int>(cent->X);
		int y_center = static_cast<int>(cent->Y);

		int x_max = x_center + static_cast<int>(abs(halfax_a));
		int y_max = y_center + static_cast<int>(abs(halfax_b));

		for (int x = x_center - static_cast<int>(abs(halfax_a)); x <= x_max; x++) {
			double y = sqrt(1 - pow((x - x_center) / halfax_a, 2)) * halfax_b;
			int y_int = static_cast<int>(round(y));

			if (y_int <= y_max - y_center) {
				g->FillRectangle(Pen, x, y_center + y_int, pointSize, pointSize);
				g->FillRectangle(Pen, x, y_center - y_int, pointSize, pointSize);
			}
		}

		for (int y = y_center - static_cast<int>(abs(halfax_b)); y <= y_max; y++) {
			double x = sqrt(1 - pow((y - y_center) / halfax_b, 2)) * halfax_a;
			int x_int = static_cast<int>(round(x));

			if (x_int <= x_max - x_center) {
				g->FillRectangle(Pen, x_center + x_int, y, pointSize, pointSize);
				g->FillRectangle(Pen, x_center - x_int, y, pointSize, pointSize);
			}
		}
	}

	void lib(Graphics^ g, Color col) {
		Pen^ newPen = gcnew Pen(col, pointSize);
		g->DrawEllipse(newPen, cent->X - halfax_a, cent->Y - halfax_b, 2 * halfax_a, 2 * halfax_b);
	}
};

public ref class Circle {
public:
	PointF^ cent;
	float rad;

	int pointSize = 1;

	void param(Graphics^ g, Color col) {
		Brush^ Pen = gcnew SolidBrush(col);

		if (rad == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		double step = 1 / rad;

		for (double i = 0; i <= 3.1415 / 4 + step; i += step) {
			double x = rad * cos(i);
			double y = rad * sin(i);

			g->FillRectangle(Pen, x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, x + cent->X, -y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, -y + cent->Y, pointSize, pointSize);

			g->FillRectangle(Pen, -y + cent->X, -x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, y + cent->X, x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -y + cent->X, x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, y + cent->X, -x + cent->Y, pointSize, pointSize);
		}
	}

	void Bres(Graphics^ g, Color col) {
		Brush^ Pen = gcnew SolidBrush(col);

		if (rad == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		double x = 0;
		double y = rad;
		g->FillRectangle(Pen, x + cent->X, y + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, -x + cent->X, y + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, x + cent->X, -y + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, -x + cent->X, -y + cent->Y, pointSize, pointSize);

		g->FillRectangle(Pen, -y + cent->X, -x + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, y + cent->X, x + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, -y + cent->X, x + cent->Y, pointSize, pointSize);
		g->FillRectangle(Pen, y + cent->X, -x + cent->Y, pointSize, pointSize);

		double delta = 2 - 2 * rad;
		while (x < y) {
			if (delta <= 0) {
				double d1 = 2 * (delta + y) - 1;
				x++;

				if (d1 >= 0) {
					y--;
					delta += 2 * (x - y + 1);
				}
				else
					delta += 2 * x + 1;
			}
			else {
				double d2 = 2 * (delta - x) - 1;
				y--;
				if (d2 < 0) {
					x++;
					delta += 2 * (x - y + 1);
				}
				else
					delta -= 2 * y - 1;
			}

			g->FillRectangle(Pen, x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, x + cent->X, -y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, -y + cent->Y, pointSize, pointSize);

			g->FillRectangle(Pen, -y + cent->X, -x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, y + cent->X, x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -y + cent->X, x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, y + cent->X, -x + cent->Y, pointSize, pointSize);
		}
	}

	void kanon(Graphics^ g, Color col) {
		Brush^ Pen = gcnew SolidBrush(col);

		if (rad == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		for (double x = 0; x <= rad / sqrt(2) + 1; x++) {
			double y = sqrt(pow(rad, 2) - pow(x, 2));

			g->FillRectangle(Pen, x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, x + cent->X, -y + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -x + cent->X, -y + cent->Y, pointSize, pointSize);

			g->FillRectangle(Pen, -y + cent->X, -x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, y + cent->X, x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, -y + cent->X, x + cent->Y, pointSize, pointSize);
			g->FillRectangle(Pen, y + cent->X, -x + cent->Y, pointSize, pointSize);
		}
	}

	void lib(Graphics^ g, Color col) {
		Pen^ newPen = gcnew Pen(col, pointSize);
		g->DrawEllipse(newPen, cent->X - rad, cent->Y - rad, 2 * rad, 2 * rad);
	}
};