#include <iostream>
using namespace std;

// Function to calculate the volume of a pyramid
double pyramidVolume(double length, double width, double height, string outputUnit)
{
    // Constants for conversion factors
    const double mm_to_m = 0.001;
    const double cm_to_m = 0.01;
    const double km_to_m = 1000.0;

    // Calculate the volume in cubic meters
    double volume = (length * width * height) / 3.0;

    // Convert the volume to the desired output unit
    if (outputUnit == "millimeters")
    {
        volume *= 1.0 / (mm_to_m * mm_to_m * mm_to_m);
        return volume;
    }
    else if (outputUnit == "centimeters")
    {
        volume *= 1.0 / (cm_to_m * cm_to_m * cm_to_m);
        return volume;
    }
    else if (outputUnit == "kilometers")
    {
        volume *= 1.0 / (km_to_m * km_to_m * km_to_m);
        return volume;
    }
    else
    {
        return volume;
    }
}

int main()
{
    double length, width, height;
    string outputUnit;

    // Input parameters
    cout << "Enter length (meters): ";
    cin >> length;
    cout << "Enter width (meters): ";
    cin >> width;
    cout << "Enter height (meters): ";
    cin >> height;
    cout << "Enter desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> outputUnit;

    // Calculate the pyramid volume
    double result = pyramidVolume(length, width, height, outputUnit);

    // Display the result
    cout << fixed;
    cout.precision(3);
    cout << "The volume is: " << result << " cubic " << outputUnit << endl;

    return 0;
}
