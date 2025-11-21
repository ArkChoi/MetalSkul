#pragma once

struct FVector2D
{
	int X;
	int Y;

	bool operator== (const FVector2D& other)
	{
		if (this->X == other.X && this->Y == other.Y)
		{
			return true;
		}
		return false;
	}

	const FVector2D& operator=(const FVector2D& RHS)
	{
		this->X = RHS.X;
		this->Y = RHS.Y;
	}
};