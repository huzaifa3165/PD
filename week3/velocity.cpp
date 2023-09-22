#include <iostream>

using namespace std;

main(){
    float initial_velocity, final_velocity, acceleration, time;
    cout << "Enter Initial Velocity (m/s): ";
    cin >> initial_velocity;
    cout << "Enter Acceleration (m/s^2): ";
    cin >> acceleration;
    cout << "Enter Time (s): ";
    cin >> time;
    final_velocity = initial_velocity + acceleration * time;
    cout << "Final Velocity (m/s): " << final_velocity << endl;
    return 0;
}