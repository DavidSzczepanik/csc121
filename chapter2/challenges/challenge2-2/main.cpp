/*
The East Coast sales division of a company generates 58 percent of total sales. Based on
that percentage, write a program that will predict how much the East Coast division will
generate if the company has $8.6 million in sales this year. Display the result on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    int totalSales = 8600000;
    double percentageGenerated = 58;
    double salesGenerated;

    salesGenerated = totalSales * percentageGenerated;

    cout << "East Coast sales generated $" << salesGenerated << endl;
    return 0;
}