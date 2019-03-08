#pragma once
#include "Character.h"
#include <Windows.h>
#include <list>


class Bullet;
class Player:public Character2D
{
public:
	//bullet�� list��� �迭 �񽺹����� ���� �־��! �Ѿ��� ���� ���� ��ϱ�..
	std::list<Bullet>* bullets;
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;

	//�Ѿ��� â������ ������ ������
	void EraseBullet();
public:
	
	Player();
	~Player();
};

