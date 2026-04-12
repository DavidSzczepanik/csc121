/*
Write a program that stores the integers 50 and 100 in variables and stores the sum of
these two in a variable named t ot al . Display the total on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1 = 50,
        num2 = 100,
        total;

    total = num1 + num2;
    cout << "The total of 50 + 100 = " << total << endl;
    return 0;
}