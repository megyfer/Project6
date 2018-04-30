#include <iostream>
#include "watch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <string>
using namespace std;



int main() {
	bool ans = true; //boolean answer is true
	while (ans == true) //to loop while user wants to
	{

		cout << "What would you like to do?" << endl << ">see time" << endl << ">use timer" << endl << ">use stopwatch" << endl; //ask user what they want to do
		string response; //make string response
		std::getline(std::cin, response); //get user input into response
		string see = "see time"; //string to compare
		string buzz = "use timer";
		string use = "use stopwatch";
		if (response.compare(see) == 0) //if user wants to see time
		{
			watch ay = watch(); //make watch named ay
			string time = ay.gettime(); //get time with ay
			cout << time << endl; //print out the time
			cout << "Would you like to continue?" << endl; //ask if user wants to continue
			string answer; //make string named answer
			cin >> answer; //put user input into answer
			if (answer.compare("no") == 0) //if user put in no
			{
				ans = false; //make ans false to quit
			}
		}
		else if (response.compare(buzz) == 0) //if user wants timer
		{
			int s; //make int s
			cout << "How many seconds do you want to set the timer?" << endl; //ask how long timer should go
			cin >> s; //get user input into s
			timer nay = timer(); //make timer named nay
			nay.lapse(s); //lapse for s seconds
			cout << "Would you like to continue?" << endl; //ask if user wants to continue
			string answer; //make string answer
			cin >> answer; //put user input into answer
			if (answer.compare("no") == 0) //if user input no
			{
				ans = false; //make ans false and terminate
			}
		}
		else if (response.compare(use) == 0) //if user wants stopwatch
		{
			stopwatch(); //do stopwatch
			cout << "Would you like to continue?" << endl; //ask user if they want to continue
			string answer; //make string answer
			cin >> answer; //put user input into answer
			if (answer.compare("no") == 0) //if user input no
			{
				ans = false; //make ans false and quit
			}
		}
		else { cout << "Please enter an answer."; } //if user puts in something that doesn't match have them input a real answer
		
	}

}