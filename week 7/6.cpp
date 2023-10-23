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
long primorial(int n)
{
    long i = 0;
    long k = 2;
    long total = 1;
    while (i != n)
    {
        if (isPrime(k))
        {
            total = total * k;
            i++;
        }
        k++;
    }
    return total;
}

main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << primorial(n);
}
