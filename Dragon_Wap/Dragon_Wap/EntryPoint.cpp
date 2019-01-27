#include "EntryPoint.h"
#include "Cursor.h"
#include "Graphics.h"
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

	//Cursor::GetInst()->BufferWrite(15, 15, Gp->NormalCharacter[static_cast<unsigned int>(GPS::PLAYER)][0], Color::WHITE);
	
}

void EntryPoint::Frame2()
{
	


	static unsigned short ComPosX = 6;
	static unsigned short ComPosY = 17;
	if (ComPosY < 5)
	{

	}
	Gp->GpsDraw(GPS::PLAYER, ComPosX+20, ComPosY+2);
	Gp->GpsDraw(GPS::PLAYER, ComPosX+24, ComPosY+1);
	Gp->GpsDraw(GPS::PLAYER, ComPosX+28, ComPosY);
	Gp->GpsDraw(GPS::PLAYER, ComPosX+32, ComPosY+1);
	Gp->GpsDraw(GPS::PLAYER, ComPosX+36, ComPosY+2);
	
}

void EntryPoint::Animation()
{
	double previous = GetTickCount();
	double lag = 0.0;

	while (true)
	{
		double current = GetTickCount();
		double elasped = current - previous;
		current = previous;
		lag += elasped;

		if (lag /200.0 >= anim1Speed / 5.0)
		{
			lag = 0.0;
			
		}



	}



}

void EntryPoint::Init()
{
	
	Gp = new Graphics();
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
