#include <iostream>
using namespace std;
double apartment(string month, double stay)
{
    if(stay>14)
    stay *= 0.9;
    if (month == "May" || month == "October")
    {
        return stay * 65;
    }
    else if (month == "June" || month == "September")
    {
        return stay * 68.7;
    }
    else if (month == "July" || month == "August")
    {
        return stay * 77;
    }
    return 0;
}
double studio(string month, double stay)
{
    if (month == "May" || month == "October")
    {
        if (stay > 14)
        {
            return stay * 50 * 0.7;
        }
        else if (stay > 7)
            return stay * 50 * 0.95;
        else
            return stay * 50;
    }
    else if (month == "June" || month == "September")
    {
        if (stay > 14)
            return stay * 75.2 * 0.8;
        else
            return stay * 75.2;
    }
    else if (month == "July" || month == "August")
    {
        return stay * 76;
    }
    return 0;
}
main()
{
    string month;
    double stay;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stay;
    cout << "Apartment: " << to_string(apartment(month, stay)) << "$." << endl;
    cout << "Studio: " << to_string(studio(month, stay)) << "$.";
}