#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int daysInMonth(int month, int year) {
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeapYear(year)) {
        days[1] = 29;
    }

    return days[month - 1];
}

int calculateDaysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    int totalDays = 0;

    if (year1 > year2 || (year1 == year2 && month1 > month2)) {
        swap(year1, year2);
        swap(month1, month2);
        swap(day1, day2);
    }

    for (int i = month1; i <= 12; ++i) {
        totalDays += daysInMonth(i, year1);
    }
    totalDays -= day1;

    for (int i = 1; i < month2; ++i) {
        totalDays += daysInMonth(i, year2);
    }
    totalDays += day2;

    for (int y = year1 + 1; y < year2; ++y) {
        totalDays += 365 + isLeapYear(y);
    }

    return totalDays;
}

int main() {
    int day1, month1, year1, day2, month2, year2;

    cout << "Enter the first date (day month year): ";
    cin >> day1 >> month1 >> year1;

    cout << "Enter the second date (day month year): ";
    cin >> day2 >> month2 >> year2;

    int daysBetween = calculateDaysBetweenDates(day1, month1, year1, day2, month2, year2);

    cout << "The number of days between the two dates is: " << daysBetween << endl;

    return 0;
}
