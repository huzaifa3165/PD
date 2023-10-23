#include <iostream>
using namespace std;

main(){

int number, num1, num2, num3, num4;


cout << "Enter a 4-digit number: ";
cin >> number;
num1 = number%10;
number= number /10;
num2 = number%10;
number= number /10;
num3 = number%10;
number= number /10;
num4 = number%10;
number= number /10;

cout << "Sum of the individual digits: " <<  num1 + num2 + num3 + num4;

 




}