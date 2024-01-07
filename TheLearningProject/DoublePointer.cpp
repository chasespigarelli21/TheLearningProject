


#include <stdio.h>



void WelcomeToDoublePointers()
{
	printf("Welcome to double pointers");
}




// reuturn a double pointer
void** ReturnDoublePointer(void** someDoublePointer)
{

	void* someVar;

	void** someVarPointer = &someVar;

	return someDoublePointer;

}