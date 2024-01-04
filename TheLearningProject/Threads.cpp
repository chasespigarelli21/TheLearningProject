#include <iostream>
#include <thread>


#include "GlobalVariables.h"



// Function: Increments a given value inside a thread
void IncrementValueInThread()
{
    

    for (int index = 0; index < 200; index++)
    {
        printf("+");
    }
}

// Function: Decrements a given value inside a thread
void DecrementValueInThread()
{
    

    for (int index = 0; index < 200; index++)
    {
        printf("-");
    }
}


