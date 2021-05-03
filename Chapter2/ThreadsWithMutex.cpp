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

//int GetRandom2(int max)
//{
//	srand(time(NULL));
//	return rand() % max;
//}

std::string GetTime2()
{
	auto nowTime = std::chrono::system_clock::now();
	std::time_t sleepTime =
		std::chrono::system_clock::to_time_t(nowTime);
	return std::ctime(&sleepTime);
}

double acctBalance = 100;

//protect shared data from being accessed at the same time 
// it's going to protect the threads from accessing the accounting balance at the same time and pulling it money out of it. So we will be calling the account lock
std::mutex acctLock;

//Function that is going to access the account balance
//The exception safe way to block our balance from being accessed by more than one thread at a time is to use lock
//It is going to restrict access to the entire scope of this function once one of the other threads comes in here and tries to execute this code
//The code to be safe is between lock and unlock, but if there's an exception this won't work so we're doing this another way
void GetMoney(int id, double withdrawal)
{
	std::lock_guard<std::mutex> lock(acctLock);
	/*acctLock.lock();

	acctLock.unlock();*/

	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << id <<
		" tries to withdrawal $ " <<
		withdrawal << " on " <<
		GetTime2() << "\n";

	if ((acctBalance - withdrawal) >= 0)
	{
		acctBalance -= withdrawal;
		std::cout << "New account balance is $" <<
			acctBalance << "\n";
	}
	else
	{
		std::cout << "Not enough money in the Account" << "\n";
		std::cout << "Current balance is: $" << acctBalance << "\n";
	}
}

int threadsWithMutex()
{
	//Threads accessing Account randomly //Don't expect the first theread accesses first, the 2nd access in 2nd nd so on
	std::thread threads[10];
	//create our thread pool
	for (int i = 0; i < 10; ++i)
	{
		threads[i] = std::thread(GetMoney, i, 15);
	}
	for (int i = 0; i < 10; ++i)
	{
		threads[i].join();
	}

	return 0;
}

//every 3 seconds a thread tries to remove $15 from the account