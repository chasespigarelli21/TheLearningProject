#include <stdio.h>

#include <iostream>

const int STD_STR_LEN = 20;

const int STD_ARRAY_LEN = 20;

const char NEW_LINE_CHAR = '\n';


// Function: Take in an array of integers and sort them and return the sorted array
void SortArray( int someArray[] )
{
	
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





int main()
{
	// initialize variables

		// create an integer
		int myInteger;

		// create a string
		char myString[STD_STR_LEN];

		// create an array
		int myArray[STD_ARRAY_LEN];

		// custom length for array integer
		int customLength;

		// index used in the for-loop
		int index;



    // Task 1: Create a custom from the user and pass the array to a function that sorts the array
		
		// prompt the user for how many digits they would like to put in the array and store the value in customLength
		printf("Please enter the number of digits you would like to put in your array: ");
		scanf_s("%d", &customLength);
		printf("%c", NEW_LINE_CHAR);

		// display the custom length
		printf("Your custom length is: ");
		printf("%d", customLength);
		printf("%c", NEW_LINE_CHAR);

		// dynamically allocate memory at runtime
		int* customArray = new int[customLength];

		// itterate thru the array
		for (index = 0; index < customLength; index++)
		{
			// ask the user for the digits they would like to put into the array
			printf("Please enter digit at index #");
			printf("%d", index);
			printf(": ");
			scanf_s("%d", &customArray[ index ]);
			printf("%c", NEW_LINE_CHAR);
		} 

		SortArray(customArray);






/*

	// display array

		printf("Displaying Array");
		printf("%c", NEW_LINE_CHAR);
		printf("================");
		printf("%c", NEW_LINE_CHAR);

		for (index = 0; index < customLength; index++)
		{


			printf("Digit at index #");
			printf("%d", index);
			printf(" has value: ");
			printf("%d", customArray[index]);

			printf("%c", NEW_LINE_CHAR);
		}

*/




	// free any allocated memory
	delete[] customArray;
	





	printf("Program successfully terminated.\n");

	// return program success
	return 0;
}