#include <iostream>
using namespace std;
int main()
{
    double mathMarks, phyMarks, chemMarks, total, mathPhyTotal;
    cout << "Enter your marks in Math: ";
    cin >> mathMarks;
    cout << "Enter your marks in Physics: ";
    cin >> phyMarks;
    cout << "Enter your marks in Chemistry: ";
    cin >> chemMarks;
    total = mathMarks + phyMarks + chemMarks;
    mathPhyTotal = mathMarks + phyMarks;
    if (total >= 190 || mathPhyTotal >= 140)

    {
        if (mathMarks < 65)
        {
            cout << "Your marks in Math are below the required criteria." << endl;
        }
        else if (phyMarks < 55)
        {
            cout << "Your marks in Physics are below the required criteria." << endl;
        }
        else if (chemMarks < 50)
        {
            cout << "Your marks in Chemistry are below the required criteria." << endl;
        }
        else
        {
            cout << "Congratulation. You are eligible for the admission." << endl;
        }
    }
    else
    {
        cout << "Your total marks are below the required criteria." << endl;
        cout << "You are not eligible for the admission." << endl;
    }
}

