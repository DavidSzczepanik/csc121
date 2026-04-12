/*
Write a program that computes the tax and tip on a restaurant bill for a patron with a
$44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be
15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    double mealCharge = 44.50;
    double taxRate = 0.0675;
    double tipRate = 0.15;

    double taxCharge = mealCharge * taxRate;
    double mealWithTax = mealCharge + taxCharge;
    double tipCharge = mealWithTax * tipRate;

    double totalBill = mealCharge + taxCharge + tipCharge;

    cout << "Meal Cost: $" << mealCharge << endl;
    cout << "Tax Amount: $" << taxCharge << endl;
    cout << "Tip Charge: $" << tipCharge << endl;
    cout << "Total Bill: $" << totalBill << endl;

    return 0;
}