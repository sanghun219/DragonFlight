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
public:
	unsigned int HP;
	unsigned int MP;
	double Exp;
	std::string Name;
	double Speed;
	bool isDead;
public:
	Status(unsigned int hp, unsigned int mp, double exp,
		std::string name, double speed) 
	{
		this->HP = hp;
		this->MP = mp;
		this->Exp = exp;
		this->Name = name;
		this->Speed = speed;
		isDead = false;
	};
	virtual ~Status() {};
};

