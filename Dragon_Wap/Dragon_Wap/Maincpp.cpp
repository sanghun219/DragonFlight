#include <iostream>
#include <time.h>
#include <Windows.h>
#include "Cursor.h"
#define MS_PER_UPDATE 75
int main(void)
{

	DWORD previous = GetTickCount();
	DWORD elasped;
	DWORD lag = 0;

	Cursor::GetInst()->CreateBuffer();

	while (true)
	{
		DWORD current = GetTickCount();
		elasped = current - previous;
		previous = current;
		lag += elasped;

		if (lag >= MS_PER_UPDATE)
		{
			lag = 0;
			Cursor::GetInst()->BufferClear();

			Cursor::GetInst()->Flipping();
			
		}

	}
	

	return 0;
}
