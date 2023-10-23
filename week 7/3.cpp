#include <iostream>
using namespace std;

void amplify(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int n = i;
        if (i % 4 == 0)
        {
            n = i * 10;
        }
        cout << n;
        if (i < n)
        {
            cout << ",";
        }
    }
}
main()
{
    int number;
    cout << "Enter the number to Amplify: ";
    cin >> number;

    amplify(number);
}
