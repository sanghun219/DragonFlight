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
	static FMOD_CHANNEL *g_Channel[4];
public:
	float volume[2] = { 0.6f,0.6f };

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
	void Update();
	void Play(SOUND type);
	void SetVolume(float indecreaeVolume, BGMEFF channel);
	void Stop(SOUND sd);
	const float &GetVolume(int ix)  = delete;
	
	
private:
	Sound();
public:
	~Sound();
};

