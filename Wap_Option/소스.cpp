#include <iostream>
#include "Sound.h"
#include "Option.h"
#include "Cursor.h"
int main(void)
{
	Cursor::GetInst()->CreateBuffer();
	Option op;
	Sound::GetInst()->Init();
	Sound::GetInst()->Play(SOUND::MENU);
	
	op.Init();
	while (true)
	{		
		
		Cursor::GetInst()->CreateBuffer();
		op.Update();
		op.Draw();
		Cursor::GetInst()->Flipping();
		
	}
	return 0;
}