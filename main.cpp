#include <chrono>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "SImpleFunctions/SimpleFunctions.h"
#include "ClassMethods/ClassMethods.h"
#include "VirtualFunctions/VirtualFunctions.h"
#include "FunctionObjects/FunctionObjects.h"

#define FUNC_TEST() ClassMethods()
#define METHOD_TEST() dev5.virtual_function_int(n)
#define OBJECT_TEST() obj() 
#define POINTER_TEST() ptr(n) 

constexpr static int MEASURE_TIMES = 10000000;

using namespace std;
using Clock = std::chrono::high_resolution_clock;

Clock::duration measure_func()
{
    auto n = 0;
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
    auto n = 0;
    auto s = std::string();
    ClassMethods cls;
    Implement impl;
    Derived1 dev1;
    Derived2 dev2;
    Derived3 dev3;
    Derived4 dev4;
    Derived5 dev5;

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
    auto n = 0;
    auto s = std::string();
    auto obj = bind(action_int5, 0, 0, 0, 0, 0);

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
    auto n = 0;
    auto s = std::string();
    void (*ptr)(int) = action_int;

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
    //auto result = measure_func();
    //auto result = measure_method();
    auto result = measure_object();
    //auto result = measure_pointer();

    cout 
        << chrono::duration_cast<chrono::duration<double, milli>>(result).count()
        << "(ms)"
        << endl;

    return 0;
}