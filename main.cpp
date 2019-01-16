#include <chrono>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "SimpleFunctions.h"

#define TEST() action() 

constexpr static int MEASURE_TIMES = 10000000;

using namespace std;
using Clock = std::chrono::high_resolution_clock;

Clock::duration measure()
{
    auto start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
        TEST();
    auto delta_time_1 = Clock::now() - start_time;
    
    start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
    {
        TEST();
        TEST();
    }
    auto delta_time_2 = Clock::now() - start_time;
    
    return delta_time_2 - delta_time_1;
}

int main(int argc, char** argv)
{
    auto result = measure();

    cout 
        << chrono::duration_cast<chrono::duration<double, milli>>(result).count()
        << "(ms)"
        << endl;

    return 0;
}