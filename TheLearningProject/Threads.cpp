

#include <stdio.h>





// function that increments a count when executing
// uses mutex lock or semaphore lock
// returns the value
int IncrementValueInThread(int value)
{
	
	value++;

	return value;
}


int DecrementValueInThread(int value)
{
	value--;

	return value;
}