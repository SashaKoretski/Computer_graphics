#pragma once

public ref class myPoint {
public:
	double X;
	double Y;

	myPoint(double x, double y)
	{
		X = x;
		Y = y;
	}

	bool operator==(myPoint^ other)
	{
		return (this->X == other->X) && (this->Y == other->Y);
	}
};

public ref class myLine {
public:
	myPoint^ A;
	myPoint^ B;

	myLine(myPoint^ a, myPoint^ b)
	{
		A = a;
		B = b;
	}
};