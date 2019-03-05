#pragma once
#include "IScene.h"
#include <time.h>
class Timer;
class Graphics;

class EntryPoint:public IScene
{
private:
	bool ClearFrame2 = false;
	bool BossDead = false;
private:
	Timer * timer;
	double anim1Elsaped;
	double anim1Speed = 3;
private:
	void Frame1();
	void Frame2();
	void BossDieMotion();
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	EntryPoint();
	virtual ~EntryPoint();
};

