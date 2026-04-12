/*
A car holds 16 gallons of gasoline and can travel 312 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    int tankCapacity = 16;
    int milesPerTank = 312;

    int milesPerGallon = milesPerTank / tankCapacity;

    cout << "Tank capacity: " << tankCapacity << " gallons" << endl;
    cout << "Miles per tank: " << milesPerTank << " miles" << endl;
    cout << "Miles per gallon: " << milesPerGallon << " miles / gallon" << endl;

    return 0;
}