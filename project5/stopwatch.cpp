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
#include <ctime>

stopwatch::stopwatch()
{
	cout << "press any key to start"; //ask the user to start the stopwatch
	std::cin.ignore(); //get the keyhit
	int start = clock(); //start the clock
	std::cout << "hit any key to stop"; //ask the user to stop the stopwatch at any time
	std::cin.ignore(); //get the keyhit
	std::cout << (clock() - start) / 1000 << " seconds." << endl; //print out the time elapsed in seconds
	
}
stopwatch::~stopwatch()
{
}