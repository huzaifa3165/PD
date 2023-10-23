#include <iostream>
using namespace std;

int flowerShop(int redRose, int whiteRose, int tulip)
{
    int total = redRose * 2.00 + whiteRose * 4.10 + tulip * 2.50;
    if (total > 200)
    {
        total = total * 0.8;
    }
    cout << "Original Price: " << total << endl;
    cout << "Price after Discount: " << total * 0.8 << endl;
    return 0;
}

int main()
{
    int redRose, whiteRose, tulip;
    cout << "Enter the number of red roses: ";
    cin >> redRose;
    cout << "Enter the number of white roses: ";
    cin >> whiteRose;
    cout << "Enter the number of tulips: ";
    cin >> tulip;
    flowerShop(redRose, whiteRose, tulip);
}