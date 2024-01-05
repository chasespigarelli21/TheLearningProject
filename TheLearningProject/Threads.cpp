#include <iostream>
#include <thread>
#include <semaphore>


#include "GlobalVariables.h"

#include <mutex>

// value used to increment and decrement inside the threads
int theVal;




// Mutex to protect the shared variable
std::mutex valueMutex;

// Function: Increments a given value inside a thread
void IncrementValueInThread(int count)
{
    
    
    for (int index = 0; index < count; index++)
    {

        // Lock the mutex to protect sharedValue
        std::lock_guard<std::mutex> lock(valueMutex);

      

        theVal++;

        printf("Incremented Value: ");
        printf("%d\n", theVal);

        
        // Introduce a delay to make the loop iterations slower
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

    }
    
    
    

}

// Function: Decrements a given value inside a thread
void DecrementValueInThread(int count)
{
    

    for (int index = 0; index < count; index++)
    {
        // Lock the mutex to protect sharedValue
        std::lock_guard<std::mutex> lock(valueMutex);

        
        theVal--;
        

        printf("Decremented Value: ");
        printf("%d\n", theVal);


        // Introduce a delay to make the loop iterations slower
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        

        
    }
}




void TheSemaphoreFunc()
{

}


