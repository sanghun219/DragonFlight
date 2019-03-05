#pragma once
#include "IScene.h"
class Menu:public IScene
{
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	Menu();
	virtual ~Menu();
};

