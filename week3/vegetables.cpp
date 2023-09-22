#include <iostream>
using namespace std;

main(){
float vprice, fprice;
int vtotal, ftotal;
cout << "Enter vegetable price per kilogram (in coins): ";
cin >> vprice;
cout << "Enter fruit price per kilogram (in coins): ";
cin >> fprice ;
cout  << "Enter total kilograms of vegetables: " ;
cin >> vtotal;
cout << "Enter total kilograms of fruits: ";
cin >> ftotal ;

cout  << "Total earnings in Rupees (Rps): "<< ( (vprice *vtotal) + (fprice*ftotal))/1.94;

}