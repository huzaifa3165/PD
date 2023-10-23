#include <iostream>
using namespace std;

main() {
    int n;
    cout << "Enter the number of sides of the polygon: ";
    cin >> n;
    cout << "The sum of internal angles of a "<< n <<"-sided polygon is: " << (n - 2) * 180 << " degrees" << endl;
    return 0;
}