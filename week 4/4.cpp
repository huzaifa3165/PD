#include <iostream>
using namespace std;
string checkSpeed(int speed)
{

    if (speed > 100)
    {
        return "Halt... YOU WILL BE CHALLENGED !!!";
    }
    else
    {
        return "Perfect! You’re going good.";
    }
    return 0;
}

int main()
{
    int speed;
    cout << "Enter the speed: ";
    cin >> speed;
    cout << checkSpeed(speed);
}