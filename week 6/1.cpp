#include <iostream>
using namespace std;

string decideActivity(string temp, string hum){
    if (temp == "warm" && hum == "dry"){
        return "Play tennis";
    }
    else if( temp == "warm" && hum == "humid"){
        return "Swim";
    }
    else if( temp ==  "cold" && hum == "dry"){
        return "Play basketball";
    }
    else if( temp == "cold" && hum == "humid"){
        return "Watch TV";
    }
    return "wrong input";
} 
main(){
string temperature, humidity;
cout << "Enter temperature (warm or cold): ";
cin >> temperature;
cout << "Enter humidity (dry or humid): ";
cin >> humidity;
cout << "Recommended activity: "<< decideActivity(temperature, humidity);
}