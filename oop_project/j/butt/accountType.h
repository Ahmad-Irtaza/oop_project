
#ifndef BUTT_ACCOUNTTYPE_H
#define BUTT_ACCOUNTTYPE_H

#include <string>
#include "balanceType.h"
#include "dateType.h"

using namespace std;

class accountType {
protected:

    string acc_ID;
public:
    accountType(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                const dateType &creationDate);

protected:
    string user_ID;
    string cust_ID;
    balanceType balance;
    dateType dateof_creation;
public:

    virtual void display() const;

    void set(const string &accID, const string &userID, const string &custID, const balanceType &bal,
             const dateType &creationDate);

    void get(string &accID, string &userID, string &custID, balanceType &bal, dateType &creationDate) const;

    const void search(const dateType &query);

};


#endif //BUTT_ACCOUNTTYPE_H
