#include <iostream>
#include "Sound.h"
#include "Option.h"
#include "Cursor.h"
int main(void)
{

	Option op;
	Sound::GetInst()->Init();
	op.Init();
	
	Sound::GetInst()->Play(Sound::SOUND::MENU);
	Cursor::GetInst()->CreateBuffer();
	while (true)
	{		
		
		Cursor::GetInst()->CreateBuffer();
		op.Update();
		op.Draw();
		Cursor::GetInst()->Flipping();
		
	}
	return 0;
}