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

public ref class Figure {
public:
	PointF^ center = gcnew PointF(0, 0);
	double Alpha = 0;
	double kx = 1;
	double ky = 1;

	void scale(double kx, double ky, PointF^ cent, List<Figure^>^ stat) {

		Figure^ st_now = gcnew Figure;

		if (stat->Count > 0) {
			Figure^ lastFigure = stat[stat->Count - 1];

			st_now->kx = lastFigure->kx * kx;
			st_now->ky = lastFigure->ky * ky;

			st_now->center->X = kx * lastFigure->center->X + cent->X * (1 - kx);
			st_now->center->Y = ky * lastFigure->center->Y + cent->Y * (1 - ky);
		}
		else {
			st_now->kx = kx;
			st_now->ky = ky;

			st_now->center->X = cent->X * (1 - kx);
			st_now->center->Y = cent->Y * (1 - ky);
		}

		stat->Add(st_now);
	}

	void move(double dx, double dy, List<Figure^>^ stat) {

		Figure^ st_now = gcnew Figure;

		if (stat->Count > 0) {
			Figure^ last_el = stat[stat->Count - 1];

			st_now->center->X = last_el->center->X + dx;
			st_now->center->Y = last_el->center->Y + dy;
			st_now->Alpha = last_el->Alpha;
			st_now->kx = last_el->kx;
			st_now->ky = last_el->ky;
		}
		else {
			st_now->center->X = dx;
			st_now->center->Y = dy;
		}

		stat->Add(st_now);
	}

	void rotate(PointF^ cen, double alp) {
		this->center->X = cen->X + (this->center->X - cen->X) * cos(alp) + (this->center->Y - cen->Y) * sin(alp);
		this->center->Y = cen->Y - (this->center->X - cen->X) * sin(alp) + (this->center->Y - cen->Y) * cos(alp);

		this->Alpha += alp;
		if (this->Alpha > 360) 
			this->Alpha -= 360;

		if (this->Alpha < -360)
			this->Alpha += 360;
	}
};