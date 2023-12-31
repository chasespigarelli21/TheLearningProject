#include <stdio.h>

#include <iostream>

#include "Array.h"

#include "LinkedList.h"

#include "GlobalVariables.h"










int main()
{
	// initialize variables

		// create an pointer array
		int *array;

		// size of desired array
		int arrayLength;

		// node for linked list must be initialized otherwise you get an error
		Node* node = nullptr;

		// prompt for selecting which data structure to work with
		int prompt;

		// size of linked list
		int linkedListSize;

		



	// Task Prompt

	printf("Welcome to the Learning Project.\n");
	

	printf("Would you like to work with arrays(1) or linked lists(2)?\n");
	scanf_s("%d", &prompt);



	if (prompt == 1)
	{

		// Task #1 --> Array manipulation


			// Task 1.1: Get array length from user

			arrayLength = PromptArrayLength();

			// Assign the array length to the array
			array = new int[arrayLength];




			// Task 1.2: Get digits from user

				// Prompt user for digits in array
			array = GetDigitsForArray(arrayLength, array);



			// Task 1.3: Display the array

				// call function using an array and the array length to display the array
			DisplayArray(array, arrayLength);


			// Task 1.4: Sort the Array

				// call function that takes in an array pointer and return the sorted array
			array = SortArray(array, arrayLength);

			// display the sorted array
			DisplayArray(array, arrayLength);


			// Task 1.5: Display the array address

				// call function to display the address of the array
			DisplayArrayAddress(array);


			// Task 1.6: Display the address of each integer in the array

				// call function to display the address of each integer in the array
			DisplayArrayIntegerAddresses(array, arrayLength);



			// free array allocated memory
			delete[] array;








	}




	


	// Task 2 --> Linked List Manipulation

	if (prompt == 2)
	{



		// prompt user for digits to place into linked list
		node = AddNode(node);


		// display the linked list
		DisplayLinkedList(node);



	}














	


	printf("%c", NEW_LINE_CHAR);
	printf("Program successfully terminated.\n");

	// return program success
	return 0;
}