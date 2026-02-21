/*
Using Program 1-1 as an example, write a program that calculates how much a Little
League baseball team spent last year to purchase new baseballs. The program should
prompt the user to enter the number of baseballs purchased and the cost of each baseball.
It should then calculate and display the total amount spent to purchase the baseballs.
*/
#include <iostream>
using namespace std;

int main()
{
    double numBaseballs, costPerBaseball, totalSpent;

    // Get the number of baseballs purchased.
    cout << "How many baseballs did you purchase? ";
    cin >> numBaseballs;

    // Get the amount each ball cost.
    cout << "How much did each baseball cost? ";
    cin >> costPerBaseball;

    // Calculate the amount spent.
    totalSpent = numBaseballs * costPerBaseball;

    // Display the amount spent.
    cout << "You spent $" << totalSpent << endl;
    return 0;
}