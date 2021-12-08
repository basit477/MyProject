#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
 	// All ingredients measurment is in cups
 float sugar, butter, flour, totalCookies, intialCookies;
 intialCookies = 48;
 sugar = 1.5/intialCookies;
 butter = 1/intialCookies;
 flour = 2.75/intialCookies;
 cout << "enter the amount of cookies: ";
 cin >> totalCookies;
 cout << "Cups of Sugar required for " << totalCookies << " is " << totalCookies * sugar << endl;
  cout << "Cups of butter required for " << totalCookies << " is " << totalCookies * butter << endl;
  cout << "Cups of flour required for " << totalCookies << " is " << totalCookies * flour << endl;
  return 0;
 }
