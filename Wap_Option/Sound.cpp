#include "Sound.h"
#include <iostream>
#include "Cursor.h"

Sound* Sound::_Inst = nullptr;
FMOD_CHANNEL* Sound::g_Channel[4] = { nullptr };
Sound::Sound()
{
}


Sound::~Sound()
{
	for (FMOD_SOUND *item : g_Sound)
	{
		FMOD_Sound_Release(item);
	}

}




void Sound::Init()
{
	FMOD_System_Create(&g_System);
	FMOD_System_Init(g_System, 10, FMOD_INIT_NORMAL, NULL);
	FMOD_System_CreateSound(g_System, "Music/MainBgm.mp3", FMOD_LOOP_NORMAL, 0, &g_Sound[static_cast<int>(SOUND::MENU)]);
	FMOD_System_CreateSound(g_System, "Music/Click.wav", FMOD_DEFAULT, 0, &g_Sound[static_cast<int>(SOUND::CLICK)]);
}

void Sound::Update()
{
	
}

void Sound::Play(SOUND type)
{
	switch (type)
	{
	case SOUND::LOGO:
		break;
	case SOUND::MENU:
		FMOD_System_PlaySound(g_System, g_Sound[static_cast<int>(type)], NULL, 0, &g_Channel[static_cast<int>(BGMEFF::BGM)]);
		break;
	case SOUND::STAGE:
		break;
	case SOUND::CLICK:
		FMOD_System_PlaySound(g_System, g_Sound[static_cast<int>(type)], NULL, 0, &g_Channel[static_cast<int>(BGMEFF::EFFECT)]);
		break;
	default:
		break;
	}
	
	
}

void Sound::SetVolume(float indecreaeVolume, BGMEFF channel)
{
	volume[static_cast<int>(channel)] += indecreaeVolume;
	if (volume[static_cast<int>(channel)] >= 0.f && volume[static_cast<int>(channel)] <= 1.f)
	{
		
		FMOD_Channel_SetVolume(g_Channel[static_cast<int>(channel)], volume[static_cast<int>(channel)]);
		FMOD_Channel_SetPaused(g_Channel[static_cast<int>(channel)], false);
	}
	else if (volume[static_cast<int>(channel)] < 0)
	{
		volume[static_cast<int>(channel)] = 0.f;
	}
	else if (volume[static_cast<int>(channel)] > 1.f)
	{
		volume[static_cast<int>(channel)] = 1.f;
	}
	
}

void Sound::Stop(SOUND sd)
{
	FMOD_Channel_Stop(g_Channel[static_cast<int>(sd)]);
	
}

