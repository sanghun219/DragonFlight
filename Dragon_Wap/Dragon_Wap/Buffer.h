#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include "Color.h"
class Buffer
{
private:
	static Buffer* _Inst;
public:
	static Buffer* GetInst()
	{
		if (_Inst == nullptr) _Inst = new Buffer();
		return _Inst;
	}
private:
	HANDLE hBuffer[2];
	int nScreenIndex;
	SHORT MAP_X_MAX, MAP_Y_MAX;
public:

	void CreateBuffer();
	void BufferWrite(int x , int y , const char *string= " ", Color color = Color::WHITE);
	void BufferWrite(int x, int y, std::string _string, Color color);
	void BufferWrite(int x, int y, int _string, Color color);
	void BufferWrite(int x, int y, double _string, Color color);
	void BufferWrite(int x, int y, float _string, Color color);
	void Flipping();
	void BufferClear();
	void Release();

private:
	Buffer();
public:
	~Buffer();
};


