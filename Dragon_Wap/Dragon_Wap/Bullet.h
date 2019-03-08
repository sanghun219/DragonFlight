#pragma once
#include "Status.h"
#include "Character.h"
class Bullet:public Character2D
{
public:
	//speed�� ���� ������ �ȵ� �Ѿ��� ���⿡ ���� ������
	void Move(DIRECT dir, double speed);
	
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
public:
	//�Ѿ��� ����ϴ� Ŭ�������� �ڽ��� ��ġ�� �Ѱ��ֱ� ���� �Ű������� Position�� ����
	Bullet(const Position & obj);
	~Bullet();
};

