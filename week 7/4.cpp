#include <iostream>
using namespace std;

int triangle(int n)
{
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total += i;
    }
    return total;
}
main()
{
    int numberOfTriangles;
    cout << "Enter number of Triangle: ";
    cin >> numberOfTriangles;
    cout << triangle(numberOfTriangles);
}
