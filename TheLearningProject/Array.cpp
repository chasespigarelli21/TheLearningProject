
#include <stdio.h>


#include "GlobalVariables.h"

// Function: Take in an array and its size and display the array
void DisplayArray(int* someArray, int someLength)
{
	// display the array

		// initialize variables
	int index;

	// prompt the title to the user
	printf("Displaying Array");
	printf("%c", NEW_LINE_CHAR);
	printf("================");
	printf("%c", NEW_LINE_CHAR);


	// iterate thru array
	for (index = 0; index < someLength; index++)
	{

		printf("%d", someArray[index]);
		printf("%c", NEW_LINE_CHAR);

	}
}


// Function: Take in an array of integers and sort them and return the sorted array
int* SortArray(int someArray[], int length)
{
	// display the array

		// initialize variables
	int index;

	int innerIndex;

	int temp;

	// prompt
	printf("%c", NEW_LINE_CHAR);
	printf("Sorting Array...");
	printf("%c", NEW_LINE_CHAR);


	// loop through array
	for (index = 0; index < length; index++)
	{
		for (innerIndex = 0; innerIndex < length - 1 - index; innerIndex++)
		{
			if (someArray[innerIndex] > someArray[innerIndex + 1])
			{
				// swap the integers
				temp = someArray[innerIndex];
				someArray[innerIndex] = someArray[innerIndex + 1];
				someArray[innerIndex + 1] = temp;


			}
		}



	}

	printf("%c", NEW_LINE_CHAR);

	// return the sorted array
	return someArray;
}


// Function: Take in an array and return the address
void DisplayArrayAddress(int* someArray)
{
	printf("%c", NEW_LINE_CHAR);
	printf("Displaying Array Address");
	printf("%c", NEW_LINE_CHAR);
	printf("%p", &someArray);
	printf("%c", NEW_LINE_CHAR);
}

void DisplayArrayIntegerAddresses(int* someArray, int someSize)
{

	// initialize variables
	int index;

	printf("%c", NEW_LINE_CHAR);


	for (index = 0; index < someSize; index++)
	{
		printf("Displaying Array Address for Integer #");
		printf("%d", index + 1);
		printf(": ");
		printf("%p", &someArray[index]);
		printf("%c", NEW_LINE_CHAR);

	}

}





int* GetDigitsForArray(int length, int* someArray)
{

	// initialize variables
	int index;



	for (index = 0; index < length; index++)
	{
		// prompt the user for digits
		printf("Please enter digit #");
		printf("%d", index + 1);
		printf(": ");
		scanf_s("%d", &someArray[index]);

	}

	printf("%c", NEW_LINE_CHAR);

	return someArray;


}


int PromptArrayLength()
{

	// initialize variables

	// size of array variable
	int size;

	// prompt user for size
	printf("Please enter the size of your array: ");
	scanf_s("%d", &size);

	return size;


}