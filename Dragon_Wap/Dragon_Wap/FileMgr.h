#pragma once
#include <string>
#include "RankFile.h"
#include <cassert>
#include <type_traits>
#include <iostream>
#include <fstream>
#include "Cursor.h"



template<typename T>
class FileMgr
{
public:
	void WriteFile(const T &Data , const FILETYPE &type);
	const T& ReadFile(const std::string fileName)const;
public:
	FileMgr() {};
	~FileMgr() {};
};

template<typename T>
inline void FileMgr<T>::WriteFile(const T & Data, const FILETYPE & type)
{
	static_assert(is_base_of<IFile,T>::value);
	T copyData;
	switch (type)
	{
	case FILETYPE::RANK:
		copyData = static_cast<RankFile>(copyData);
		break;
	}
	copyData = Data;
	std::ofstream ofs(copyData.GetFileName().c_str(),ios_base::binary);
	ofs.write((char*)&copyData, sizeof(copyData));
	ofs.close();
}

template<typename T>
inline const T & FileMgr<T>::ReadFile(const std::string fileName) const
{
	static_assert(is_base_of<IFile, T>::value);
	
	T *file = new T();
	std::ifstream ifs(fileName.c_str(), ios_base::binary);
	if (ifs.is_open())
	{
		ifs.read((char*)file, sizeof(*file));
		ifs.close();
		return *file; //포인터로 선언 안하니까 에러가 납니다!
	}
	else
	{
		Cursor::GetInst()->BufferWrite(20, 20, "FileMgr::ReadFile -> file is not found!", Color::BLUE);
		exit(0);
	}
	
}
