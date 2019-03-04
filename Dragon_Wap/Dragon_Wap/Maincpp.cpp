#include <Windows.h>
#include "Cursor.h"
#include "SceneMgr.h"
#define MS_PER_UPDATE 60
int main(void)
{
	
	DWORD previous = GetTickCount();
	DWORD elasped;
	DWORD lag = 0;
	SceneMgr::GetInst()->SetScene(SCENE::ENTRY);
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
			SceneMgr::GetInst()->Update();
			SceneMgr::GetInst()->Draw();
			Cursor::GetInst()->Flipping();
		}
		
	}
	
	SceneMgr::GetInst()->Destroy();

	return 0;
}
