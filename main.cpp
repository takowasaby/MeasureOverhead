#include <chrono>
#include <iostream>
#include <ctime>
#include <iomanip>

constexpr static int MEASURE_TIMES = 100000;

using namespace std;
using Clock = std::chrono::system_clock;

Clock::duration measure()
{
    auto start_time = Clock::now();

    auto end_time = Clock::now();
    return (end_time - start_time) / MEASURE_TIMES;
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