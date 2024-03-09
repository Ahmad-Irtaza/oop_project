#include <string>
#include "balanceType.h"
#include "dateType.h"
using namespace std;
class accountType {
protected:
    string acc_ID;
    string user_ID;
    string cust_ID;
    balanceType balance;
    dateType dateof_creation;

public:

    accountType(string, string, string, balanceType, dateType);

    void display();

    void set(const string &, const string &, const string &, const balanceType &, const dateType &);

    void get(string &, string &, string &, balanceType &, dateType &) const;

    string search(string);

    string search(dateType);

};

#ifndef UNTITLED_ACCOUNTTYPE_H
#define UNTITLED_ACCOUNTTYPE_H

#endif //UNTITLED_ACCOUNTTYPE_H
