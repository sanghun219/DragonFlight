#include "Math.h"

void Position::SetPosition(const unsigned short _x, const unsigned short _y)
{
	this->X = _x;
	this->Y = _y;
}

unsigned short Position::GetPositionX() const
{
	return X;
}
unsigned short Position::GetPositionY() const
{
	return Y;
}