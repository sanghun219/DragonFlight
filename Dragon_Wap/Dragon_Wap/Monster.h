#pragma once
#include "Character.h"
class Monster:public Character2D
{
public:

public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
	
public:
	
	Monster();
	virtual ~Monster();
};

