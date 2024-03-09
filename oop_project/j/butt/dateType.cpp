
#include <iostream>
#include "dateType.h"

using namespace std;

dateType::dateType(int d, int m, int y) {
    setDate(d, m, y);
}

void dateType::setDate(int d, int m, int y) {
    if (isValidDate(d, m, y)) {
        day = d;
        month = m;
        year = y;
    } else {
        day = 0;
        month = 0;
        year = 0000;
        cout << "Invalid date provided. Set to default date (01/01/2023)." << endl;
    }
}

void dateType::enterDate() {
    int d, m, y;
    cout << "Enter the day: ";
    cin >> d;
    cout << "Enter the month: ";
    cin >> m;
    cout << "Enter the year: ";
    cin >> y;
    setDate(d, m, y);
}

void dateType::getDate() const {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

void dateType::display() const {
    string monthName = getMonthName(month);
    cout << "Date: " << day << " " << monthName << " " << year << endl;
}

dateType &dateType::operator=(const dateType &other) {
    if (this != &other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }
    return *this;
}

const void dateType::search(const string &query) {
    if (query == "day") {
        cout << "Search result: Day is " << day << endl;
    } else if (query == "month") {
        cout << "Search result: Month is " << month << endl;
    } else if (query == "year") {
        cout << "Search result: Year is " << year << endl;
    } else {
        cout << "Search result: Invalid query" << endl;
    }
}

const void dateType::search(const dateType &query) {
    if (day == query.day && month == query.month && year == query.year) {
        cout << "Search result: Date matches." << endl;
    } else {
        cout << "Search result: Date does not match." << endl;
    }
}

bool dateType::isValidDate(int d, int m, int y) const {
    if (d < 1 || d > 31) {
        return false;
    }
    if (m < 1 || m > 12) {
        return false;
    }
    if (y < 1900 || y > 2100) {
        return false;
    }
    return true;
}

string dateType::getMonthName(int month) const {
    switch (month) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "Invalid";
    }
}
