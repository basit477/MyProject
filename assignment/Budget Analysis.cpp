#include <iostream>
using namespace std;
int main()
{

    double budgetAmount, expense, total = 0;
    char repeatLoop;
    cout << "Enter the amount of your budget:";
    cin >> budgetAmount;
    repeatLoop = 'Y';

    while ((repeatLoop != 'N') && (repeatLoop != 'n'))
    {
        cout << "Enter the expense amount: ";
        cin >> expense;
        total += expense;
        cout << "Do you want to add another item?" << endl;
        cout << "Press Y to continue or press N to stop." << endl;
        cin >> repeatLoop;
    }
    if (total < budgetAmount)
        cout << "You are " << budgetAmount - total << " under the budget" << endl;
    else if (total > budgetAmount)
        cout << "You are " << total - budgetAmount << " over the budget" << endl;
    else
        cout << "Congratulations. You are exactly on your budget." << endl;

    cout << "Your total Expense is: " << total << endl;
}

