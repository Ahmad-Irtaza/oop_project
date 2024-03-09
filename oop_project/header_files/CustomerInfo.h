#include <iostream>
#include <string>
#include "addressType.h"

using namespace std;


class CustomerInfo {
private:
    string fixedDeposit_ID;
    string current_ID;
    string loan_ID;

public:
//    customerType(string, string, address Type, string, int, int, string, string,
//    string)   !!!!! mistake
    CustomerInfo(string, string, addressType, string, int, int, string, string, string);

    void set_cust(string, string, addressType, string, int, int, string, string, string);

    void get_cust(string &, string &, addressType &, string &, int &, int &, string &, string &, string &) const;

    void display();

    void search(string);
};

#ifndef UNTITLED_CUSTOMERINFO_H
#define UNTITLED_CUSTOMERINFO_H

#endif //UNTITLED_CUSTOMERINFO_H
