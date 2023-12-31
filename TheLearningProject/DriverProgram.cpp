#include <stdio.h>

#include <iostream>

const int STD_STR_LEN = 20;

const int STD_ARRAY_LEN = 20;

const char NEW_LINE_CHAR = '\n';

// Function: Take in an array and its size and display the array
void DisplayArray(int someArray[], int length)
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
		for (index = 0; index < length; index++)
		{

			printf("%d", someArray[index]);
			printf("%c", NEW_LINE_CHAR);

		}
}


// Function: Take in an array of integers and sort them and return the sorted array
void SortArray( int someArray[], int length )
{
	// display the array
		
		// initialize variables
		int index;

		int innerIndex;

		int temp;

		// prompt
		printf("Displaying Sorted Array");
		printf("%c", NEW_LINE_CHAR);
		printf("================");
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
}


// Function: Take in a linked list and return the sorted linked list 
void SortLinkedList()
{

}

// Function: Take in an integer(variable) in and return the corresponding address
void ReturnAddress()
{

}


// Function: Take in an integer address and return the corresponding variable
void ReturnVariable()
{

}


// Create a car struct with different car parts as struct member variables
struct car {
	int engine;
	int window;
	int steeringWheel;
	int seats;
	int floormats;
	int mirrors;
	int year;
	char model[STD_STR_LEN];
	std::string make;

};




// Create a class 














int* GetDigitsForArray(int length, int *someArray)
{

	// initialize variables
	int index;

	// prompt the user for digits
	printf("Please enter the digits you would like to enter into your array: ");

	for (index = 0; index < length; index++)
	{
		scanf_s("%d", &someArray[index]);

		
	}

	return someArray;


}


int PromptArraySize()
{

	// initialize variables

	// size of array variable
	int size;

	// prompt user for size
	printf("Please enter the size of your array: ");
	scanf_s("%d", &size);

	return size;

	
}





int main()
{
	// initialize variables

		// create an integer
		int myInteger;

		// create a string
		char myString[STD_STR_LEN];

		// create an pointer array
		int *array;

		// size of desired array
		int arrayLength;

		// index used in the for-loop
		int index;

		



    // Task 1: Get array size

		arrayLength = PromptArraySize();

		// Assign the array size to the array
		array = new int[arrayLength];
		
		


	// Task 2: Get Digits

		// Prompt user for digits in array
		array = GetDigitsForArray(arrayLength, array);

		

	// Task 2: Display the array

		// call function using an array and the array length to display the array
		DisplayArray(array, arrayLength);











	// free any allocated memory
	delete[] array;
	





	printf("Program successfully terminated.\n");

	// return program success
	return 0;
}