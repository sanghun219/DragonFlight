#include "Option.h"
#include "Sound.h"
#include "Cursor.h"
#include <iostream>
#include <cstdlib>

using namespace std;
extern float volume;
Option::Option()
{
}


Option::~Option()
{
}

void Option::Init()
{
	
	// member var Initialize
	_effect = 3;
	_back = 3;
	_speed = 3;
	_cursorIndex = 0;
	for (int i = 0; i < static_cast<int>(BUTTON::END); i++)
		cursorColor[i] = Color::WHITE;
	cursorColor[_cursorIndex] = Color::GREEN;
}

void Option::Update()
{
	
	KeyController();
	Sound::GetInst()->Update();
}

void Option::Draw()
{
	Layer1();
	Layer2();
	
}

void Option::Destroy()
{
}

void Option::Layer1()
{
	_layer1PosX = 20;
	_layer1PosY = 5;
	Cursor::GetInst()->BufferWrite(_layer1PosX, _layer1PosY, "┌──────────── Option────────────┐",Color::BLUE);
	++_layer1PosY;
	for (int i = _layer1PosY; i < _layer1PosY+15; i++)
	{
		Cursor::GetInst()->BufferWrite(_layer1PosX, i, "│                               │", Color::BLUE);	
	}
	Cursor::GetInst()->BufferWrite(_layer1PosX, _layer1PosY = (_layer1PosY + 15), "└───────────────────────────────┘", Color::BLUE);
	
}

void Option::Layer2()
{
	_layer2PosX = 26;
	_layer2PosY = 7;
	Cursor::GetInst()->BufferWrite(_layer2PosX, _layer2PosY, "효과음", cursorColor[static_cast<int>(BUTTON::EFFECT)]);
	_layer2PosX = _layer2PosX + 13;
	Cursor::GetInst()->BufferWrite(_layer2PosX, _layer2PosY, " ", cursorColor[static_cast<int>(BUTTON::EFFECT)]);
	for (int i = 0; i < _effect; i++)
	{
		Cursor::GetInst()->BufferWrite(_layer2PosX = (_layer2PosX + 2), _layer2PosY, "■", cursorColor[static_cast<int>(BUTTON::EFFECT)]);
	}
	_layer2PosX = 26;
	Cursor::GetInst()->BufferWrite(_layer2PosX, _layer2PosY = _layer2PosY + 3, "배경음", cursorColor[static_cast<int>(BUTTON::BACK)]);
	_layer2PosX = _layer2PosX + 13;
	
	for (int i = 0; i < _back; i++)
	{
		Cursor::GetInst()->BufferWrite(_layer2PosX = (_layer2PosX + 2), _layer2PosY, "■", cursorColor[static_cast<int>(BUTTON::BACK)]);
	}

	_layer2PosX = 26;
	Cursor::GetInst()->BufferWrite(_layer2PosX, _layer2PosY = _layer2PosY + 3, "속도", cursorColor[static_cast<int>(BUTTON::SPEED)]);
	_layer2PosX = _layer2PosX + 13;
	for (int i = 0; i < _speed; i++)
	{
		Cursor::GetInst()->BufferWrite(_layer2PosX = (_layer2PosX + 2), _layer2PosY, "■", cursorColor[static_cast<int>(BUTTON::SPEED)]);
	}

	_layer2PosX = 26;
	Cursor::GetInst()->BufferWrite(_layer2PosX, _layer2PosY = _layer2PosY + 3, "나가기", cursorColor[static_cast<int>(BUTTON::EXIT)]);
	_layer2PosX = _layer2PosX + 13;
}

void Option::KeyController()
{
	if(GetAsyncKeyState(VK_UP) & 0x0001)
	{
		if (!CursorBlock(true)) 
		{		
			cursorColor[_cursorIndex] = Color::WHITE;		
			cursorColor[--_cursorIndex] = Color::GREEN;
			
		}
	
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x0001)
	{
		if (!CursorBlock(false))
		{
			cursorColor[_cursorIndex] = Color::WHITE;
			cursorColor[++_cursorIndex] = Color::GREEN;
		
		}
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x0001)
	{
		
		switch (_cursorIndex)
		{
			case static_cast<int>(BUTTON::EFFECT) :
				if (EffectSizeBlock(true))
				{
					Sound::GetInst()->SetVolume(-0.2f, BGMEFF::EFFECT);
					//Cursor::GetInst()->BufferWrite(10, 10, Sound::GetInst()->GetVolume(static_cast<int>(BGMEFF::EFFECT)), Color::WHITE);
					_effect--;
				}
				break;
			case static_cast<int>(BUTTON::BACK) :
				if (BackSizeBlock(true))
				{
					_back--;
					Sound::GetInst()->SetVolume(-0.2f, BGMEFF::BGM);
					//Cursor::GetInst()->BufferWrite(10, 10, Sound::GetInst()->GetVolume(static_cast<int>(BGMEFF::BGM)), Color::WHITE);
				}
				break;
			case static_cast<int>(BUTTON::SPEED) :
				if (SpeedSizeBlock(true))
				{
					//global_speed-=0.2f
					_speed--;
				}
				break;
			default:
				break;
		}
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x0001)
	{
		Cursor::GetInst()->BufferWrite(10, 15);
		switch (_cursorIndex)
		{
			case static_cast<int>(BUTTON::EFFECT) :
				if (EffectSizeBlock(false))
				{
					Sound::GetInst()->SetVolume(0.2f, BGMEFF::EFFECT);
					//Cursor::GetInst()->BufferWrite(10, 10, Sound::GetInst()->GetVolume(static_cast<int>(BGMEFF::EFFECT)), Color::WHITE);
					_effect++;
				}
				break;
			case static_cast<int>(BUTTON::BACK) :
				if (BackSizeBlock(false))
				{
					_back++;
					Sound::GetInst()->SetVolume(0.2f, BGMEFF::BGM);
					//Cursor::GetInst()->BufferWrite(10, 10, Sound::GetInst()->GetVolume(static_cast<int>(BGMEFF::BGM)), Color::WHITE);
				}
				break;
			case static_cast<int>(BUTTON::SPEED) :
				if (SpeedSizeBlock(false))
				{
					//global_speed+=0.2f
					_speed++;
				}
				break;
			default:
				break;
		}
	}
	if (GetAsyncKeyState(VK_RETURN) & 0x0001)
	{
		switch (_cursorIndex)
		{
			case static_cast<int>(BUTTON::EFFECT) :
				break;
			case static_cast<int>(BUTTON::BACK) :
				break;
			case static_cast<int>(BUTTON::SPEED) :
				break;
			case static_cast<int>(BUTTON::EXIT) :
				exit(0);
				break;
			default:
				break;
		}
	}
	
}
