#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
 string month1, month2, month3;
 double rainAmount1, rainAmount2, rainAmount3, rainAverage;
 
 cout << "Enter the name of month 1: ";
 cin >> month1;
 
 cout << "Enter the name of month 2: ";
 cin >> month2;
 
 cout << "Enter the name of month 3: ";
 cin >> month3;
 
 cout << "Enter the amount of rain for month 1: ";
 cin >> rainAmount1;
 
 cout << "Enter the amount of rain for month 2: ";
 cin >> rainAmount2;
 
 cout << "Enter the amount of rain for month 3: ";
 cin >> rainAmount3;
 
 rainAverage = (rainAmount1 + rainAmount2 + rainAmount3) / 3;
cout  << "The average rain for " << month1 << ", " << month2 << " and " << month3 << " is " << rainAverage << " inches" << endl;
 return 0;
 }
