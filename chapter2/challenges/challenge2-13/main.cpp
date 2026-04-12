/*
A particular employee earns $39,000 annually. Write a program that determines
and displays what the amoun t of his gross pay will be for each pay period if he is
paid twice a month (24 pay checks per year) and if he is paid bi-weekly (26 checks
per year) .
*/
#include <iostream>
using namespace std;

int main()
{
    int salary = 39000;
    int twiceMonthly = 24;
    int biweekly = 26;

    double twiceMonthlyPay = salary / twiceMonthly;
    double biweeklyPay = salary / biweekly;

    cout << "Twice a month: $" << twiceMonthlyPay << endl;
    cout << "Bi-Weekly: $" << biweeklyPay << endl;

    return 0;
}