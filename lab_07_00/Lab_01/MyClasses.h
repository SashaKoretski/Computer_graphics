#pragma once

#define MASK_LEFT   0b0001
#define MASK_RIGHT  0b0010
#define MASK_BOTTOM 0b0100
#define MASK_TOP    0b1000

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
