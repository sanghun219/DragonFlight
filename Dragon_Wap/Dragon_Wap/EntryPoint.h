#pragma once
#include "IScene.h"
#include <time.h>
class Graphics;

class EntryPoint:public IScene
{
private:
	
private:
	Graphics *Gp;
	double anim1Elsaped;
	double anim1Speed = 3;
private:
	void Frame1();
	void Frame2();
	void Animation();
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	EntryPoint();
	virtual ~EntryPoint();
};

