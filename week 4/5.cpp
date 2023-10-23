#include <iostream>
using namespace std;

bool possibleBonus(int a, int b)
{

    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    if (possibleBonus(a, b))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}