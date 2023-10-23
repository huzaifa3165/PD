#include <iostream>
using namespace std;
main(){
string name;
float weight;
cout << "Enter the Name of the Person: ";
cin >> name;
cout << "Enter the target weight loss in kilograms: ";
cin >> weight;
cout << name << " will need " << weight * 15 << " days to lose " << weight << " kg of weight by following the doctor's suggestions";
} 