#pragma once
//#include <vector>
#include "Math.h"
#include "Cursor.h"
#include "Color.h"
#define maxSize 50
class Position;
class Sprite
{
private:
	//좌측상단 포지션
	Position *pivotPos;
public:
	//캐릭터의 Sprite의 2차원 배열 요소가 빈공간인지 문자가 들어있는지를 1과 0으로 나타냄
	int SpriteCollider[maxSize][maxSize];
	// 2차원 배열로 Sprite그리기가 불편하기에 한줄씩 그리게 하기위해 string 배열로 받아옴
	std::string SpriteByLine[15];
public:
	//원래 GPS에 그리던것을 여기서 다 그려주자
	void DrawSprite(Color color);
	//그려진 sprite와 sprite를 사용할 character position 과의 바인드
	void BindSpriteAndCollision();
	//충돌 확인
	bool CheckCollision(const Position & pos);
public:
	Sprite(Position * pos);
	~Sprite();
};

 