#include <iostream>
#include <thread>
#include <mutex>

// function that increments a count when executing
// uses mutex lock
// returns the value
int IncrementValueInThread(int& value, std::mutex& mtx)
{
    std::lock_guard<std::mutex> lock(mtx);
    value++;
    return value;
}

int DecrementValueInThread(int& value, std::mutex& mtx)
{
    std::lock_guard<std::mutex> lock(mtx);
    value--;
    return value;
}


