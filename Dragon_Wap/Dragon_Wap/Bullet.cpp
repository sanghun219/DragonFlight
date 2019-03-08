#include "Bullet.h"

Bullet::Bullet(const Position & obj):Character2D(obj.GetPositionX()
	,obj.GetPositionY())
{
	sprite->SpriteByLine[0] = " * ";
}

Bullet::~Bullet()
{
}

void Bullet::Move(DIRECT dir, double speed)
{
	switch (dir)
	{
	case DIRECT::FORWARD:
		origin->SetPosition(origin->GetPositionX(), origin->GetPositionY()-1);
		break;
	case DIRECT::LEFT:
		origin->SetPosition(origin->GetPositionX()-1, origin->GetPositionY());
		break;
	case DIRECT::RIGHT:
		origin->SetPosition(origin->GetPositionX()+1, origin->GetPositionY());
		break;
	case DIRECT::BACK:
		origin->SetPosition(origin->GetPositionX(), origin->GetPositionY() + 1);
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
	Bullet::Move(DIRECT::FORWARD, 10);

}

void Bullet::Draw()
{
	sprite->DrawSprite(Color::YELLOW);
}

void Bullet::Destroy()
{
}

