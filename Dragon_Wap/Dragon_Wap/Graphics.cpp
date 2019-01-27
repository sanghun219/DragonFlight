#include "Graphics.h"
#include "Cursor.h"

void Graphics::GpsInit()
{
	NormalCharacter[static_cast<unsigned int>(GPS::PLAYER)][0] = " A";
	NormalCharacter[static_cast<unsigned int>(GPS::PLAYER)][1] = "< >";
	NormalCharacter[static_cast<unsigned int>(GPS::PLAYER)][2] = "";

	BossCharcter[static_cast<unsigned int>(GPS::BOSS1)][0] = "";
}

void Graphics::GpsDraw(GPS gps, int x, int y,Color color)const
{
	switch (gps)
	{
	case GPS::PLAYER:
		for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::NORMAL); i++)
		{
			Cursor::GetInst()->BufferWrite(x, y + i, NormalCharacter[static_cast<unsigned int>(gps)][i], color);
		}
		break;
	case GPS::MONSTER1:
		for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::NORMAL); i++)
		{
			Cursor::GetInst()->BufferWrite(x, y + i, NormalCharacter[static_cast<unsigned int>(gps)][i], color);
		}
		break;
	case GPS::MONSTER2:
		for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::NORMAL); i++)
		{
			Cursor::GetInst()->BufferWrite(x, y + i, NormalCharacter[static_cast<unsigned int>(gps)][i], color);
		}
		break;
	case GPS::MONSTER3:
		for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::NORMAL); i++)
		{
			Cursor::GetInst()->BufferWrite(x, y + i, NormalCharacter[static_cast<unsigned int>(gps)][i], color);
		}
		break;
	case GPS::MONSTER4:
		for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::NORMAL); i++)
		{
			Cursor::GetInst()->BufferWrite(x, y + i, NormalCharacter[static_cast<unsigned int>(gps)][i], color);
		}
		break;
	case GPS::MONSTER5:
		for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::NORMAL); i++)
		{
			Cursor::GetInst()->BufferWrite(x, y + i, NormalCharacter[static_cast<unsigned int>(gps)][i], color);
		}
		break;
	case GPS::NORMAL_MON_END:
		break;
	case GPS::MDMONSTER1:
		break;
	case GPS::MDMONSTER2:
		break;
	case GPS::MDMONSTER3:
		break;
	case GPS::BOSS1:
		break;
	case GPS::END:
		break;
	default:
		break;
	}
}

Graphics::Graphics()
{
}

Graphics::~Graphics()
{
}
