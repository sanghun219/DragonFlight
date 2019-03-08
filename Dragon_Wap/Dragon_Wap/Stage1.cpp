#include "Stage1.h"
#include <iostream>
#include "Cursor.h"
#include "Player.h"
#include "SceneMgr.h"
#include "Monster.h"

Stage1::Stage1()
{
	
}


Stage1::~Stage1()
{
	if (player != nullptr)
	{
		delete player;
		player = nullptr;
	}
	if (monster != nullptr)
	{
		delete monster;
		monster = nullptr;
	}
}

void Stage1::Init()
{
	player = new Player();
	monster = new Monster();
	
	player->Init();
	monster->Init();
}

void Stage1::Update()
{
	player->Update();
	monster->Update();
	

}




void Stage1::Draw()
{
	player->Draw();
	monster->Draw();
	

}

void Stage1::Destroy()
{
}

