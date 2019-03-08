#pragma once
#include "IObject.h"

#include "Sprite.h"
#include "math.h"


// ���� �� ����� ���߰� ������ �´� ������ �����ϴ�
// ��� ��ü���� ǥ���ϱ� ���� ���� Ŭ�����Դϴ�.
// Unity������ GameObject, UE4���� Actor�� �����˴ϴ�.
class Character2D : public IObject
{
public:
	// 2���� ĳ���͸� �������ϱ� ���� ��������Ʈ�Դϴ�.
	class Sprite* sprite;
	// 2���� ĳ������ �߽� ��ǥ ���Դϴ�.
	class Position *origin;
	// 2���� ĳ������ �Ѿ��� ������ ��ġ�Դϴ�.
	class Position *GunPos;
public:
	
public:
	//������ �����ε� , Position���� �����ϰ� �־ ���� x,y��ġ�� ���� �־ ���� ����
	Character2D(Position* pos);
	Character2D(unsigned short xPos, unsigned short yPos);
	~Character2D();

	// IObject��(��) ���� ��ӵ�
	virtual void Init() override;
	virtual void Update() override;
	virtual void Draw() override;
	virtual void Destroy() override;
};

