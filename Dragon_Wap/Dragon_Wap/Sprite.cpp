#include "Sprite.h"



void Sprite::DrawSprite(Color color)
{
	BindSpriteAndCollision();
	for (int i = 0; i < 15; i++)
	{
		Cursor::GetInst()->BufferWrite(pivotPos->GetPositionX(), pivotPos->GetPositionY() +i,
			SpriteByLine[i], color);
	}

	//빈공간인지 아닌지 확인용 함수
	/*for(int i=0; i<10; i++)
		for (int j = 0; j < maxSize; j++)
		{
			Cursor::GetInst()->BufferWrite(myPos->GetPositionX()+j, myPos->GetPositionY()+i, SpriteCollider[i][j],Color::WHITE);
		}*/
}

void Sprite::BindSpriteAndCollision()
{
	for (int y = 0; y < 15; y++)
	{
		for (unsigned int x = 0; x < SpriteByLine[y].size(); x++)
		{
			
			if (SpriteByLine[y].at(x) == ' ')
				SpriteCollider[y][x] = 0;
			else
				SpriteCollider[y][x] = 1;
			
		}
	}
		
}

bool Sprite::CheckCollision(const Position & pos)
{
	for(int y = 0; y<15; y++)
		for (unsigned int x = 0; x < SpriteByLine[y].size(); x++)
		{
			if (SpriteCollider[y][x] == 1)
			{
				if ((pivotPos->X + x == pos.X) && (pivotPos->Y + y == pos.Y))
				{
					return true;
				}
				else
					return false;
			}
		}
	return false;
}

Sprite::Sprite(Position * pos)
{
	pivotPos = &(*pos);
	
}


Sprite::~Sprite()
{
}
