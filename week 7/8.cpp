// You are responsible for the logistics of various types of cargo. Depending on the weight
// of each cargo, you need a different vehicle, and this will cost a different price per ton:
// Up to 3 tons – a minibus (200 USD per ton).
// From over 3 and up to 11 tons – truck (175 USD per ton).
// Over 11 tons – train (120 USD per ton).
// Your task is to calculate the average price per ton of the cargo, and also what percentage
// of the cargo is transported in each vehicle.
// Input Data:
// From the console, we must read a sequence of numbers, each on a separate line:
// First line: count of cargo for transportation – integer in the range of [1 ... 1000].
// On the next lines we pass the tonnage of the current cargo – integer in the range of
// [1 ... 1000].
// Output Data:
// Print on the console 4 lines, as follows:
// Line #1 – the average price per ton of the cargo (rounded up to the second digit
// after the decimal point).
// Line #2 – percentage of the cargo, carried by minibus (between 0.00% and
// 100.00%, rounded up to the second digit after the decimal point).
// Line #3 – percentage of the cargo, carried by truck (between 0.00% and 100.00%).
// Line #4 – percentage of the cargo, carried by train (between 0.00% and 100.00%).

#include <iostream>
using namespace std;

int main()
{
    int count = 0, weight = 0;
    float avg = 0, minibus = 0, truck = 0, train = 0;
    cin >> count;
    //     if input is
    //     4
    //     1
    //     5
    //     16
    //     3
    //     processing is like this:
    //     By minibus you transport two of the cargo 1 + 3, total of 4
    // tons.
    // By truck you transport one of the cargo: 5 tons.
    // By train you transport one of the cargo: 16 tons.
    // Sum of all cargo is: 1 + 5 + 16 + 3 = 25 tons.
    // Percentage of the cargo by minibus: 4/25*100 = 16.00%
    // Percentage of the cargo by truck: 5/25*100 = 20.00%
    // Percentage of the cargo by train: 16/25*100 = 64.00%
    // Average price per ton of carried cargo: (4 * 200 + 5 * 175 +
    // 16 * 120) / 25 = 143.80
    // output will be:
    // 143.80
    // 16.00%
    // 20.00%
    // 64.00%

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