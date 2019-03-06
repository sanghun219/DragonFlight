#pragma once
#include "IObject.h"
#include "SceneMgr.h"
#include "IScene.h"
#include <list>
#include "Bullet.h"
class Monster:public IObject
{
private:
	double tick = 0.0;
public:
	Status * status;
	IScene* current_scene;
	std::list<Bullet> bulletList;
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
	void SetScene(IScene * _scene) {
		this->current_scene = _scene;
	}
public:
	Monster();
	~Monster();
};

