#include <iostream>
 #include <iomanip>
 using namespace std;

 int main()
 {
 string name;
 cout << "input name = ";
 getline (cin, name);
 cout << "Press enter to continue" << endl;
 cin.get();
 cout << name;
  return 0;
 }
