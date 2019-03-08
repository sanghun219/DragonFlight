#pragma once
#include "IObject.h"

#include "Sprite.h"
#include "math.h"


// 게임 내 모습을 갖추고 목적에 맞는 역할을 수행하는
// 모든 객체들을 표현하기 위한 기저 클래스입니다.
// Unity에서의 GameObject, UE4에서 Actor에 대응됩니다.
class Character2D : public IObject
{
public:
	// 2차원 캐릭터를 렌더링하기 위한 스프라이트입니다.
	class Sprite* sprite;
	// 2차원 캐릭터의 중심 좌표 값입니다.
	class Position *origin;
	// 2차원 캐릭터의 총알이 나오는 위치입니다.
	class Position *GunPos;
public:
	
public:
	//생성자 오버로딩 , Position으로 간단하게 넣어도 좋고 x,y위치를 각각 넣어도 좋게 만듬
	Character2D(Position* pos);
	Character2D(unsigned short xPos, unsigned short yPos);
	~Character2D();

	// IObject을(를) 통해 상속됨
	virtual void Init() override;
	virtual void Update() override;
	virtual void Draw() override;
	virtual void Destroy() override;
};

