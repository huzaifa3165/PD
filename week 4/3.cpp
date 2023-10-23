#include <iostream>
using namespace std;

int main()
{
    string country;
    float price;
    cout << "Enter country name: ";
    cin >> country;
    cout << "Enter ticket price: ";
    cin >> price;

    if (country == "Pakistan")
    {

        cout << price * 0.95;
    }
    else if (country == "Ireland")
    {
        cout << price * 0.9;
    }
    else if (country == "India")
    {
        cout << price * 0.8;
    }
    else if (country == "England")
    {
        cout << price * 0.7;
    }
    else if (country == "Canada")
    {
        cout << price * 0.6;
    }
}