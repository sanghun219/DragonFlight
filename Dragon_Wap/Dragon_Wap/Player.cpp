#include "Player.h"
#include "Stage1.h"
#include "Bullet.h"

Player::Player()
{
}


Player::~Player()
{
}

void Player::Init()
{
	this->current_scene->Gp->GpsInit();
	//this->position.SetPosition(20, 20);
}

void Player::Update()
{
	short x = this->position.GetPositionX();
	short y = this->position.GetPositionY();
	if (GetAsyncKeyState(VK_LEFT)) {
		this->current_scene->Gp->GpsDraw(GPS::PLAYER, MOTION::NORMAL, x - 1, y, Color::WHITE);
		this->position.SetPosition(x -1, y);
	}
	if (GetAsyncKeyState(VK_RIGHT)) {
		this->current_scene->Gp->GpsDraw(GPS::PLAYER, MOTION::NORMAL, x + 1, y, Color::WHITE);
		this->position.SetPosition(x + 1, y);
	}
	if (GetAsyncKeyState(VK_UP)) {
		this->current_scene->Gp->GpsDraw(GPS::PLAYER, MOTION::NORMAL, x, y - 1, Color::WHITE);
		this->position.SetPosition(x, y - 1);
	}
	if (GetAsyncKeyState(VK_DOWN)) {
		this->current_scene->Gp->GpsDraw(GPS::PLAYER, MOTION::NORMAL, x, y + 1, Color::WHITE);
		this->position.SetPosition(x, y + 1);
	}
	if (GetAsyncKeyState(VK_SPACE)) {
		Bullet * b = new Bullet(*this);
		b->Update();
		this->current_scene->Gp->GpsDraw(GPS::BULLET, MOTION::NORMAL, x + 1, y - 1, Color::WHITE);
		this->current_scene->bullet_vec.push_back(b);
	}
	this->current_scene->Gp->GpsDraw(GPS::PLAYER, MOTION::NORMAL, x, y, Color::WHITE);
}

void Player::Draw()
{

}

void Player::Destroy()
{
}