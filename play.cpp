#include "event.cpp"
#include <ctime>
#include"dork.h"

int Roll()
{
	char in_str[4];
	int roll= 0;
	char rollAgain[1] = {'y'};
	
	printw("Type roll to roll the die. \n");
	scanw("%s",in_str);
	while(strcmp(in_str,"roll") != 0)
	{
		printw("Type roll to roll the die. \n");
		scanw("%s",in_str);
	}
	if(strcmp(in_str,"roll") == 0)
	{
		srand(time(0));
		roll = (rand()%6+1);
		return roll;
	}
	
}
/*
int rollAgain()
{
	while(strcmp(rollAgain,"y") == 0)
	{
		printw("Roll again? y or n \n");
		scanw("%s",rollAgain);
	}
}*/
