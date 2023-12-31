#include <stdio.h>


#include "LinkedList.h"

#include "GlobalVariables.h"







// Function to add a node to the end of the linked list
Node* AddNode(Node *head)
{


	int value;

	printf("Insert a value to insert into linked list: ");

	scanf_s("%d", &value);





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
	
	printf("%c", NEW_LINE_CHAR);
	printf("Displaying Linked List");
	printf("%c", NEW_LINE_CHAR);
	printf("======================");
	printf("%c", NEW_LINE_CHAR);


	Node* current = head;

	while (current != nullptr)
	{
		printf("%d", current->data);
		current = current->next;
	}

	printf("%c", NEW_LINE_CHAR);
}




