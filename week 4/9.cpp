#include <iostream>
using namespace std;

int tpChecker(int people, int tp)
{
    int days = tp * 500;
    int tpPerDay = days / people;
    if (tpPerDay <= 14)
    {
        cout << "Your TP will only last " << tpPerDay << " days, buy more!" << endl;
    }
    else
    {
        cout << "Your TP will last " << tpPerDay << " days, no need to panic!" << endl;
    }
    return 0;
}

int main()
{
    int people, tp;
    cout << "Enter the number of people in the household: ";
    cin >> people;
    cout << "Enter the number of rolls: ";
    cin >> tp;
    tpChecker(people, tp);
}