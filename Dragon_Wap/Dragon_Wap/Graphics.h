#pragma once
#include <string>
#include "Color.h"
#include "Status.h"
enum class GPS 
{
	PLAYER,
	MONSTER1,
	MONSTER2,
	MONSTER3,
	MONSTER4,
	MONSTER5,
	NORMAL_MON_END,
	MDMONSTER1,
	MDMONSTER2,
	MDMONSTER3,
	BOSS1,
	END,
};
enum class GPS_SIZE 
{
	NORMAL =3,
	BIG =8,
	BOSS =12,
	END,
};
class Graphics 
{
public:
	std::string NormalCharacter[static_cast<unsigned int>(GPS::NORMAL_MON_END)][3];
	std::string BigCharacter[static_cast<unsigned int>(GPS::BOSS1)][6];
	std::string BossCharcter[static_cast<unsigned int>(GPS::BOSS1)][12];

public:
	void GpsInit();
	void GpsDraw (GPS gps,MOTION motion, int x, int y,Color color = Color::WHITE)const;
	//void Animate();
	
public:
	Graphics();
	~Graphics();
};