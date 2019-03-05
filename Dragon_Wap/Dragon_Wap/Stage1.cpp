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
}

void Stage1::Draw()
{
}

void Stage1::Destroy()
{
}
