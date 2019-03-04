#include "EntryPoint.h"
#include "Cursor.h"
#include "Graphics.h"
#include "Timer.h"
using namespace std;

EntryPoint::EntryPoint()
{

}


EntryPoint::~EntryPoint()
{
}


void EntryPoint::Frame1()
{
	Cursor::GetInst()->BufferWrite(15, 0, "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖",Color::WHITE);
	Cursor::GetInst()->BufferWrite(15, 1, "弛                                    弛", Color::WHITE);
	Cursor::GetInst()->BufferWrite(15, 2, "弛                                    弛", Color::WHITE);
	Cursor::GetInst()->BufferWrite(15, 3, "弛                                    弛", Color::WHITE);
	Cursor::GetInst()->BufferWrite(15, 4, "弛                                    弛", Color::WHITE);
	Cursor::GetInst()->BufferWrite(15, 5, "弛                                    弛", Color::WHITE);
	
}

void EntryPoint::Frame2()
{
	if (ClearFrame2) return;
	static unsigned short ComPosX = 10;
	static unsigned short ComPosY = 22;
	static MOTION bossmotion = MOTION::NORMAL;

	if (ComPosY > 15)
	{
		ComPosY--;
	}
	else
	{	
		static unsigned short BulletY = ComPosY;
		static int pick = 5;
		if (pick != 0)
		{
			if (BulletY > 5)
			{
				BulletY--;
			}
			else
			{
				BulletY = ComPosY;
				pick--;
			}
			Cursor::GetInst()->BufferWrite(ComPosX + 20, BulletY + 1, "ㄙ", Color::BLUE);
			Cursor::GetInst()->BufferWrite(ComPosX + 24, BulletY, "ㄙ", Color::YELLOW);
			Cursor::GetInst()->BufferWrite(ComPosX + 28, BulletY - 1, "ㄙ", Color::RED);
			Cursor::GetInst()->BufferWrite(ComPosX + 32, BulletY, "ㄙ", Color::GREEN);
			Cursor::GetInst()->BufferWrite(ComPosX + 36, BulletY + 1, "ㄙ", Color::GRAY);
		}
		else
		{
			bossmotion = MOTION::DIE;
			timer->Invoke<EntryPoint>(&EntryPoint::BossDieMotion, 1);
		}
	
		
	}
	
	Gp->GpsDraw(GPS::PLAYER,MOTION::NORMAL, ComPosX + 20, ComPosY + 2);
	Gp->GpsDraw(GPS::PLAYER,MOTION::NORMAL, ComPosX + 24, ComPosY + 1);
	Gp->GpsDraw(GPS::PLAYER,MOTION::NORMAL, ComPosX + 28, ComPosY);
	Gp->GpsDraw(GPS::PLAYER,MOTION::NORMAL, ComPosX + 32, ComPosY + 1);
	Gp->GpsDraw(GPS::PLAYER,MOTION::NORMAL, ComPosX + 36, ComPosY + 2);
	if (!BossDead)
	{
		Gp->GpsDraw(GPS::MDMONSTER1, bossmotion, 28, 2);
	}
	
	Cursor::GetInst()->BufferWrite(3, 3, static_cast<int>(BossDead),Color::WHITE);
}



void EntryPoint::BossDieMotion()
{
	BossDead = true;
	
}

void EntryPoint::Init()
{
	
	Gp = new Graphics();
	timer = new Timer();
	Gp->GpsInit();
}

void EntryPoint::Update()
{

}

void EntryPoint::Draw()
{
	//Frame1();
	Frame2();
}

void EntryPoint::Destroy()
{
}
