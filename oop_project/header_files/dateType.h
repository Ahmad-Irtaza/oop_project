
#include <iostream>
using namespace std;

class dateType {
private:
    int day;
    int month;
    int year;

public:

    dateType(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
#ifndef UNTITLED_DATETYPE_H
#define UNTITLED_DATETYPE_H

#endif //UNTITLED_DATETYPE_H
