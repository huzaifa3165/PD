#include <iostream>
using namespace std;

void checkStudentStatus(float hour, float minutes, float sHour, float sMinutes)
{
    float min = (hour * 60) + minutes;
    float sMin = (sHour * 60) + sMinutes;
    if (min == sMin)
    {
        cout << "On time";
    }
    else if (min > sMin)
    {
        cout << "Early" << endl;
        cout << "Test: " << min - sMin << endl;
        int hr = (min - sMin) / 60;
        int mn = (min - sMin) - (hr * 60);
        if (hr != 0)
            cout << hr << ":" << mn << " hours before the start";
        else
            cout << min - sMin << " minutes before the start";
    }
    else
    {
        cout << "Late" << endl;
        cout << "Test: " << sMin - min << endl;
        int hr = (sMin - min) / 60;
        cout << sMin - min;
        int mn = (sMin - min) - (hr * 60);
        if (hr != 0)
            cout << hr << ":" << mn << " hours after the start";
        else
            cout << sMin - min << " minutes before the start";
    }
}


int main()
{
    float hour, minutes, sHour, sMinutes;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> hour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> minutes;
    cout << "Enter Student hour of arrival: ";
    cin >> sHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> sMinutes;
    checkStudentStatus(hour, minutes, sHour, sMinutes);
    return 0;
}