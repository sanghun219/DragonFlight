#pragma once
#include <string>
enum class FILETYPE 
{
	RANK,
};
class IFile
{
private:
	std::string fileName;
public:
	virtual void SetFileName(const std::string &filename) = 0;
	virtual const std::string GetFileName() = 0;
public:
	IFile();
	virtual ~IFile();
};

