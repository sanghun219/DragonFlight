#pragma once
#include "IObject.h"
#include "Status.h"
class Bullet:public IObject
{
public:
	void Move(DIRECT dir, double speed);
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	Bullet(IObject & obj);
	~Bullet();
};

