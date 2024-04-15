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

public ref class myTriangle {
public:
	 
};
