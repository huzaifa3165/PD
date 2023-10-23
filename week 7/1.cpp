#include <iostream>
using namespace std;

main()
{
    int numberOfRows;
    cout << "Enter desired number of rows: ";
    cin >> numberOfRows;
    for (int a = 1; a <= numberOfRows; a++)
    {
        for (int b = numberOfRows; b >= a; b--)
        {
            cout << "*";
        }
        cout << endl;
    }
}