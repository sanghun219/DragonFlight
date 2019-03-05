#include "Menu.h"
#include "Buffer.h"


void Menu::Init()
{
	
}

void Menu::Update()
{
	
}

void Menu::Draw()
{
	Buffer::GetInst()->BufferWrite(30, 15, "忙式式式式式式式式式式式式式式式式式式忖", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 16, "弛                  弛", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 17, "弛                  弛", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 18, "弛                  弛", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 19, "弛                  弛", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 20, "弛                  弛", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 21, "弛                  弛", Color::WHITE);
}

void Menu::Destroy()
{
}

Menu::Menu()
{
}


Menu::~Menu()
{
}
