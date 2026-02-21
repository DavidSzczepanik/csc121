/*
Using Program 1-1 as an example, write a program that calculates how much a student
organization earns during its fund-raising candy sale. The program should prompt the
user to enter the number of candy bars sold and the amount the organization earns for
each bar sold. It should then calculate and display the total amount earned.
*/
#include <iostream>
using namespace std;

int main()
{
    double numSold, profitPerBar, totalSales;

    // Get the number of bars sold.
    cout << "How many candy bars did you sell? ";
    cin >> numSold;

    // Get the profit per bar sold.
    cout << "How much profit do you earn per bar? ";
    cin >> profitPerBar;

    // Calculate the total sales.
    totalSales = numSold * profitPerBar;

    // Display the total sales.
    cout << "You have earned $" << totalSales << endl;
    return 0;
}