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

	//ranged for
	for (auto &item : words)
	{
		cout << item << " ";
	}
	cout << endl;

	cout << "int vector has " << nums.size() << " elements";

	nums[5] = 3;
	nums[6] = -1;
	nums[1] = 99;

	cout << endl;
	//traditional for
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	//or for collections
	//iterator for
	cout << "other loop for" << endl;
	for (auto i = begin(nums); i != end(nums); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	sort(begin(words), end(words));
	for (auto& item : words)
	{
		cout << item << " ";
	}
	cout << endl;

	//count the how many 3 are in nums
	int threes = count(begin(nums), end(nums), 3);
	cout << "there are " << threes << " elements with the value of 3 in the nums collection" << endl;

	int tees = count(begin(words[0]), end(words[0]), 't');
	cout << "there are " << tees << " 't' in the first word collection" << endl;







	return 0;
}

