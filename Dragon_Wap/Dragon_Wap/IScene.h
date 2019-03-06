#pragma once
#include "Graphics.h";
#include "IObject.h"
#include <vector>

class IScene
{
public:
	virtual void Init() {};
	virtual void Update() {};
	virtual void Draw() {};
	virtual void Destroy() {};
	std::vector<IObject * > bullet_vec;
	
public:
	IScene();
	virtual ~IScene();
	Graphics *Gp;
};

