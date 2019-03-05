#pragma once
#include "IObject.h"
#include "Status.h"
#include <Windows.h>
#include "SceneMgr.h"
#include "IScene.h"

class Player:public IObject
{
public:
	Status * status;
	IScene * current_scene;
	
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	void SetScene(IScene * _scene) {
		this->current_scene = _scene;
	}
	Player();
	~Player();
};

