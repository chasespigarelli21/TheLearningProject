


#include <stdio.h>

#include "GlobalVariables.h"



void WelcomeToDoublePointers()
{
	printf("Welcome to double pointers");
}




// reuturn a double pointer
int** ReturnDoublePointer(int someVar)
{


	printf("The value: ");
	printf("%d", someVar);
	printf("%c", NEW_LINE_CHAR);


	int* someVarPointer = &someVar;

	printf("The address of the pointer: ");
	printf("%p", someVarPointer);
	printf("%c", NEW_LINE_CHAR);

	int** someVarDoublePointer = &someVarPointer;

	printf("The address of the address of the pointer: ");
	printf("%p", someVarDoublePointer);
	printf("%c", NEW_LINE_CHAR);

	return someVarDoublePointer;

}