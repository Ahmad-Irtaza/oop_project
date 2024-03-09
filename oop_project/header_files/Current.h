

#include<string>
#include "balanceType.h"
#include "dateType.h"
#include "accountType.h"
using namespace std;

class Current : protected accountType {
    int transaction_limit;

public:
    Current(string, string, string, balanceType, dateType, int);

    void set(string, string, string, balanceType, dateType, int);

    void get(string &, string &, string &, balanceType &, dateType &, int &) const;

    void display();

    string search(string);
};

#ifndef UNTITLED_CURRENT_H
#define UNTITLED_CURRENT_H

#endif //UNTITLED_CURRENT_H
