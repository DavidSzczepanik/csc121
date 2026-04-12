/*
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 52 percent of
them purchase citrus flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or
more energy drinks per week.
• The approximate number of customers in the survey who purchase citrus
flavored energy drinks .
*/
#include <iostream>
using namespace std;

int main()
{
    int numSurveyed = 16500;
    double energyDrinkers = 0.15;
    double citrusLovers = 0.52;

    double numEnergyDrinkers = numSurveyed * energyDrinkers;
    double numCitrusLovers = numEnergyDrinkers * citrusLovers;

    cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: " << numEnergyDrinkers << endl;
    cout << "The approximate number of customers in the survey who purchase citrus flavored energy drinks: " << numCitrusLovers << endl;

    return 0;
}