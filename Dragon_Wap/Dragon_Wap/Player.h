#pragma once
#include "IObject.h"
#include "Status.h"
class Player:public IObject
{
public:
	Status * status;
	
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	Player();
	~Player();
};

