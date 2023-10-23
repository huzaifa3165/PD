#include <iostream>
using namespace std;

main(){
float imposter, player;
cout<< "Enter Imposter Count: ";
cin>> imposter;
cout << "Enter Player Count: ";
cin >> player;
cout << "Chance of being an imposter: " << 100* (imposter/player)<<"%";


}