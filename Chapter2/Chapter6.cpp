#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main2()
{
	string name;
	cout << "Who are you? ";
	cin >> name;	
	string greeting = "Hello, " + name;
	if (name == "Kate")
	{
		greeting += ", I know you!";
	}
	cout << greeting << endl;

	int l = greeting.length();
	cout << "\"" + greeting + "\" is " << l << " characters long." << endl;
	string beginning = greeting.substr(greeting.find(' ') + 1);
	cout << beginning << endl;
	if (beginning == name)
	{
		cout << "Expected result!" << endl;
	}

	string name1;
	string name2;
	bool keepgoing = true;
	int finish;

	while (keepgoing)
	{
		/*cout << "Enter a name: ";
		cin >> name1;		
		cout << "Enter another name: ";
		cin >> name2;*/
		// to allow names with spaces without considering they are 2 different inputs
		cin.ignore();
		cout << "Enter a name: ";
		getline(cin, name1);
		cout << "Enter another name: ";
		getline(cin, name2);

		int l1 = name1.length();
		int l2 = name2.length();

		if (l1 > l2)
		{
			cout << name1 << " is bigger than " << name2;
		}
		if (l1 < l2)
		{
			cout << name1 << " is smaller than " << name2;
		}
		if (l1 == l2)
		{
			cout << name1 << " is equal to " << name2;
		}		
		cout << endl;
		cout << "Enter 0 to finish any other number to continue ";
		cin >> finish;
		if (finish == 0)
		{
			keepgoing = false;
		}

	}


	return 0;
}
