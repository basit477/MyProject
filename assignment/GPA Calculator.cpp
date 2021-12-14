#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

    int totalCourses, creditHour, totalCreditHours, courseNumber = 1;
    double sum, qualityPoints, totalQualityPoints, gradePoints;
    string grade;

    cout << "Enter the number of total Courses you want to add: ";
    cin >> totalCourses;

    while (courseNumber <= totalCourses)
    {
        cout << "Enter Credit hours for course Num " << courseNumber << " : " << endl;
        cin >> creditHour;
        cout << "Enter Grade for course Num " << courseNumber << " : " << endl;
        cin >> grade;

        if (grade == "A" || grade == "a")
        {
            gradePoints = 4.00;
        }

        else if (grade == "A-" || grade == "a-")
        {
            gradePoints = 3.75;
        }

        else if (grade == "B+" || grade == "b+")
        {
            gradePoints = 3.50;
        }

        else if (grade == "B" || grade == "b")
        {
            gradePoints = 3.00;
        }

        else if (grade == "C+" || grade == "c+")
        {
            gradePoints = 2.50;
        }

        else if (grade == "C" || grade == "c")
        {
            gradePoints = 2.00;
        }

        else if (grade == "D+" || grade == "d+")
        {
            gradePoints = 1.50;
        }

        else if (grade == "D" || grade == "d")
        {
            gradePoints = 1.00;
        }

        else if (grade == "F" || grade == "f")
        {
            gradePoints = 0.00;
        }
        qualityPoints = creditHour * gradePoints;
        totalCreditHours += creditHour;
        totalQualityPoints += qualityPoints;

        courseNumber++;
    }

    sum = totalQualityPoints / totalCreditHours;
    cout << setprecision(2) << fixed << "Your Final GPA is : " << sum << endl;
}

