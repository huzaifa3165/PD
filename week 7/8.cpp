

#include <iostream>
using namespace std;

int main()
{
    int count = 0, weight = 0;
    float avg = 0, minibus = 0, truck = 0, train = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> weight;
        avg += weight;
        if (weight <= 3)
        {
            minibus += weight;
        }
        else if (weight > 3 && weight <= 11)
        {
            truck += weight;
        }
        else
        {
            train += weight;
        }
    }

    float averagePrice = (minibus * 200 + truck * 175 + train * 120) / avg;
    minibus /= avg;
    minibus *= 100;
    truck /= avg;
    truck *= 100;
    train /= avg;
    train *= 100;
    cout << fixed;
    cout.precision(2);
    cout << averagePrice << endl;
    cout << minibus << "%" << endl;
    cout << truck << "%" << endl;
    cout << train << "%" << endl;

    return 0;
}