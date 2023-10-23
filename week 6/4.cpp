#include <iostream>
using namespace std;
float calcAmount(string service, string time, float duration)
{
    if (service == "R" || service == "r")
    {
        float extraTime = duration - 50;
        if (extraTime > 0)
        {
            return 10 + extraTime * 0.2;
        }
        else
        {
            return 10;
        }
    }
    else if (service == "P" || service == "p")
    {
        if (time == "d" || time == "D")
        {
            float extraTime = duration - 75;
            if (extraTime > 0)
            {
                return 25 + 0.1 * extraTime;
            }
            else
            {
                return 25;
            }
        }
        else
        {
            float extraTime = duration - 100;
            if (extraTime > 0)
            {
                return 25 + 0.05 * extraTime;
            }
            else
            {
                return 25;
            }
        }
        return 0;
    }
}
main()
{
    string service, time = "d";
    float duration;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> service;
    if (!(service == "R" || service == "r"))
    {

        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }
    cout << "Enter the number of minutes used: ";
    cin >> duration;
    if (service == "R" || service == "r")
        cout << "Service Type: Regular" << endl;
    else
        cout << "Service Type: Premium" << endl;
    cout << "Total Minutes Used: " << duration << " minutes" << endl;
    cout << "Amount Due: $" << calcAmount(service, time, duration);
}