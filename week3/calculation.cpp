#include <iostream>
using namespace std;

main(){

int i = 15;
int input;
int addition=0, multiplication=1, subtraction=0;


cout<<"Number 1: ";
cin >> input;
addition=addition + input;

cout<<"Number 2: ";
cin >> input;
addition=addition + input;

cout<<"Number 3: ";
cin >> input;
addition=addition + input;

cout<<"Number 4: ";
cin >> input;
addition=addition + input;

cout<<"Number 5: ";
cin >> input;
addition=addition + input;

cout<<"Number 6: ";
cin >> input;
multiplication=multiplication*input;
cout<<"Number 7: ";
cin >> input;
multiplication=multiplication*input;
cout<<"Number 8: ";
cin >> input;
multiplication=multiplication*input;
cout<<"Number 9: ";
cin >> input;
multiplication=multiplication*input;
cout<<"Number 10: ";
cin >> input;
multiplication=multiplication*input;

cout<<"Number 11: ";
cin >> input;
subtraction = input ;

cout<<"Number 12: ";
cin >> input;
subtraction = subtraction - input;


cout<<"Number 13: ";
cin >> input;
subtraction = subtraction - input;


cout<<"Number 14: ";
cin >> input;
subtraction = subtraction - input;


cout<<"Number 15: ";
cin >> input;
subtraction = subtraction - input;





cout << "The final result is: " << addition+multiplication-subtraction;

}