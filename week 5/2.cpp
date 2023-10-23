#include <iostream>
using namespace std;

int main()
{
    // Constants for tax rates
    const double motorcycleTaxRate = 6.0;
    const double electricTaxRate = 8.0;
    const double sedanTaxRate = 10.0;
    const double vanTaxRate = 12.0;
    const double truckTaxRate = 15.0;

    // Input: Vehicle price and type code
    double vehiclePrice;
    char vehicleTypeCode;

    cout << "Enter the vehicle price: $";
    cin >> vehiclePrice;
    cout << "Enter the vehicle type code (M for Motorcycle, E for Electric, S for Sedan, V for Van, T for Truck): ";
    cin >> vehicleTypeCode;

    double taxRate = 0.0;
    switch (vehicleTypeCode)
    {
    case 'M':
    case 'm':
        taxRate = motorcycleTaxRate;
        break;
    case 'E':
    case 'e':
        taxRate = electricTaxRate;
        break;
    case 'S':
    case 's':
        taxRate = sedanTaxRate;
        break;
    case 'V':
    case 'v':
        taxRate = vanTaxRate;
        break;
    case 'T':
    case 't':
        taxRate = truckTaxRate;
        break;
    default:
        cout << "Invalid vehicle type code. Please enter M, E, S, V, or T." << endl;
        return 1;
    }

    // Calculate tax amount and final price
    double taxAmount = (vehiclePrice * taxRate) / 100;
    double finalPrice = vehiclePrice + taxAmount;

    // Display the results
    cout << fixed;
    cout.precision(2);
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Final Price: $" << finalPrice << endl;

    return 0;
}
