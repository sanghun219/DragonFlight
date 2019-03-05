#pragma once
#include <string>
enum class MOTION
{
	NORMAL,
	ATTACK,
	FEVER,
	ATTACKED,
	DIE,
};
enum class DIRECT
{
	FORWARD,
	LEFT,
	RIGHT,
	BACK,
};

class Status
{
protected:
	unsigned int HP;
	unsigned int MP;
	int x;
	int y;
	double Exp;
	std::string Name;
	double Speed;
	MOTION motion;
public:

public:
	Status(unsigned int hp, unsigned int mp, double exp,
		std::string name, double speed) {};
	virtual ~Status() {};
};

