#pragma once
#include<Windows.h>
#include<fmod.h>
enum class SOUND
{
	LOGO,
	MENU,
	STAGE,
	CLICK,
};
enum class BGMEFF
{
	BGM,
	EFFECT,
};
class Sound
{
private:
	static Sound * _Inst;
	FMOD_SYSTEM * g_System;
	FMOD_SOUND *g_Sound[5];
	FMOD_CHANNEL *g_Channel[4];

	float volume = 0.6f;

public:
	static Sound * GetInst()
	{
		if (_Inst == nullptr)
			_Inst = new Sound();
		return _Inst;
	}
public:
	

public:
	void Init();
	void Play(SOUND type);
	void SetVolume(float indecreaeVolume, BGMEFF channel);
	const float &GetVolume() { return volume; }
private:
	Sound();
public:
	~Sound();
};

