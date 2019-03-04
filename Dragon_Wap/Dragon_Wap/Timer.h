#pragma once
#include "EntryPoint.h"
#include <Windows.h>
#include "Cursor.h"
class Timer
{
private:
	double elasped = 0;
	double current;
	double previous;
	double speed;
	double lag =0;
	bool OnceOpen = true;
public:
	template<typename T>
	void Invoke(void(T::*fp)(), double time);//Update와 Draw에서만 호출;
	//void Animate(void(*fp)(),double time);
public:
	Timer();
	~Timer();
};
template<typename T>
void Timer::Invoke(void(T::*fp)(), double time)
{
	T t;
	if (OnceOpen)
	{
		elasped += 0.02;
		if (elasped >= time)
		{
			(t.*fp)();
			OnceOpen = false;
			elasped = 0;
		}
	}


}

