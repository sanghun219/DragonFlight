#include "Monster.h"


Monster::Monster():Character2D(10,5)
{
	for (int i = 0; i < 15; i++)
		sprite->SpriteByLine[i].clear();
	sprite->SpriteByLine[0] = "";
	sprite->SpriteByLine[1] = "<  >";
	sprite->SpriteByLine[2] = " กิ ";
}


Monster::~Monster()
{
}

void Monster::Init()
{
	
}

void Monster::Update()
{
	
}

void Monster::Draw()
{
	sprite->DrawSprite(Color::WHITE);
	
}

void Monster::Destroy()
{
}

