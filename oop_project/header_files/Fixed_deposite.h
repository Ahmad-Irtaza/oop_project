

#include "dateType.h"
#include "balanceType.h"
#include "accountType.h"
using namespace std;

class Fixed_deposit:protected accountType
{
    float interest_rate;
    dateType dateof_termination;

public:
    Fixed_deposit(string,string,string,balanceType,dateType,float,dateType);
    void set(string,string,string,balanceType,dateType,float,dateType);
    void get(string&,string&,string&,balanceType&,dateType&,float&,dateType&)const;
    void display();
    string search(string);
};













#ifndef UNTITLED_FIXED_DEPOSITE_H
#define UNTITLED_FIXED_DEPOSITE_H

#endif //UNTITLED_FIXED_DEPOSITE_H
