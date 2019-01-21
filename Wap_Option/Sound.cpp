#include "Sound.h"


Sound* Sound::_Inst = nullptr;
float volume = 1.f;
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
	FMOD_System_PlaySound(g_System, g_Sound[static_cast<int>(SOUND::MENU)], NULL, 0, &g_Channel[0]);
}

void Sound::Play(SOUND type)
{
	FMOD_System_PlaySound(g_System, g_Sound[static_cast<int>(type)], NULL, 0, &g_Channel[0]);
}

void Sound::SetVolume(float volume, SOUND sound)
{
	FMOD_Channel_SetVolume(g_Channel[static_cast<int>(sound)], volume);
}
