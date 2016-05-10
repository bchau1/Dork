#include"dork.h"


int checkEvent(int x, int y, int arrX[], int arrY[])
{
	for(int i = 1; i<200; i++)
	{
	   if((x == arrX[i]) && (y == arrY[i]))
	   {
		return i;
		break;
	   }
	}
}
