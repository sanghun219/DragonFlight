#include "Sound.h"


Sound* Sound::_Inst = nullptr;

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
	FMOD_System_PlaySound(g_System, g_Sound[static_cast<int>(SOUND::MENU)], NULL, 0, &g_Channel[0]);
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
	volume += indecreaeVolume;
	if (volume >= 0.f && volume <= 1.f)
	{
		FMOD_Channel_SetVolume(g_Channel[static_cast<int>(channel)], volume);
	}
	else if (volume < 0)
	{
		volume = 0.f;
	}
	else if (volume > 1.f)
	{
		volume = 1.f;
	}
	
}
