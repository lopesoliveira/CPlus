#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;


int collections()
{
	vector<int> nums;

	for (int i = 0; i < 10; i++)
	{
		nums.push_back(i);
	}

	for (auto item : nums)
	{
		cout << item << " ";
	}
	cout << endl;

	vector<string> words;

	cout << "Enter 3 words: ";

	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		words.push_back(s);
	}

	for (auto &item : words)
	{
		cout << item << " ";
	}
	cout << endl;

	cout << "int vector has " << nums.size() << " elements";

	nums[5] = 3;
	nums[6] = -1;
	nums[1] = 99;

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}




	return 0;
}

