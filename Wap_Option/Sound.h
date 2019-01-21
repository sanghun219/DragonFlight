#pragma once
#include<Windows.h>
#include<fmod.h>

class Sound
{
private:
	static Sound * _Inst;
	FMOD_SYSTEM * g_System;
	FMOD_SOUND *g_Sound[5];
	FMOD_CHANNEL *g_Channel[4];
public:
	static Sound * GetInst()
	{
		if (_Inst == nullptr)
			_Inst = new Sound();
		return _Inst;
	}
public:
	enum class SOUND
	{
		BACKGROUND,
		LOGO,
		MENU,
		STAGE,
	};

public:
	void Init();
	void Play(SOUND type);
	void SetVolume(float volume, SOUND sound);
private:
	Sound();
public:
	~Sound();
};

