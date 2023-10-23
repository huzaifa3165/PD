#include <iostream>
using namespace std;
int projectTimeCalculation(float time, float days, float workers);

main()
{
    float time;
    float time2;
    float days;
    float workers;

    cout << "Enter the needed hours: ";
    cin >> time;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    time2 = projectTimeCalculation(time, days, workers);
    int roundedTime;
    if (time >= time2)
    {
        roundedTime = time - time2;
        cout << "Not enough time! " << roundedTime << " hours needed.";
    }
    else if (time < time2)
    {
        roundedTime = time2 - time;
        cout << "Yes!" << roundedTime << " hours left.";
    }
}

int projectTimeCalculation(float time, float days, float workers)
{
    return workers * days * 10 * 0.9;
}