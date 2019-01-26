#pragma once
#include "IFile.h"
class RankFile:public IFile
{
public:
	FILETYPE type = FILETYPE::RANK;
private:
	std::string Name;
	std::string FileName;
	unsigned int Point;
	double Time;
public:
	void SetPlayerName(const std::string &name) { Name = name; }
	const std::string GetPlayerName()const { return Name; }
	void SetPlayerPoint(const unsigned int &point) { Point = point; }
	const unsigned int GetPlayerPoint()const { return Point; }
	void SetPlayerTime(const double & time) { Time = time; }
	const double GetPlayerTime()const { return Time; }
public:
	virtual void SetFileName(const std::string &filename) { FileName = filename; }
	virtual const std::string GetFileName() {
		return FileName;
	}
public:
	RankFile() {}
	RankFile(std::string fileName,std::string name, unsigned int point, double time):Name(name),Point(point),Time(time), FileName(fileName){};
	RankFile(const RankFile & copyFile) 
	{
		this->Name = copyFile.Name;
		this->Point = copyFile.Point;
		this->Time = copyFile.Time;
		this->FileName = copyFile.FileName;
	}
	~RankFile();
};

