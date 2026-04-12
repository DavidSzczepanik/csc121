/*
A particular brand of paint covers 340 square feet per gallon . Write a program to
determine and report approximately how many gallons of paint will be needed to paint
two coats on a wooden fence that is 6 feet high and 100 feet long.
*/
#include <iostream>
using namespace std;

int main()
{
    int sqFeetPerGallon = 340;

    int height = 6;
    int length = 100;
    int coats = 2;
    double totalSqFeet = height * length * coats;

    double gallons = totalSqFeet / sqFeetPerGallon;

    cout << "Total gallons needed: " << gallons << " gallons" << endl;

    return 0;
}