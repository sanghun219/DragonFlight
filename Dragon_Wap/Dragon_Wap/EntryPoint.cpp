#include "EntryPoint.h"

#include "Player.h"
#include "Cursor.h"
using namespace std;

EntryPoint::EntryPoint()
{
}


EntryPoint::~EntryPoint()
{
}

void EntryPoint::CreateUserInfo(std::string fileName)
{
	
	filemgr.WriteFile(RankFile(fileName, "Player1", 100, 10), FILETYPE::RANK);
	
}

void EntryPoint::Init()
{
	CreateUserInfo();
}

void EntryPoint::Update()
{
	RankFile file = filemgr.ReadFile("han.txt");

	Cursor::GetInst()->BufferWrite(15, 15, file.GetPlayerName(), Color::BLUE);
}

void EntryPoint::Draw()
{
}

void EntryPoint::Destroy()
{
}
