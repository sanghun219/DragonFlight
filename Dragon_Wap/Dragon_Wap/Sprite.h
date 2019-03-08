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
	//������� ������
	Position *pivotPos;
public:
	//ĳ������ Sprite�� 2���� �迭 ��Ұ� ��������� ���ڰ� ����ִ����� 1�� 0���� ��Ÿ��
	int SpriteCollider[maxSize][maxSize];
	// 2���� �迭�� Sprite�׸��Ⱑ �����ϱ⿡ ���پ� �׸��� �ϱ����� string �迭�� �޾ƿ�
	std::string SpriteByLine[15];
public:
	//���� GPS�� �׸������� ���⼭ �� �׷�����
	void DrawSprite(Color color);
	//�׷��� sprite�� sprite�� ����� character position ���� ���ε�
	void BindSpriteAndCollision();
	//�浹 Ȯ��
	bool CheckCollision(const Position & pos);
public:
	Sprite(Position * pos);
	~Sprite();
};

 