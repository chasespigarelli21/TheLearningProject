


#include <stdio.h>



void WelcomeToDoublePointers()
{
	printf("Welcome to double pointers");
}




// reuturn a double pointer
int** ReturnDoublePointer(int someVar)
{



	int* someVarPointer = &someVar;

	int** someVarDoublePointer = &someVarPointer;

	return someVarDoublePointer;

}