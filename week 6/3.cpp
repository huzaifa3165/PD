#include <iostream>
using namespace std;

string findZodiacSign(int day, string month)
{
    if (month == "March")
    {
        if (day <= 21)
        {
            return "Aries";
        }
        return "Invalid";
    }
    else if (month == "April")
    {

        if (day <= 19)
        {
            return "Aries";
        }
        else
        {
            return "Taurus";
        }
    }
    else if (month == "May")
    {
        if (day <= 20)
        {
            return "Taurus";
        }
        else
            return "Gemini";
    }
    else if (month == "June")
    {
        if (day <= 20)
        {
            return "Gemini";
        }
        else
        {
            return "Cancer";
        }
    }
    else if (month == "July")
    {
        if (day <= 22)
        {
            return "Cancer";
        }
        else
        {
            return "Leo";
        }
    }
    else if (month == "August")
    {
        if (day <= 22)
        {
            return "Leo";
        }
        else
        {
            return "Virgo";
        }
    }
    else if (month == "September")
    {
        if (day <= 22)
        {
            return "Virgo";
        }
        else
        {
            return "Libra";
        }
    }
    else if (month == "October")
    {
        if (day <= 22)
        {
            return "Libra";
        }
        else
        {
            return "Scorpio";
        }
    }
    else if (month == "November")
    {
        if (day <= 21)
        {
            return "Scorpio";
        }
        else
        {
            return "Sagittarius";
        }
    }
    else if (month == "December")
    {
        if (day <= 21)
        {
            return "Sagittarius";
        }
        else
        {
            return "Capricorn";
        }
    }
    else if (month == "January")
    {
        if (day <= 19)
        {
            return "Capricorn";
        }
        else
        {
            return "Aquarius";
        }
    }
    else if( month == "February"){
        if (day <= 18){
            return "Aquarius";
        }
        else {
            "invalid";
        }
    }
        return "Invalid month";
}

main()
{
    string month;
    int day;

    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    cout << "Zodiac Sign: " << findZodiacSign(day, month);
}