#pragma once
#include "Character.h"
#include <Windows.h>
#include <list>


class Bullet;
class Player:public Character2D
{
public:
	//bullet을 list라는 배열 비스무리한 곳에 넣어둠! 총알은 여러 발을 쏘니깐..
	std::list<Bullet>* bullets;
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;

	//총알이 창밖으로 나가면 지워줌
	void EraseBullet();
public:
	
	Player();
	~Player();
};

