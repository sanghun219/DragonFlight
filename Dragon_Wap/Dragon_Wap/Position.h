#pragma once
class Position 
{
private:
	unsigned short X;
	unsigned short Y;
public:
	Position(unsigned short _x, unsigned short _y) :X(_x), Y(_y) {}
	void SetPosition(const unsigned short &_x, const unsigned short &_y) 
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