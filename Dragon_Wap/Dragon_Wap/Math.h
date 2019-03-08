#pragma once
#include "Cursor.h"

// 2차원 좌표를 표현하는 2D 벡터입니다.
// 수학적 계산을 필요로 하는 경우, 연산자 오버로딩 또는
// 적절한 함수로 생성하여 사용하시기 바랍니다.
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