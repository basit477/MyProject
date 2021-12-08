#include <iostream>
 #include <iomanip>
 #include <cstdlib>
 #include <cmath>
 #include <ctime>
 using namespace std;

 int main()
 {
 	
 int y;
 int MAX_VALUE = 100;
 int MIN_VALUE = 200;
 y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
 cout << y;
 return 0;
 }
