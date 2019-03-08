#pragma once
#include "Status.h"
#include "Character.h"
class Bullet:public Character2D
{
public:
	//speed는 아직 구현이 안됨 총알의 방향에 따라 움직임
	void Move(DIRECT dir, double speed);
	
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
public:
	//총알을 사용하는 클래스에서 자신의 위치를 넘겨주기 위해 매개변수로 Position을 받음
	Bullet(const Position & obj);
	~Bullet();
};

