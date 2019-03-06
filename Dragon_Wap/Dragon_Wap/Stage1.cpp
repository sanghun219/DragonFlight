#include "Stage1.h"
#include <iostream>
#include "Cursor.h"
#include "Player.h"
#include "SceneMgr.h"


Stage1::Stage1()
{
}


Stage1::~Stage1()
{
}

void Stage1::Init()
{
	p = new Player();
	p->SetScene(this);
	p->Init();
}

void Stage1::Update()
{
	//Cursor::GetInst()->BufferWrite(10, 10, "Stage1 Init", Color::BLUE);
	p->Update();
	for (auto iter = bullet_vec.begin(); iter < bullet_vec.end(); ++iter) {
		(*iter)->Update();
	}
}

void Stage1::Draw()
{
}

void Stage1::Destroy()
{
}

// @param pos 적, 플레이어와 같은 사각형 객체의 position
// @param x 불릿의 x 좌표
// @param y 불릿의 y 좌표
bool Stage1::isBulletInRect(Position pos, int x, int y)
{
	if ( (pos.GetPositionX() <= x && x <= pos.GetPositionX() + pos.width) &&
		(pos.GetPositionY() <= y && y <= pos.GetPositionY() + pos.height) ) {
		return true;
	}
	return false;
}