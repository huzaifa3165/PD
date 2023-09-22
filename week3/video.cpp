#include <iostream>
using namespace std;
// You are designing a program for a video processing application. The program needs to calculate
// the total number of frames that will be shown in a given the number of minutes for a certain
// frame per second (FPS). Take the number of minutes and frames per second as input from the
// user and calculate the total number of frames.
main(){
    int minutes, fps;
    cout << "Number of Minutes: ";
    cin >> minutes;
    cout << "Frames per Second: ";
    cin >> fps;
    cout << "Total Number of Frames: " << minutes * 60 * fps << endl;
    return 0;
}