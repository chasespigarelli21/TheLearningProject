#include <stdio.h>


#include "LinkedList.h"

#include "GlobalVariables.h"




Node* SortLinkedList(Node* head)
{
	// Initialize variables
	bool swapped = true;  // Initialize swapped to true to enter the loop
	Node* temp;
	Node* lastSorted = nullptr;
	int tempData;

	// Prompt user
	printf("%c", NEW_LINE_CHAR);
	printf("Sorting Linked List...\n");

	// If the linked list is empty or only has one element
	if (!head || !head->next)
	{
		// Return the linked list
		return head;
	}

	// Continue while there are swaps being made
	while (swapped)
	{
		swapped = false;
		temp = head;

		// Iterate through the unsorted portion of the linked list
		while (temp->next != lastSorted)
		{
			// If the data at the temp node is greater than the data at the next temp node
			if (temp->data > temp->next->data)
			{
				// Swap nodes
				tempData = temp->data;
				temp->data = temp->next->data;
				temp->next->data = tempData;

				// Set swapped to true
				swapped = true;
			}

			// Move to the next node
			temp = temp->next;
		}

		// Set lastSorted to temp
		lastSorted = temp;
	}

	// Return the array head pointer
	return head;
}



// Function to add a node to the end of the linked list
Node* AddNode(Node *head)
{

	// initialize variables
	int value;

	// prompt the user for an integer to add to linked list
	printf("Insert a value to insert into linked list: ");

	// save the value variable
	scanf_s("%d", &value);




	// create a new node
	Node *newNode = new Node{ value, nullptr };

	// if the beginning of the linked list is null
	if (head == nullptr)
	{
		// insert the new node at the beginning of the linked list
		head = newNode;
	}
	else
	{
		// set a node variable to the head of the linked list
		Node* current = head;

		// while the next node in the linked list is not null
		while (current->next != nullptr)
		{
			// go to the next node in the list
			current = current->next;
		}
		// place the node at the end of the list
		current->next = newNode;
	}

	// return the linked list head node address
	return head;
}






// Function: Display a linked list
void DisplayLinkedList(Node *head)
{
	

	// initialize variables
	Node* current = head;

	// display title
	printf("%c", NEW_LINE_CHAR);
	printf("Displaying Linked List");
	printf("%c", NEW_LINE_CHAR);
	printf("======================");
	printf("%c", NEW_LINE_CHAR);


	
	// while the current node is not null
	while (current != nullptr)
	{
		// display the data at the current node
		printf("%d", current->data);

		// set the current node to the next node
		current = current->next;
	}

	printf("%c", NEW_LINE_CHAR);
}




