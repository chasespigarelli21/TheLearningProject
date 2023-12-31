#include <stdio.h>

#include <iostream>

// Gloabl Variables

const int STD_STR_LEN = 20;

const int STD_ARRAY_LEN = 20;

const char NEW_LINE_CHAR = '\n';



// Function: Take in an array and its size and display the array
void DisplayArray(int *someArray, int someLength)
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
int *SortArray( int someArray[], int length )
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
		printf("%d", index);
		printf(": ");
		printf("%p", &someArray[index]);
		printf("%c", NEW_LINE_CHAR);

	}

}


// Function: Take in an integer address and return the corresponding variable
void ReturnVariable()
{

}

















int *GetDigitsForArray(int length, int *someArray)
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





int main()
{
	// initialize variables

		// create an pointer array
		int *array;

		// size of desired array
		int arrayLength;

		
    // Task 1: Get array length

		arrayLength = PromptArrayLength();

		// Assign the array length to the array
		array = new int[arrayLength];
		
		


	// Task 2: Get Digits

		// Prompt user for digits in array
		array = GetDigitsForArray(arrayLength, array);

		

	// Task 2: Display the array

		// call function using an array and the array length to display the array
		DisplayArray(array, arrayLength);


	// Task 3: Sort the Array

		// call function that takes in an array pointer and return the sorted array
		array = SortArray(array, arrayLength);

		// display the sorted array
		DisplayArray(array, arrayLength);


	// Task 4: Display the array address

		DisplayArrayAddress(array);


    // Task 5: Display the address of each integer in the array

		DisplayArrayIntegerAddresses(array, arrayLength);











	// free any allocated memory
	delete[] array;
	





	printf("%c", NEW_LINE_CHAR);
	printf("Program successfully terminated.\n");

	// return program success
	return 0;
}