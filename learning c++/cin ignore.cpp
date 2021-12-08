#include <iostream>
 #include <iomanip>
 using namespace std;

 int main()
 {
 char chr;
 int number;
 cout <<"Enter The number = ";
 cin >> number;
 cin.ignore();
 cout << "Enter the character = ";
  chr = cin.get();
 cout << "The number is:  " << number << endl;
 cout << "The character is: " << chr << endl;
  return 0;
 }
