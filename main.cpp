#include <iostream>

using namespace std;

int main() {
    double sales[3];
    double salaries[3];
    double best_sales = 0, best_salary = 0;
    int best_manager = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Enter sales amount for manager " << i + 1 << ": ";
        cin >> sales[i];
    }

    for (int i = 0; i < 3; i++) {
        double interest = 0;
        if (sales[i] <= 500) {
            interest = 0.03;
        }
        else if (sales[i] <= 1000) {
            interest = 0.05;
        }
        else {
            interest = 0.08;
        }
        salaries[i] = 200 + sales[i] * interest;

        if (sales[i] > best_sales) {
            best_sales = sales[i];
            best_salary = salaries[i];
            best_manager = i;
        }
    }

    cout << endl << "Manager Salaries:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Manager " << i + 1 << ": $" << salaries[i] << endl;
    }

    cout << endl << "Best Manager:" << endl;
    cout << "ID: " << best_manager + 1 << endl;
    cout << "Name: (Manager's name)" << endl;
    cout << "Sales: $" << best_sales << endl;
    cout << "Salary: $" << best_salary << endl;
    cout << "Bonus: $200" << endl;

    return 0;
}
