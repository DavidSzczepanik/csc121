/*
During the past decade ocean levels have been rising faster than in the past, an average
of approximate ly 3.1 millimeters per year. Write a program that computes how much
ocean levels are expected to rise during the next 15 years if they continue rising at this
rate. Display the answer in both centimeters and inches.
*/
#include <iostream>
using namespace std;

int main()
{
    int years = 15;
    double mmPerYear = 3.1;
    double cmPerMm = 0.1;
    double cmPerIn = 0.3937;

    double totalMm = mmPerYear * years;
    double totalCm = totalMm * cmPerMm;
    double totalIn = totalCm * cmPerIn;

    cout << "Total rise in mm: " << totalMm << " mm" << endl;
    cout << "Total rise in cm: " << totalCm << " cm" << endl;
    cout << "Total rise in in: " << totalIn << " in" << endl;

    return 0;
}