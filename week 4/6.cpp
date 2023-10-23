#include <iostream>
using namespace std;

int longestTime(int h, int m)

{
    if (m > 59)
    {
        m = m - 60;
        h = h + 1;
    }
    if (h > 23)
    {
        h = h - 24;
    }
    return h * 60 + m;
}

int main()
{

    int h, m;
    cout << "Enter the hours: ";
    cin >> h;
    cout << "Enter the minutes: ";
    cin >> m;
    cout << longestTime(h, m) << endl;
}