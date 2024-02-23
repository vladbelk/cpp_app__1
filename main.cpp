#include <iostream>
using namespace std;

int main() {
    const double MIN_GPA_FOR_ADMISSION = 4.0;

    double gpaSum = 0.0;
    for (int i = 1; i <= 5; ++i) {
        double rating;
        cout << "Enter rating " << i << ": ";
        cin >> rating;

        if (rating < 0.0 || rating > 5.0) {
            cout << "Invalid rating. Please enter a value between 0 and 4." << endl;
            return 1;
        }

        gpaSum += rating;
    }

    double averageGpa = gpaSum / 5.0;

    cout << "Average GPA: " << averageGpa << endl;

    if (averageGpa >= MIN_GPA_FOR_ADMISSION) {
        cout << "Congratulations! You are admitted to the exam." << endl;
    }
    else {
        cout << "Sorry, your GPA does not meet the admission criteria." << endl;
    }

    return 0;
}
