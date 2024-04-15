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
	CDA,
	Bres_fl, 
	Bres_int,
	Bres_st,
	By,
	lib
};

public ref class Line {
public:
	PointF^ beg;
	PointF^ end;

	int pointSize = 1;

	int CDA(Graphics^ g, Color col) {
		int step = 0;
		Brush^ Pen = gcnew SolidBrush(col);

		if (end->X - beg->X == 0 && end->Y - beg->Y == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return step;
		}

		double len = 0;
		if (abs(end->X - beg->X) > abs(end->Y - beg->Y))
			len = abs(end->X - beg->X);
		else 
			len = abs(end->Y - beg->Y);

		double dx = (end->X - beg->X) / len;
		double dy = (end->Y - beg->Y) / len;

		double x = round(beg->X);
		double y = round(beg->Y);

		for (int i = 0; i < len; i++) {
			if (!(round(x + dx) == round(x) && round(y + dy) != round(y) ||
				round(x + dx) != round(x) && round(y + dy) == round(y)))
				step++;

			g->FillRectangle(Pen, x, y, pointSize, pointSize);
			x += dx;
			y += dy;
		}

		return step;
	}

	int Bres_float(Graphics^ g, Color col) {
		int step = 0;
		Brush^ Pen = gcnew SolidBrush(col);

		if (end->X - beg->X == 0 && end->Y - beg->Y == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return step;
		}

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

		double tan = dy / dx;
		double error = tan - 0.5;

		double x = beg->X;
		double y = beg->Y;

		for (int i = 0; i < dx + 1; i++) {
			g->FillRectangle(Pen, x, y, pointSize, pointSize);

			double add_x = x;
			double add_y = y;

			if (error >= 0) {
				if (ch)
					x += x_sign;
				else
					y += y_sign;

				error--;
			}

			if (ch)
				y += y_sign;
			else
				x += x_sign;

			error += tan;

			if (!(add_x == x && add_y != y || add_x != x && add_y == y))
				step++;
		}

		return step;
	}

	int Bres_int(Graphics^ g, Color col) {
		int step = 0;
		Brush^ Pen = gcnew SolidBrush(col);

		if (end->X - beg->X == 0 && end->Y - beg->Y == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return step;
		}

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
			g->FillRectangle(Pen, x, y, pointSize, pointSize);

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

			if (add_x != x && add_y != y)
				step++;
		}

		return step;
	}

	int Bres_step(Graphics^ g, Color col) {
		int step = 0;

		if (end->X - beg->X == 0 && end->Y - beg->Y == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return step;
		}

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

		int intensity = 255;
		double tan = dy / dx;
		double error = 0.5 * intensity;
		tan *= intensity;
		double w = intensity - tan;

		double x = beg->X;
		double y = beg->Y;

		for (int i = 0; i < dx + 1; i++) {
			Color colNow = NewColor(col, round(error));
			Brush^ Pen = gcnew SolidBrush(colNow);
			g->FillRectangle(Pen, x, y, pointSize, pointSize);

			double add_x = x;
			double add_y = y;

			if (error > w) {
				x += x_sign;
				y += y_sign;

				error -= w;
			}
			else {
				if (ch)
					y += y_sign;
				else
					x += x_sign;
				error += tan;
			}

			if (!(add_x == x && add_y != y || add_x != x && add_y == y))
				step++;
		}

		return step;
	}

	int By(Graphics^ g, Color col) {
		int step = 0;

		if (end->X - beg->X == 0 && end->Y - beg->Y == 0) {
			MessageBox::Show("Пустой отрезок!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return step;
		}

		double save_x = beg->X;
		double save_y = beg->Y;

		double dx = end->X - beg->X;
		double dy = end->Y - beg->Y;

		int count = 1;
		int intensity = 255;

		if (fabs(dy) > fabs(dx)) {
			double tan = dx / dy;
			double add_tan = tan;

			if (beg->Y > end->Y) {
				add_tan *= -1;
				count *= -1;
			}

			double end_y;
			if (dy < dx)
				end_y = round(end->Y) - 1;
			else
				end_y = round(end->Y) + 1;

			for (int i = round(beg->Y); i < end_y; i += count) {
				double len = beg->X - floor(beg->X);

				Color colNow = NewColor(col, round(fabs(1 - len) * intensity));
				Brush^ Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, (int)beg->X + 1, i, pointSize, pointSize);

				colNow = NewColor(col, round(fabs(len) * intensity));
				Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, (int)beg->X, i, pointSize, pointSize);

				if (i < end->Y && (int)beg->X != (int)(beg->X + tan))
					step++;

				beg->X += add_tan;
			}

			for (int i = round(beg->Y); i > end_y; i += count) {
				double len = beg->X - floor(beg->X);

				Color colNow = NewColor(col, round(fabs(1 - len) * intensity));
				Brush^ Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, (int)beg->X + 1, i, pointSize, pointSize);

				colNow = NewColor(col, round(fabs(len) * intensity));
				Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, (int)beg->X, i, pointSize, pointSize);

				if (i > end->Y && (int)beg->X != (int)(beg->X + tan))
					step++;

				beg->X += add_tan;
			}
		}
		else {
			double tan = dy / dx;
			double add_tan = tan;

			if (beg->X > end->X) {
				add_tan *= -1;
				count *= -1;
			}

			double end_x;
			if (dy > dx)
				end_x = round(end->X) - 1;
			else
				end_x = round(end->X) + 1;

			for (int i = round(beg->X); i < end_x; i += count) {
				double len = beg->Y - floor(beg->Y);

				Color colNow = NewColor(col, round(fabs(1 - len) * intensity));
				Brush^ Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, i, (int)beg->Y + 1, pointSize, pointSize);

				colNow = NewColor(col, round(fabs(len) * intensity));
				Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, i, (int)beg->Y, pointSize, pointSize);

				if (i < end->X && (int)beg->Y != (int)(beg->Y + tan))
					step++;

				beg->Y += add_tan;
			}

			for (int i = round(beg->X); i > end_x; i += count) {
				double len = beg->Y - floor(beg->Y);

				Color colNow = NewColor(col, round(fabs(1 - len) * intensity));
				Brush^ Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, i, (int)beg->Y + 1, pointSize, pointSize);

				colNow = NewColor(col, round(fabs(len) * intensity));
				Pen = gcnew SolidBrush(colNow);
				g->FillRectangle(Pen, i, (int)beg->Y, pointSize, pointSize);

				if (i > end->X && (int)beg->Y != (int)(beg->Y + tan))
					step++;

				beg->Y += add_tan;
			}
		}

		beg->X = save_x;
		beg->Y = save_y;
		return step;
	}

	void lib(Graphics^ g, Color col) {
		Pen^ newPen = gcnew Pen(col, pointSize);
		g->DrawLine(newPen, beg->X, beg->Y, end->X, end->Y);
	}

	void rotate(float angleInDegrees) {
		float dx = end->X - beg->X;
		float dy = end->Y - beg->Y;

		float angleInRadians = (angleInDegrees * 3.14159265f) / 180.0f;

		float newX = dx * cos(angleInRadians) - dy * sin(angleInRadians);
		float newY = dx * sin(angleInRadians) + dy * cos(angleInRadians);

		end->X = beg->X + newX;
		end->Y = beg->Y + newY;
	}
};