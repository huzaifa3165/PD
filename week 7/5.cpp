#include <iostream>
using namespace std;

bool isPrime(int n)
{
    bool result = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << isPrime(n);
}
