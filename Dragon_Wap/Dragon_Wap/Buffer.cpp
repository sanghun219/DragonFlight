#include "Buffer.h"

Buffer* Buffer::_Inst = nullptr;
Buffer::Buffer()
{
	MAP_X_MAX = 80;
	MAP_Y_MAX = 25;
}


Buffer::~Buffer()
{
}

static int nBufferIndex;
static HANDLE hBuffer[2];

void Buffer:: CreateBuffer()
{
	CONSOLE_CURSOR_INFO cci;
	COORD size = { MAP_X_MAX, MAP_Y_MAX };
	SMALL_RECT rect;

	rect.Left = 0;
	rect.Right = MAP_X_MAX - 1;
	rect.Top = 0;
	rect.Bottom = MAP_Y_MAX - 1;

	hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleScreenBufferSize(hBuffer[0], size);
	SetConsoleWindowInfo(hBuffer[0], TRUE, &rect);
	hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleScreenBufferSize(hBuffer[1], size);
	SetConsoleWindowInfo(hBuffer[1], TRUE, &rect);

	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hBuffer[0], &cci);
	SetConsoleCursorInfo(hBuffer[1], &cci);
}

void Buffer::BufferWrite(int x, int y, const char *string, Color color)
{
	DWORD dw;
	COORD CursorPosition = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	SetConsoleCursorPosition(hBuffer[nBufferIndex], CursorPosition);
	SetConsoleTextAttribute(hBuffer[nBufferIndex], static_cast<WORD>(color));
	WriteFile(hBuffer[nBufferIndex], string, strlen(string), &dw, NULL);
}
void Buffer::BufferWrite(int x, int y, std::string _string, Color color)
{
	const char* string = _string.c_str();
	DWORD dw;
	COORD CursorPosition = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	SetConsoleCursorPosition(hBuffer[nBufferIndex], CursorPosition);
	SetConsoleTextAttribute(hBuffer[nBufferIndex], static_cast<WORD>(color));
	WriteFile(hBuffer[nBufferIndex], string, strlen(string), &dw, NULL);
}
void Buffer::BufferWrite(int x, int y, int _string, Color color)
{
	std::string str = std::to_string(_string);
	const char* string = str.c_str();
	DWORD dw;
	COORD CursorPosition = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	SetConsoleCursorPosition(hBuffer[nBufferIndex], CursorPosition);
	SetConsoleTextAttribute(hBuffer[nBufferIndex], static_cast<WORD>(color));
	WriteFile(hBuffer[nBufferIndex], string, strlen(string), &dw, NULL);
}
void Buffer::BufferWrite(int x, int y, double _string, Color color)
{
	std::string str = std::to_string(_string);
	const char* string = str.c_str();
	DWORD dw;
	COORD CursorPosition = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	SetConsoleCursorPosition(hBuffer[nBufferIndex], CursorPosition);
	SetConsoleTextAttribute(hBuffer[nBufferIndex], static_cast<WORD>(color));
	WriteFile(hBuffer[nBufferIndex], string, strlen(string), &dw, NULL);
}

void Buffer::BufferWrite(int x, int y, float _string, Color color)
{
	std::string str = std::to_string(_string);
	const char* string = str.c_str();
	DWORD dw;
	COORD CursorPosition = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
	SetConsoleCursorPosition(hBuffer[nBufferIndex], CursorPosition);
	SetConsoleTextAttribute(hBuffer[nBufferIndex], static_cast<WORD>(color));
	WriteFile(hBuffer[nBufferIndex], string, strlen(string), &dw, NULL);
}

void Buffer::Flipping()
{
	Sleep(33);
	SetConsoleActiveScreenBuffer(hBuffer[nBufferIndex]);
	nBufferIndex = !nBufferIndex;
}

void Buffer::BufferClear()
{
	COORD Coor = { 0, 0 };
	DWORD dw;
	FillConsoleOutputCharacter(hBuffer[nBufferIndex], ' ', MAP_X_MAX * MAP_Y_MAX, Coor, &dw);
}

void Buffer::Release()
{
	CloseHandle(hBuffer[0]);
	CloseHandle(hBuffer[1]);
}



