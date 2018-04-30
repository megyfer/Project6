#include "watch.h"
#include <sstream>
#include <time.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

watch::watch()
{
}

int watch::getHours(){
	time_t seconds; //type time_t seconds
	time(&seconds); //point to the object at seconds

	struct tm*timeinfo = localtime(&seconds);  //get timeinfo of localtime
	return timeinfo->tm_hour;	//return the hours at localtime

}
int watch::getminutes(){
	time_t seconds;//type time_t seconds
	time(&seconds); //point to the object at seconds
	struct tm*timeinfo = localtime(&seconds); //get timeinfo of localtime
	return timeinfo->tm_min; //return the minutes at localtime
}
int watch::getseconds(){
	time_t seconds; //type time_t seconds
	time(&seconds); //point to the object at seconds
	struct tm*timeinfo = localtime(&seconds); //get timeinfo of localtime
	return timeinfo->tm_sec; //return the seconds at local time
}
std::string watch::gettime(){
	std::string time; //make string named time
	std::stringstream out; //make stringstream named out
	out << getHours(); //put localtime hours into out
	time = out.str(); //convert out into string and put it into time
	time += ":"; //add : to time
	out.str(""); //clear out
	out << getminutes(); //put localtime minutes into out
	if (out.str().length() < 2) //if minutes is one digit
	{
		string l = "0" + out.str(); //add 0 before the one digit
		time += l + ":"; //add 0 + minute to time and :
	}
	else{time += out.str() + ":";} //if minutes is two digits just add it to time with : after it
	out.str(""); //clear out
	out << getseconds(); //put localtime seconds into out
	if (out.str().length() < 2) //if seconds is one digit
	{
		string l = "0" + out.str(); //add 0 before the second
		time += l; //add 0 + the second to time
	}
	else
	{
		time += out.str(); //if seconds is two digits add seconds to time
	}
	
	

	return time; //return time


}
watch::~watch()
{
}

