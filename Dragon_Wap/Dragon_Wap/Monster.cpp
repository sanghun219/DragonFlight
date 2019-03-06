#include "Monster.h"



void Monster::Init()
{
	this->current_scene->Gp->GpsInit();
}

void Monster::Update()
{
	this->current_scene->Gp->GpsDraw(GPS::MONSTER1, MOTION::NORMAL, 10, 10, Color::WHITE);
	




}

void Monster::Draw()
{
}

void Monster::Destroy()
{
}

Monster::Monster()
{
}


Monster::~Monster()
{
}
