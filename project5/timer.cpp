#include "watch.h"
#include <sstream>
#include <time.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <windows.h>



timer::timer()
{}
int timer::lapse(int x)
{
	clock_t start = clock();   //start time
	for (int i = 0; i <= x; i++) //until the seconds reach x
	{
			Sleep(1000);    //sleep for 1 second intervals
		
		std::cout << i << endl; //print out how many seconds it's been since start time
	}
	cout << '\a';   //make the beepy noise when its over
	return 0;



}
timer::~timer(){}

