#include <chrono>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "SImpleFunctions/SimpleFunctions.h"
#include "ClassMethods/ClassMethods.h"
#include "VirtualFunctions/VirtualFunctions.h"
#include "FunctionObjects/FunctionObjects.h"

#define FUNC_TEST() mv_action_string5(move(s),move(s),move(s),move(s),move(s)) 
#define METHOD_TEST() mv_action_string5(move(s),move(s),move(s),move(s),move(s)) 
#define OBJECT_TEST() mv_action_string5(move(s),move(s),move(s),move(s),move(s)) 
#define POINTER_TEST() mv_action_string5(move(s),move(s),move(s),move(s),move(s)) 

constexpr static int MEASURE_TIMES = 10000000;

using namespace std;
using Clock = std::chrono::high_resolution_clock;

Clock::duration measure_func()
{
    auto s = std::string();
    auto start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
        FUNC_TEST();
    auto delta_time_1 = Clock::now() - start_time;
    
    start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
    {
        FUNC_TEST();
        FUNC_TEST();
    }
    auto delta_time_2 = Clock::now() - start_time;
    
    return delta_time_2 - delta_time_1;
}

Clock::duration measure_method()
{
    ClassMethods cls;

    auto s = std::string();
    auto start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
        METHOD_TEST();
    auto delta_time_1 = Clock::now() - start_time;
    
    start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
    {
        METHOD_TEST();
        METHOD_TEST();
    }
    auto delta_time_2 = Clock::now() - start_time;
    
    return delta_time_2 - delta_time_1;
}

Clock::duration measure_object()
{
    auto obj = [](){ return; };

    auto s = std::string();
    auto start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
        OBJECT_TEST();
    auto delta_time_1 = Clock::now() - start_time;
    
    start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
    {
        OBJECT_TEST();
        OBJECT_TEST();
    }
    auto delta_time_2 = Clock::now() - start_time;
    
    return delta_time_2 - delta_time_1;
}

Clock::duration measure_pointer()
{
    void (*ptr)() = action;

    auto s = std::string();
    auto start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
        POINTER_TEST();
    auto delta_time_1 = Clock::now() - start_time;
    
    start_time = Clock::now();
    for (int i = 0; i < MEASURE_TIMES; i++)
    {
        POINTER_TEST();
        POINTER_TEST();
    }
    auto delta_time_2 = Clock::now() - start_time;
    
    return delta_time_2 - delta_time_1;
}

int main(int argc, char** argv)
{
    auto result = measure_func();

    cout 
        << chrono::duration_cast<chrono::duration<double, milli>>(result).count()
        << "(ms)"
        << endl;

    return 0;
}