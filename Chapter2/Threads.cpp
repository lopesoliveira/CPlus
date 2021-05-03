#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <thread>
#include <chrono>
#include <ctime>
#include <mutex>

int GetRandom(int max)
{
	srand(time(NULL));
	return rand() % max;
}

void ExecuteThread(int id)
{
	//Gets the current time in miliseconds
	auto nowTime = std::chrono::system_clock::now();
	//Convert to a time we can output
	std::time_t sleepTime =
		std::chrono::system_clock::to_time_t(nowTime);
	//Convert to our current time zone
	tm myLocalTime = *localtime(&sleepTime);

	//print some information
	std::cout << "Thread " << id <<
		" Sleep Time: " <<
		std::ctime(&sleepTime) << "\n";


	std::cout << "Month : " << myLocalTime.tm_mon << "\n";
	std::cout << "Day : " << myLocalTime.tm_mday << "\n";
	std::cout << "Year : " << myLocalTime.tm_year + 1900 << "\n";
	std::cout << "Hours : " << myLocalTime.tm_hour << "\n";
	std::cout << "Minutes : " << myLocalTime.tm_min << "\n";
	std::cout << "Seconds : " << myLocalTime.tm_sec << "\n";

	// A thread is just a block of code that executes. main() is a thread it's a block of code executing
	// if working with threads you're working with a multi-threaded application
	// Utilize the processor to execute different blocks of code at the same time, to make calculations faster for example

	//put the thread to sleep. stop its execution for a period of time. In this case up to 3 seconds, no more, can be less
	std::this_thread::sleep_for(std::chrono::seconds(GetRandom(3)));
	nowTime = std::chrono::system_clock::now();
	sleepTime = std::chrono::system_clock::to_time_t(nowTime);
	std::cout << "Thread " << id <<
		" Awake Time: " <<
		std::ctime(&sleepTime) << "\n";
}


int threads()
{

	std::thread th1(ExecuteThread, 1);
	th1.join();
	std::thread th2(ExecuteThread, 2);
	th2.join();

	return 0;
}