#pragma once
#include "Math.h"
class IObject
{
public:
	// IObject Ŭ������ �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	virtual void Init() = 0;

	// IObject�� ������Ʈ�ϴ� �� ����ϴ� �Լ��Դϴ�.
	// ������ ���� �κ��� �����ϱ� ���ؼ��� Update �Լ���
	// ����Ͻñ� �ٶ��ϴ�.
	virtual void Update() = 0;

	// IObject�� �������ϴµ� ����ϴ� �Լ��Դϴ�.
	virtual void Draw() = 0;
	virtual void Destroy() = 0;
public:
	Position position;
public:
	IObject();
	virtual ~IObject();
};

