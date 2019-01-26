#include "Stage1.h"
#include <iostream>
#include "Cursor.h"


Stage1::Stage1()
{
}


Stage1::~Stage1()
{
}

void Stage1::Init()
{
	
}

void Stage1::Update()
{
	Cursor::GetInst()->BufferWrite(10, 10, "Stage1 Init", Color::BLUE);
}

void Stage1::Draw()
{
}

void Stage1::Destroy()
{
}
