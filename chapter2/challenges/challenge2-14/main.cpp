/*
The star player of a high school basketball team is 74 inches tall. Write a program to
compute and display the height in feet/inches form.
Hint: Try using the modulus and integer divide operat ions.
*/
#include <iostream>
using namespace std;

int main()
{
    int playerHeight = 74;

    int feet = playerHeight / 12;
    int inches = playerHeight % 12;

    cout << "Player is " << feet << " foot " << inches << " inches" << endl;

    return 0;
}