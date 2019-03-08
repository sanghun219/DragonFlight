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

//ĳ���� Ŭ������ ��ӹ��� Ŭ�������� ������ ��
void Character2D::Init()
{
	return;
}

//ĳ���� Ŭ������ ��ӹ��� Ŭ�������� ������ ��
void Character2D::Update()
{
	
	return;
}

//ĳ���� Ŭ������ ��ӹ��� Ŭ�������� ������ ��
void Character2D::Draw()
{
	return;
}

//ĳ���� Ŭ������ ��ӹ��� Ŭ�������� ������ ��
void Character2D::Destroy()
{
	return;
}
