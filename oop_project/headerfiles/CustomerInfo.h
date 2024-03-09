#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

#include <iostream>
#include <string>
#include "addressType.h"
#include "infoType.h"

addressType ad4;
using namespace std;

class CustomerInfo : public infoType
{
private:
    string fixedDeposit_id;
    string current_id;
    string loan_id;

public:
    CustomerInfo(string = "", addressType = ad4, string = "", int = 0, int = 0, string = "", string = "", string = "", string = "");

    void set_cust(string, addressType, string, int, int, string, string, string, string);

    void get_cust(string &, addressType &, string &, int &, int &, string &, string &, string &, string &);

    void display();
};

#endif // CUSTOMERINFO_H
