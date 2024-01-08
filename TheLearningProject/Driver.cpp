#include <stdio.h>

#include <iostream>

#include "Array.h"

#include "LinkedList.h"

#include "GlobalVariables.h"

#include "Threads.h"

#include <thread>

#include <mutex>

#include "Vectors.h"

#include "DoublePointer.h"

#include "RaceConditions.h"

#include "Semaphore.h"

#include "StringArray.h"

#include "Heap.h"

#include "RedBlackTrees.h"

#include "NineQueensProblem.h"

#include <string>






class Person
{
	public:
		int age;
		char name[STD_STR_LEN];


		void SetNameToChase()
		{
			strcpy_s(name, "Chase");
		}


};




struct Car
{
	int year;
	char make[STD_STR_LEN];
	char model[STD_STR_LEN];
};





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
		int userSelection;

		// size of linked list
		int linkedListSize;

		// integer for array prompt
		const int arraySelection = 1;

		// integer for linked list prompt
		const int linkedListSelection = 2;

		// integer constant for threads prompt selection
		const int threadsSelection = 3;

		// integer constant for vectors prompt selection
		const int vectorSelection = 4;

		// integer constant for double pointers prompt selection
		const int doublePointerSelection = 5;

		// integer constant for race conditions selection
		const int raceConditionsSelection = 6;

		// integer constant for semaphore selection
		const int semaphoreSelection = 7;

		// integer constant for string array selection
		const int stringArraySelection = 8;

		// integer constant for a heap
		const int heapSelection = 9;

		// integer constant for red-black trees
		const int redBlackTreesSelection = 10;

		// integer constant for nine-queen problem
		const int nineQueensProblemSelection = 11;

		// used for a for-loop
		int index;

		// count used for how many threads the user wants
		int threadCount;

		// value used for incrementing and decrementing inside the threads
		int threadValue = 0;

		

	// Task 0: Classes and Structs Manipulation

		// Task 0.1: Class Manipulation
		Person Chase;

		strcpy_s(Chase.name, "NPC");

		printf("Name before calling set name function: ");
		printf("%s", Chase.name);
		printf("%c", NEW_LINE_CHAR);

		Chase.SetNameToChase();

		printf("Name after calling set name function: ");
		printf("%s", Chase.name);
		printf("%c", NEW_LINE_CHAR);


		// Task 0.2: Struct Manipulation

		Car truck;

		truck.year = 2012;

		strcpy(truck.make, "Dodge");
		strcpy(truck.model, "Ram");

		



		



	// Task Prompt

	printf("Welcome to the Learning Project.\n");
	

	printf("Would you like to work with arrays(1), linked lists(2), threads(3), vectors(4), double pointers(5), race conditions(6), semaphores(7), or string arrays(8)? \n");
	scanf_s("%d", &userSelection);

	// Task #1 --> Array manipulation

	    // If the user select the array manipulation prompt
		if (userSelection == arraySelection)
		{

		
				// Task 1.1: Get array length from user
			        
                    // use the function PromptArrayLength() to prompt the user for how long they would like their array to be
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

	    // if the user selects the linked list prompt
		if (userSelection == linkedListSelection)
		{

			// Task 2.1: Prompt the user for a linked list size

				// prompt the user how many digits they would like in their linked list
				printf("How many digits would you like to enter into your linked list? \n");

				// store that user input for the linked list size in linkedListSize
				scanf_s("%d", &linkedListSize);

			// Task 2.2: Add nodes to the linked list

				// loop through however big the size of the linked list is
				for (index = 0; index < linkedListSize; index++)
				{
					// add a new node to the linked list 
					node = AddNode(node);
				}

			// Task 2.3: Display the linked list

				// display the linked list
				DisplayLinkedList(node);

			// Task 2.4: Sort the linked list

				// call function to sort the linked list
				node = SortLinkedList(node);

				// display the sorted linked list
				DisplayLinkedList(node);




		}





	

	// Task 3: Threads
	if (userSelection == threadsSelection)
	{

		WelcomeToThreads();


		printf("Please enter the number of threads: ");
		scanf_s("%d", &threadCount);

		
	    // Create two threads, each associated with a different function
		std::thread worker1([&]() { IncrementValueInThread(threadCount); });
		std::thread worker2([&]() { DecrementValueInThread(threadCount); });

		// Wait for the threads to finish their execution before proceeding
		worker1.join(); // This function call blocks the main thread until worker1 completes
		worker2.join(); // This function call blocks the main thread until worker2 completes

		

	}




	// Task 4: Vectors
	if (userSelection == vectorSelection)
	{
		// initialize variables
		std::vector<int> myVector;

		// welcome user to the vectors section
		WelcomeToVectors();

		// Get vector from the user
		getVector(myVector);

		// Display the vector
		displayVector(myVector);
	}



	// Task 5: Double Pointers
	if (userSelection == doublePointerSelection)
	{

		// initialize variables
		int myValForPointerSection;

		int** myDoublePointer;




		WelcomeToDoublePointers();
		printf("%c", NEW_LINE_CHAR);


		printf("Please enter a value: ");
		scanf_s("%d", &myValForPointerSection);
		printf("%c", NEW_LINE_CHAR);





		myDoublePointer = ReturnDoublePointer(myValForPointerSection);



	}





	// Task 6: Race Conditions
	if (userSelection == raceConditionsSelection)
	{
		// initialize variables

		WelcomeToRaceConditions();
	}



	// Task 7: Semaphores
	if (userSelection == semaphoreSelection)
	{
		// initialize variables

		WelcomeToSemaphores();
	}




	// Task 8: String Arrays
	if (userSelection == stringArraySelection)
	{
		// initialize variables
		char theString[STD_STR_LEN];

		WelcomeToStringArray();

		printf("Please enter a string: ");
		scanf_s("%s", &theString, STD_STR_LEN);

		printf("The string before sorting: ");
		printf("%s", theString);
		printf("%c", NEW_LINE_CHAR);

		

		SortStringArray(theString);

		printf("The string after sorting: ");
		printf("%s", theString);
		printf("%c", NEW_LINE_CHAR);




		




	}




	// Task 9: Heap (Binary Search Tree)
	if (userSelection == heapSelection)
	{
		// initialize variables


		// welcome user to the heaps section
		WelcomeToHeaps();
	}




	// Task 10 Red Black Trees
	if (userSelection == redBlackTreesSelection)
	{
		// initialize variables


		// welcome user to the red black trees section
		WelcomeToRedBlackTrees();
	}






	// Task 11: Nine Queens Problem
	if (userSelection == nineQueensProblemSelection)
	{
		// initialize variables


		// welcome user to the nine queens problem section
		WelcomeToNineQueensProblem();
	}

	







	printf("%c", NEW_LINE_CHAR);
	printf("Program successfully terminated.\n");

	// Print the value of __cplusplus
	std::cout << "C++ version: " << __cplusplus << std::endl;

	// test
	int testNum = 5;
	printf("%c", NEW_LINE_CHAR);
	printf("Test: ");
	printf("%d", ++testNum);
	

	printf("%c", NEW_LINE_CHAR);

	// return program success
	return 0;
}