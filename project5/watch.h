#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>

class watch
{
	
public:
	watch();
	~watch();
	int getHours();
	int getminutes();
	int getseconds();
	std::string gettime();
};
class timer : public watch
{
public:
	
	timer();
	~timer();
	int lapse(int x);
};
class stopwatch : public watch
{
public:
	stopwatch();
	~stopwatch();

};

