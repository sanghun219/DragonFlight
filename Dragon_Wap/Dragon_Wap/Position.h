#pragma once
#include "Cursor.h"
class Position 
{
public:
	// position
	unsigned short X;
	unsigned short Y;
	// collision detect
	// left_top = (x, y)
	// left_bottom = (x, y + height)
	// right_top = (x+width, y)
	// right_bottom = (x+width, y+width)
	unsigned short width;
	unsigned short height;

public:
	Position(unsigned short _x, unsigned short _y) :X(_x), Y(_y) {}
	void SetPosition(const unsigned short _x, const unsigned short _y) 
	{
		this->X = _x;
		this->Y = _y;
	}
	const unsigned short &GetPositionX()const
	{
		return X;
	}
	const unsigned short &GetPositionY()const
	{
		return Y;
	}
};