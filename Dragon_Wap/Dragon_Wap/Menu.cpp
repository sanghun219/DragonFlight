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
	Buffer::GetInst()->BufferWrite(30, 15, "����������������������������������������", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 16, "��                  ��", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 17, "��                  ��", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 18, "��                  ��", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 19, "��                  ��", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 20, "��                  ��", Color::WHITE);
	Buffer::GetInst()->BufferWrite(30, 21, "��                  ��", Color::WHITE);
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
