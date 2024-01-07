
#include <string>

#include <stdio.h>

#include "GlobalVariables.h"



// welcome the user to the string arrays section
void WelcomeToStringArray()
{
	// welcome the user
	printf("Welcome to string arrays");
}



// takes in a string array and sorts it and returns the sorted string
char* SortStringArray(char someString[])
{
	// sort the string like an array
	int index;

	// inner index for sorting string array
	int innerIndex;

	// used for calculating given string length
	int stringLength = strlen(someString);

	// used for swapping characters
	char temp;

	// outer loop
	for (index = 0; index < stringLength; index++)
	{
		// inner loop
		for (innerIndex = 0; innerIndex < stringLength - 1; innerIndex++)
		{
			// if character at current index is bigger than the character at the next index
			if (someString[innerIndex] > someString[innerIndex + 1])
			{
				// swap characters
				temp = someString[innerIndex];
				someString[innerIndex] = someString[innerIndex + 1];
				someString[innerIndex + 1] = temp;
			}
			

		}
	}
	
	// return the string pointer
	return someString;

}