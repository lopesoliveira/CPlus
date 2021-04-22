// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    std::cout << "Hello World!\n";
    std::cout << 42 << std::endl;
    std::cout << 2 + 2 << std::endl;
    std::cout << 2.2 << std::endl;
    std::cout << 4 + 2.2 + 3 + 0.8 << std::endl;

    auto x = "joao";
    std::cout << x << std::endl;

    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The double of the number you entered is: " << n * 2 << endl;

    cout << "Hoje dia 16 de Abril de 2010 o Sprting ganhou 1-0 ao Farense. Falta pouco para o título!" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }


    /* try {
         if ((int)n)
         {
             cout << "The number you entered is ";
             cout << n << endl;
         }
         else
         {
             throw(n);
         }
     }
     catch (string y)
     {
         cout << "You did not enter a numer";
     }*/


     /* try {
          int age = 18;
          if (age >= 18) {
              cout << "Access granted - you are old enough.";
          }
          else {
              throw (age);
          }
      }
      catch (int myNum) {
          cout << "Access denied - You must be at least 18 years old.\n";
          cout << "Age is: " << myNum;*/
          //}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
