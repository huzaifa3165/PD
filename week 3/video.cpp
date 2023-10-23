#include <iostream>
using namespace std;

main()
{
    int minutes, fps;
    cout << "Number of Minutes: ";
    cin >> minutes;
    cout << "Frames per Second: ";
    cin >> fps;
    cout << "Total Number of Frames: " << minutes * 60 * fps << endl;
}