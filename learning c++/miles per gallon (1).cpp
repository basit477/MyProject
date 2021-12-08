#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
 int tankSize, totalDistance;
 double milesPerGallon;
 cout << "Enter the number of gallons your car can hold: ";
 cin >> tankSize;
 cout << "Enter the Number of miles driven on full tank: ";
 cin >> totalDistance;
 milesPerGallon = tankSize/totalDistance;
 cout << "The number of miles per gallon is: " << milesPerGallon << endl;
 return 0;
 }
