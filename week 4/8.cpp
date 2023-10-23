#include <iostream>
using namespace std;

int pet(int holidays)
{
    int workingDays = 365 - holidays;
    int timeForGames = workingDays * 63 + holidays * 127;
    int difference = 30000 - timeForGames;
    if (difference > 0)
    {
        cout << "Tom will sleep well" << endl;
    }
    else
    {
        cout << "Tom will run away" << endl;
    }
    return 0;
}

int main()
{
    int holidays;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    pet(holidays);
}