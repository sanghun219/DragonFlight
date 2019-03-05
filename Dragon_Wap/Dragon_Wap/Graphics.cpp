#include "Graphics.h"
#include "Cursor.h"

void Graphics::GpsInit()
{
	NormalCharacter[static_cast<unsigned int>(GPS::PLAYER)][0] = " A ";
	NormalCharacter[static_cast<unsigned int>(GPS::PLAYER)][1] = "< >";
	NormalCharacter[static_cast<unsigned int>(GPS::PLAYER)][2] = "";
	BossCharcter[static_cast<unsigned int>(GPS::BOSS1)][0] = "";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][0] = "¡×''''''''''''''''''¡×";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][1] = "¡á¡à¡ã¡ã¡à  ¡à¡ã¡ã¡à¡á";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][2] = "¡à¡á¡á¡á¡á  ¡á¡á¡á¡á¡à";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][3] = "¡à¡á¡á¡á¡á  ¡á¡á¡á¡á¡à";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][4] = "¡ß¡Ú¡Ú¡Ú¡Ú  ¡Ú¡Ú¡Ú¡Ú¡ß";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][5] = "      ¡Ú¡Ú  ¡Ú¡Ú";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][6] = "         ¡Ú¡Ú";
	BigCharacter[static_cast<unsigned int>(GPS::MDMONSTER1)][7] = "        ''¡å''";

}

void Graphics::GpsDraw(GPS gps,MOTION motion, int x, int y,Color color)const
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
		if (motion == MOTION::NORMAL)
		{
			for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::BIG); i++)
			{
				Cursor::GetInst()->BufferWrite(x, y + i, BigCharacter[static_cast<unsigned int>(gps)][i], color);
			}
		}
		else if (motion == MOTION::DIE)
		{
			for (int i = 0; i < static_cast<unsigned int>(GPS_SIZE::BIG); i++)
			{
				Cursor::GetInst()->BufferWrite(x, y + i, BigCharacter[static_cast<unsigned int>(gps)][i], 
					static_cast<Color>(rand()%static_cast<int>(Color::END)));
			}
		}

		
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
