#pragma once
#include "Position.h"
class IObject
{
public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Destroy() = 0;
public:
	Position position;
public:
	IObject();
	virtual ~IObject();
};

