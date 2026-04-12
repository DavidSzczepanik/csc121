/*
One acre of land is equivalent to 43,450 square feet. Write a program that calculates
and displays the number of acres in a tract of land whose size is 869 X 360 feet.
*/
#include <iostream>
using namespace std;

int main()
{
    int sqFeetPerAcre = 43450;

    int x = 869;
    int y = 360;
    int totalSqFoot = x * y;
    
    double acreage = totalSqFoot / sqFeetPerAcre;

    cout << "Total acreage: " << acreage << " acres" << endl;

    return 0;
}