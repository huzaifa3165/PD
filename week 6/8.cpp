#include <iostream>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int homeTown)
{
    float freeHolidays, freeWeekends, leapPlayTime, totalPlayTime;
    freeHolidays = holidays * 0.667;
    freeWeekends = 48 - homeTown;
    freeWeekends = 0.75 * freeWeekends;
    totalPlayTime = freeHolidays + freeWeekends + homeTown;
    leapPlayTime = totalPlayTime + totalPlayTime * 0.15;
    if (yearType == "normal")
    {
        return totalPlayTime;
    }
    if (yearType == "leap")
    {
        return leapPlayTime;
    }
}
main()
{
    string yearType;
    int homeTown, holidays;
    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> homeTown;
    cout << calculateVolleyballGames(yearType, holidays, homeTown);
}
