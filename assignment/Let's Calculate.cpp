#include <iostream>
using namespace std;
int main()
{
    double maxValue, minValue = -99, sum, number = 0;
    while (number != -99)

    {
        cout << "Enter the number: ";
        cin >> number;

        if (number == -99)
        {
            break;
        }

        else if (minValue == -99 || number < minValue)
        {
            minValue = number;
        }
        else if (number > maxValue)
        {
            maxValue = number;
        }
        sum += number;
    }
    cout << "The sum is: " << sum << endl;
    cout << "Max Value is: " << maxValue << endl;
    cout << "Min value is: " << minValue << endl;
}

