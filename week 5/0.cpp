#include <iostream>
using namespace std;

int a = 10;
int b = 20;

int add()
{
    a = 40;
    return a + b;
}
main()
{
    int number = a;
    number = 20;
    a = 100;
    b = add();
    cout << a << "  " << b;
}