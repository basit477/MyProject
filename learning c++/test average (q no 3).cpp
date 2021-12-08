#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
 double test1, test2, test3, test4, test5, testAverage;
 cout << "Enter the numbers for test 1: ";
 cin >> test1;
 
 cout << "Enter the numbers for test 2: ";
 cin >> test2;
 
 cout << "Enter the numbers for test 3: ";
 cin >> test3;
 
 cout << "Enter the numbers for test 4: ";
 cin >> test4;
 
 cout << "Enter the numbers for test 5: ";
 cin >> test5;
 
 testAverage = (test1 + test2 + test3 + test4 + test5) / 5;
cout << setprecision(1) << fixed << "The total amount of income generated is: " << testAverage << endl;
 return 0;
 }
