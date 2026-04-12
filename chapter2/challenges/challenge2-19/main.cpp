/*
The average July high temperature is 85 degrees Fahrenheit in New York City,
88 degrees in Denver, and 106 degrees in Pheonix. Write a program that calculates and
reports what the new average high July temperature would be for each of these cities if
temperatures to rise by 2 percent.
*/
#include <iostream>
using namespace std;

int main()
{
    double nyc = 85;
    double denver = 88;
    double pheonix = 106;

    double increase = 1.02;

    double newNyc = nyc * increase;
    double newDenver = denver * increase;
    double newPhoenix = pheonix * increase;

    cout << "NYC: " << newNyc << " degrees" << endl;
    cout << "Denver: " << newDenver << " degrees" << endl;
    cout << "Phoenix: " << newPhoenix << " degrees" << endl;

    return 0;
}