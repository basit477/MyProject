#include <iostream>
using namespace std;
int main()
{
    double maxValue = 0, minValue = 0, sum = 0, number = 0;
    while (number != -99)

    {
        cout << "Enter the number: ";
        cin >> number;

        if (number == -99)
        {	
            break;
        }

        else if (minValue == 0 || number < minValue)
        {
            minValue = number;
        }
        else if (maxValue == 0 ||number > maxValue)
        {
            maxValue = number;
        }
        sum += number;
    }
    cout << "The sum is: " << sum << endl;
    cout << "Max Value is: " << maxValue << endl;
    cout << "Min value is: " << minValue << endl;
}

