#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of courses: ";
    cin >> N;

    double gradePoint, creditHours;
    double totalGradePoints = 0, totalCreditHours = 0;

    for (int i = 1; i <= N; i++) {
        cout << "\nCourse " << i << ":" << endl;
        cout << "Enter grade points: ";
        cin >> gradePoint;
        cout << "Enter credit hours: ";
        cin >> creditHours;

        totalGradePoints += (gradePoint * creditHours);
        totalCreditHours += creditHours;
    }

    if (totalCreditHours == 0) {
        cout << "\nInvalid input: total credit hours cannot be zero." << endl;
    } else {
        double SGPA = totalGradePoints / totalCreditHours;
        cout << "\nYour Semester GPA (SGPA) is: " << SGPA << endl;
    }

    return 0;
}

