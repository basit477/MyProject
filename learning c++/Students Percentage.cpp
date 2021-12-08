#include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;

 int main()
 {
 int totalMales, totalFemales;
 double malePercentage, femalePercentage, totalStudents;
 cout << "Enter the number of males: ";
 cin >> totalMales;
 cout << "Enter the number of females: ";
 cin >> totalFemales;
 
 totalStudents = totalMales + totalFemales;
 cout << "Total Students = " << totalStudents << endl;
 
 malePercentage = (totalMales/totalStudents) * 100;
 femalePercentage = (totalFemales/totalStudents) * 100;
 cout << "Percentage of Males in the class is: " << malePercentage << endl;
  cout << "Percentage of Females in the class is: " << femalePercentage << endl;

 return 0;
 }
