#include <iostream>
using namespace std;

int main()
{
    int period;
    cout << "Enter the number days you visited Hospital: ";
    cin >> period;
    int patients[period];
    for (int i = 0; i < period; i++)
    {
        cout << "Enter number of patients who visited on day " << i + 1 << ": ";
        cin >> patients[i];
    }
    int treated = 0;
    int untreated = 0;
    int doctors = 7;

    for (int i = 1; i <= period; i++)
    {
        if (i % 3 == 0)
        {
            if (untreated > treated)
            {
                doctors++;
            }
        }

        if (patients[i - 1] <= doctors)
        {
            treated += patients[i - 1];
        }
        else
        {
            treated += doctors;
            untreated += patients[i - 1] - doctors;
        }
    }

    cout << "Number of treated patients: " << treated << endl;
    cout << "Number of untreated patients: " << untreated << endl;

    return 0;
}