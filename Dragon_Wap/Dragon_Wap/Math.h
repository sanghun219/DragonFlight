#pragma once
#include "Cursor.h"

// 2���� ��ǥ�� ǥ���ϴ� 2D �����Դϴ�.
// ������ ����� �ʿ�� �ϴ� ���, ������ �����ε� �Ǵ�
// ������ �Լ��� �����Ͽ� ����Ͻñ� �ٶ��ϴ�.
class Position 
{
public:
	// position
	unsigned short X;
	unsigned short Y;
public:
	Position(unsigned short _x, unsigned short _y) :X(_x), Y(_y) {}

	void SetPosition(const unsigned short _x, const unsigned short _y);
	unsigned short GetPositionX() const;
	unsigned short GetPositionY() const;
};