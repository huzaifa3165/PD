#include <iostream>

using namespace std;

main(){
int sqMeters, width, height, canDo;
cout << "Number of square meters you can paint: ";
cin >> sqMeters;
cout << "Width of the single wall (in meters): ";
cin >> width;
cout << "Height of the single wall (in meters): ";
cin >> height;
canDo = sqMeters/(width*height);
cout << "Number of walls you can paint: " <<  canDo;

}