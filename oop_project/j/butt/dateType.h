
#ifndef BUTT_DATETYPE_H
#define BUTT_DATETYPE_H
#include <iostream>
 using namespace std;
class dateType {
private:
    int day;
    int month;
    int year;

    bool isValidDate(int d, int m, int y) const;

public:
    dateType(int d = 1, int m = 1, int y = 2023);

    void setDate(int d, int m, int y);

    void enterDate();

    void getDate() const;

    void display() const;

    dateType &operator=(const dateType &other);

    const void search(const std::string &query);

    const void search(const dateType &query);

    std::string getMonthName(int month) const;

};


#endif //BUTT_DATETYPE_H
