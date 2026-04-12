/*
Write a program that computes the total sales tax on a $95 purchase. Assume the state
sales tax is 6.5 percent and the county sales tax is 2 percent. Display the purchase price,
state tax, county tax, and total tax amounts on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    int purchasePrice = 95;
    double stateSalesTax = 0.065;
    double countySalesTax = 0.02;

    double stateSalesTaxTotal = purchasePrice * stateSalesTax;
    double countySalesTaxTotal = purchasePrice * countySalesTax;
    double totalTaxAmount = stateSalesTaxTotal + countySalesTaxTotal;

    cout << "Purchase Price: $" << purchasePrice << endl;
    cout << "State Tax: $" << stateSalesTaxTotal << endl;
    cout << "County Tax: $" << countySalesTaxTotal << endl;
    cout << "Total Tax: $" << totalTaxAmount << endl;

    return 0;
}