/*
A car with a 20 gallon gas tank averages 23.5 miles per gallon when driven in town
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town and
when driven on the highway.
*/
#include <iostream>
using namespace std;

int main()
{
    double tankCapacity = 20;
    double milesPerGallonTown = 23.5;
    double milesPerGallonHighway = 28.9;

    double totalMilesTown = tankCapacity * milesPerGallonTown;
    double totalMilesHighway = tankCapacity * milesPerGallonHighway;

    cout << "Total Mileage (Town): " << totalMilesTown << " miles" << endl;
    cout << "Total Mileage (Highway): " << totalMilesHighway << " miles" << endl;

    return 0;
}

