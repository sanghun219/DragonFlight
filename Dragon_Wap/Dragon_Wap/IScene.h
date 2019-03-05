#pragma once
#include "Graphics.h";

class IScene
{
public:
	virtual void Init() {};
	virtual void Update() {};
	virtual void Draw() {};
	virtual void Destroy() {};
public:
	IScene();
	virtual ~IScene();
	Graphics *Gp;
};

