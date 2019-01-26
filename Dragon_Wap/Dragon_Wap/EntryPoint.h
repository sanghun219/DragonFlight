#pragma once
#include "IScene.h"
#include "FileMgr.h"
#include <string>
class EntryPoint:public IScene
{
private:
	FileMgr<RankFile> filemgr;
private:
	void CreateUserInfo(std::string fileName = "han.txt");
	
public:
	virtual void Init()override;
	virtual void Update()override;
	virtual void Draw()override;
	virtual void Destroy()override;
public:
	EntryPoint();
	virtual ~EntryPoint();
};

