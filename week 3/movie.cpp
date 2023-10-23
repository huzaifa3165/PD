#include <iostream>
using namespace std;

main(){

string name;
float aprice, childprice, asold, childsold, donation;

cout << "Enter the movie name: ";
cin >> name;
cout << "Enter the adult ticket price: $";
cin >> aprice;
cout << "Enter the child ticket price: $";
cin >> childprice;
cout << "Enter the number of adult tickets sold: ";
cin >> asold;
cout << "Enter the number of child tickets sold: ";
cin >> childsold;
cout << "Enter the percentage of the amount to be donated to charity: ";
cin >> donation;
float sales = (aprice*asold)+(childprice*childsold);
float charity = ((aprice*asold)+(childprice*childsold) ) * (donation/100);
cout << endl;
cout<< "Movie: " << name<< endl;
cout << "Total amount generated from ticket sales: $" << sales<< endl ;
cout << "Donation to charity (10%): $" << charity << endl;
cout << "Remaining amount after donation: $" << sales - charity ;

}