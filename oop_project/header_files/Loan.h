#include "balanceType.h"
using namespace std;

class Loan
{
private:
    string emp_ID;
    string user_ID;
    balanceType amount;
    string cust_ID;
public:
    Loan(string,string,balanceType,string);
    void set(string,string,balanceType,string);
    void get(string&,string&,balanceType&,string&);
    void display();
};

#ifndef UNTITLED_LOAN_H
#define UNTITLED_LOAN_H

#endif //UNTITLED_LOAN_H
