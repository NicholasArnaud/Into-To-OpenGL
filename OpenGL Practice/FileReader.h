#pragma once
#include <stdio.h>

class FileReader
{
public:
	FileReader();
	~FileReader();

	FILE*fp;

	const char* printIt(const char* filename);
	void writeIt(const char* filename, const char* write);
};

