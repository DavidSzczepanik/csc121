/*
An electronics company makes circuit boards that cost $14.95 apiece to produce. Write
a program to determine how much the company should sell them for if it wants to
make a 35 percent profit . Display the result on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    double costPerPiece = 14.95;
    // we want 35% profit, or 135% of the cost of the part
    double profitMargin = 1.35;

    double priceWithProfit = costPerPiece * profitMargin;

    cout << "Cost per price (with 35% profit): $" << priceWithProfit << endl;

    return 0;
}