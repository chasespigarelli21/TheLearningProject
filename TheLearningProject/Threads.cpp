
// pre-processor directives

#include <iostream>
#include <thread>
#include <semaphore>


#include "GlobalVariables.h"

#include <mutex>

// initialize variables

    // value used to increment and decrement inside the threads
    int theVal;

    // Mutex to protect the shared variable
    std::mutex valueMutex;






// Function: Display to the user they have arrived at the threads part of the program
void WelcomeToThreads()
{
    // welcome user
    printf("%c", NEW_LINE_CHAR);
    printf("Welcome to threads");
    printf("%c", NEW_LINE_CHAR);
}




// Function: Increments a given value inside a thread
void IncrementValueInThread(int count)
{
    
    // loop
    for (int index = 0; index < count; index++)
    {

        // Lock the mutex to protect sharedValue
        std::lock_guard<std::mutex> lock(valueMutex);
    
        // increment theVal
        theVal++;

        // display the incremented value
        printf("Incremented Value: ");
        printf("%d\n", theVal);
        
        // Introduce a delay to make the loop iterations slower
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

    }
    
    
    

}

// Function: Decrements a given value inside a thread
void DecrementValueInThread(int count)
{
    
    // loop
    for (int index = 0; index < count; index++)
    {
        // Lock the mutex to protect sharedValue
        std::lock_guard<std::mutex> lock(valueMutex);

        // decrement theVal
        theVal--;
        
        // display the decremented value
        printf("Decremented Value: ");
        printf("%d\n", theVal);


        // Introduce a delay to make the loop iterations slower so other threads can run concurrently
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        

        
    }
}







