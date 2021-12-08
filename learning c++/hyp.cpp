#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
 double base, hyp, height;
 cout << "enter the base: ";
 cin >> base;
 cout << "Enter the height: ";
 cin >> height;
 hyp = sqrt(pow(base, 2.0) + pow(height, 2.0));
 cout << setprecision(3) <<  "The Hyp of the triangle is: " << hyp << endl;
 return 0;
 }
