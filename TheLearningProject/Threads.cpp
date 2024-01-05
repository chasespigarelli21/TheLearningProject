#include <iostream>
#include <thread>


#include "GlobalVariables.h"

#include <mutex>

int theVal;

// Mutex to protect the shared variable
std::mutex valueMutex;

// Function: Increments a given value inside a thread
void IncrementValueInThread()
{
    
    
    for (int index = 0; index < 200; index++)
    {

        // Lock the mutex to protect sharedValue
        std::lock_guard<std::mutex> lock(valueMutex);

      

        theVal++;

        printf("Incremented Value: ");
        printf("%d\n", theVal);

        
        // Introduce a delay to make the loop iterations slower
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

    }
    
    
    

}

// Function: Decrements a given value inside a thread
void DecrementValueInThread()
{
    

    for (int index = 0; index < 200; index++)
    {
        // Lock the mutex to protect sharedValue
        std::lock_guard<std::mutex> lock(valueMutex);

        
        theVal--;
        

        printf("Decremented Value: ");
        printf("%d\n", theVal);


        // Introduce a delay to make the loop iterations slower
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        

        
    }
}





