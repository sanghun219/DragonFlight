#include "Character.h"



Character2D::Character2D(Position* pos)
{
	origin = new Position(*pos);
	GunPos = new Position(*pos);
	sprite = new Sprite(origin);
}

Character2D::Character2D(unsigned short xPos, unsigned short yPos)
{
	origin = new Position(xPos, yPos);
	GunPos = new Position(xPos,yPos);
	sprite = new Sprite(origin);
}


Character2D::~Character2D()
{
	if (origin != nullptr)
	{
		delete origin;
		origin = nullptr;
	}
}

//캐릭터 클래스를 상속받은 클래스에서 구현할 것
void Character2D::Init()
{
	return;
}

//캐릭터 클래스를 상속받은 클래스에서 구현할 것
void Character2D::Update()
{
	
	return;
}

//캐릭터 클래스를 상속받은 클래스에서 구현할 것
void Character2D::Draw()
{
	return;
}

//캐릭터 클래스를 상속받은 클래스에서 구현할 것
void Character2D::Destroy()
{
	return;
}
