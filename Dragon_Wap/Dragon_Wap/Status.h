#pragma once
#include <string>
class Status
{
protected:
	unsigned int HP;
	unsigned int MP;
	double Exp;
	std::string Name;
	double Speed;
public:

public:
	Status(unsigned int hp, unsigned int mp, double exp,
		std::string name, double speed) {};
	virtual ~Status() {};
};

