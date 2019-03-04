#include "Bullet.h"

Bullet::Bullet(IObject & obj)
{
	this->position = obj.position;
}

Bullet::~Bullet()
{
}

void Bullet::Move(DIRECT dir, double speed)
{
	switch (dir)
	{
	case DIRECT::FORWARD:
		this->position.SetPosition(this->position.GetPositionX(), this->position.GetPositionY()-1);
		break;
	case DIRECT::LEFT:
		this->position.SetPosition(this->position.GetPositionX()-1, this->position.GetPositionY());
		break;
	case DIRECT::RIGHT:
		this->position.SetPosition(this->position.GetPositionX()+1, this->position.GetPositionY());
		break;
	case DIRECT::BACK:
		this->position.SetPosition(this->position.GetPositionX(), this->position.GetPositionY() + 1);
		break;
	default:
		break;
	}
}

void Bullet::Init()
{
}

void Bullet::Update()
{
	
}

void Bullet::Draw()
{
}

void Bullet::Destroy()
{
}