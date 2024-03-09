
#include <iostream>
#include <string>
#include "addressType.h"
using namespace std;

class EmployeeInfo {

private:
    string designation;

    float salary;

public:
//    EmployeeType(string, string, addressType, string,  !!!!mistake
//    int, int, string, float);

    EmployeeInfo(string, string, addressType, string, int, int, string, float);

    void set_emp(string, string, addressType, string, int, int, string, float);

    void get_emp(string &, string &, addressType &, string &, int &, int &, float &, string &) const;

    void display();

    void search(string);
};


#ifndef UNTITLED_EMPLOYEEINFO_H
#define UNTITLED_EMPLOYEEINFO_H

#endif //UNTITLED_EMPLOYEEINFO_H
