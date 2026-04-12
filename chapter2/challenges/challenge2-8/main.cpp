/*
In the United States, land is often measured in square feet. In many other countries, it is
measured in square meters. One acre of land is equivalent to 43,560 square feet. A square
meter is equivalent to 10. 7639 square fee t. Write a program that computes and displays the
number of square feet and the number of square meters in ½ acre of land.
Hint : Because a square meter is larger than a squa re foot, there will be fewer square
meters in ½ acre than there are square feet.
*/
#include <iostream>
using namespace std;

int main()
{
    int sqFootPerAcre = 43560;
    double sqFeetPerSqMeter = 10.7639;
    double acreage = 0.5;

    double sqFootInAcreage = sqFootPerAcre * acreage;
    double sqMeterConversion = sqFootInAcreage / sqFeetPerSqMeter;

    cout << "Square feet in " << acreage << " acres: " << sqFootInAcreage << " square feet" << endl;
    cout << "Square meters in " << acreage << " acres: " << sqMeterConversion << " square meters" << endl;

    return 0;
}