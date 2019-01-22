#pragma once
#include "Color.h"

class Option
{
private:
	enum class BUTTON
	{
		EFFECT,
		BACK,
		SPEED,
		EXIT,
		END,
	};
private:
	Color cursorColor[static_cast<int>(BUTTON::END)];
	int _effect;
	int _back;
	int _speed;
	int _layer1PosX;
	int _layer1PosY;
	int _layer2PosX;
	int _layer2PosY;
	int _cursorIndex;
	bool block;
	
	
public:
	void Init();
	void Update();
	void Draw();
	void Destroy();
private:
	void Layer1();
	void Layer2();
	void KeyController();
	bool CursorBlock(bool isUp)const
	{
		if ((isUp && _cursorIndex - 1 < 0) || (!isUp && _cursorIndex + 1 > 3)) return true;
		else return false;
	}
	bool EffectSizeBlock(bool _isLeft)const
	{
		if ((_isLeft && _effect  > 0) || (!_isLeft && _effect<=4))return true;
		else return false;
		
	}
	bool BackSizeBlock(bool _isLeft)const
	{
		if ((_isLeft && _back  > 0) || (!_isLeft && _back <= 4))return true;
		else return false;
	}
	bool SpeedSizeBlock(bool _isLeft)const
	{
		if ((_isLeft && _speed  > 0) || (!_isLeft && _speed <= 4))return true;
		else return false;
	}
public:
	Option();
	~Option();
};

