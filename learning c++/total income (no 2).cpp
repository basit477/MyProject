#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
 int soldA, soldB, soldC;
 double  totalIncome;
 const int priceA =15, priceB = 12, priceC = 9;
 cout << "Enter the number of tickets sold for A class: ";
 cin >> soldA;
 cout << "Enter the number of tickects sold for B class: ";
 cin >> soldB;
 cout << "Enter the number of tickects sold for C class: ";
 cin >> soldC;
 soldA *= priceA;
 soldB *= priceB;
 soldC *= priceC;
 totalIncome = soldA + soldB + soldC;
 cout << setprecision(2) << fixed << setw(6) << "The total amount of income generated is: " << totalIncome << endl;
 
 return 0;
 }
