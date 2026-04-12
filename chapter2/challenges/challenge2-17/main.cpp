/*
The Earth's ocean levels have risen an average of 1.8 millimeters per year over the past
century . Write a program that computes and displays the number of centimeters and
number of inches the oceans rose during this time. One millimeter is equivalent to
0.1 centimeters . One centimeter is equivalent to 0.3937 inches.
*/
#include <iostream>
using namespace std;

int main()
{
    int years = 100;
    double mmPerYear = 1.8;
    double cmPerMm = 0.1;
    double cmPerIn = 0.3937;

    double mmRise = mmPerYear * years;
    double cmRise = mmRise * cmPerMm;
    double inRise = cmRise * cmPerIn;

    cout << "Total Rise in mm: " << mmRise << " mm" << endl;
    cout << "Total Rise in cm: " << cmRise << " cm" << endl;
    cout << "Total Rise in in: " << inRise << " in" << endl;

    return 0;
}