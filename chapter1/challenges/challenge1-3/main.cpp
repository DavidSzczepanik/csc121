/*
Write a program that calculates how much a garden center spent to make a flower
garden display . The program should prompt the user to enter the cost of the soil, the
flower seeds, and the fence. It should then calculate and display the total amount spent.
*/
#include <iostream>
using namespace std;

int main()
{
    double costSoil, costSeeds, costFence, totalSpent;

    // Get the cost of the soil.
    cout << "How much did the soil cost? ";
    cin >> costSoil;

    // Get the cost of the seeds.
    cout << "How much did the seeds cost? ";
    cin >> costSeeds;

    // Get the cost of the fence.
    cout << "How much did the fence cost? ";
    cin >> costFence;

    // Calculate the total spent.
    totalSpent = costSoil + costSeeds + costFence;

    // Display the total spent.
    cout << "The flower garden display cost $" << totalSpent << endl;
    return 0;
}