#include <iostream>
#include <iomanip> 

using namespace std;
int main()
 {
 double day1, day2, day3, total;
 
 cout << "Enter the Sales Figures for Day 1 = ";
 cin >> day1;
 
  cout << "Enter the Sales Figures for Day 2 = ";
 cin >> day2;
 
  cout << "Enter the Sales Figures for Day 3 = ";
 cin >> day3;
 
 total = day1 + day2 + day3;
 
 cout << "Sales Figure" << endl;
 cout << setprecision(2) << fixed; 
 cout << "Day 1: " << setw(8) << day1 << endl;
 cout << "Day 2: " << setw(8) << day2 << endl;
 cout << "Day 3: " << setw(8) << day3 << endl;
 cout << "Total: " << setw(8) << total << endl;
  
 return 0;
 } 
