/*
Kathryn bought 750 shares of stock at a price of $35.00 per share . A year later she sold
them for just $31.15 per share. Write a program that calcu lates and displays the
following:
• The total amount paid for the stock .
• The total amount received from selling the stock .
• The total amount of money she lost.
*/
#include <iostream>
using namespace std;

int main()
{
    int amountOfShares = 750;
    double originalPrice = 35.00;
    double sellingPrice = 31.15;

    double originalAmount = amountOfShares * originalPrice;
    double sellingAmount = amountOfShares * sellingPrice;

    double loss = originalAmount - sellingAmount;

    cout << "The total amount paid for the stock: $" << originalAmount << endl;
    cout << "The total amount received from selling the stock: $" << sellingAmount << endl;
    cout << "The total amount of money lost: -$" << loss << endl;

    return 0;
}