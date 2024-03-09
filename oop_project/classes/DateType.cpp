#include <iostream>
using namespace std;

class DateType {
private:
    int day;
    int month;
    int year;

public:

    DateType(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display() 
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
