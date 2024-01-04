#include <iostream>
#include <thread>
#include <mutex>

#include "GlobalVariables.h"



std::mutex mutex;



// Function: Increments a given value inside a thread
int IncrementValueInThread(int value)
{
    // lock the mutex to ensure exculsive access
    std::lock_guard<std::mutex> lock(mutex);
    value++;
    printf("Value after incrementing: ");
    printf("%d", value);
    printf("%c", NEW_LINE_CHAR);
    return value;
}

// Function: Decrements a given value inside a thread
int DecrementValueInThread(int value)
{
    // lock the mutex to ensure exclusive access
    std::lock_guard<std::mutex> lock(mutex);
    value--;
    printf("Value after decrementing: ");
    printf("%d", value);
    printf("%c", NEW_LINE_CHAR);
    return value;
}


