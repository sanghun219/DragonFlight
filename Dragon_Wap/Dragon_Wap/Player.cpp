#include "Player.h"
#include "Stage1.h"
#include "Bullet.h"

Player::Player():Character2D(10,10)
{
	for(int i=0; i<15; i++)
		sprite->SpriteByLine[i].clear();
	sprite->SpriteByLine[0] = " бу ";
	sprite->SpriteByLine[1] = "<  >";
	sprite->SpriteByLine[2] = "";

}


Player::~Player()
{
}

void Player::Init()
{
	bullets = new std::list<Bullet>();
	GunPos->SetPosition(origin->GetPositionX() + 1, origin->GetPositionY() -1);
}

void Player::Update()
{
	

	if (GetAsyncKeyState(VK_RIGHT))
	{
		origin->SetPosition(origin->GetPositionX() + 1, origin->GetPositionY());
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		origin->SetPosition(origin->GetPositionX() - 1, origin->GetPositionY());
	}
	if (GetAsyncKeyState(VK_UP))
	{
		origin->SetPosition(origin->GetPositionX(), origin->GetPositionY() - 1);
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		origin->SetPosition(origin->GetPositionX(), origin->GetPositionY() + 1);
	}

	
	if (GetAsyncKeyState(VK_SPACE)) {
		Position pos = Position(origin->GetPositionX() + 1, origin->GetPositionY() - 1);
		Bullet * b = new Bullet(pos);
		bullets->push_back(*b);
	}

	for (auto iter = bullets->begin(); iter != bullets->end(); ++iter)
	{
		(*iter).Update();
		
	}
	EraseBullet();
	
}

void Player::Draw()
{
	
	sprite->DrawSprite(Color::BLUE);
	for (auto iter = bullets->begin(); iter != bullets->end(); ++iter)
	{
		(*iter).Draw();
	}
}

void Player::Destroy()
{
}

void Player::EraseBullet()
{
	for (auto iter = bullets->begin(); iter != bullets->end();)
	{
		if ((*iter).origin->GetPositionY() < 1 || (*iter).origin->GetPositionY() >25)
		{
			iter = bullets->erase(iter);
		}

		else
		{
			iter++;
		}
	}
}
