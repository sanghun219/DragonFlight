#pragma once
#include "IScene.h"
class Stage1:public IScene
{
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	Stage1();
	~Stage1();
};

