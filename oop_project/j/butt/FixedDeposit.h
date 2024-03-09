
#ifndef BUTT_FIXEDDEPOSIT_H
#define BUTT_FIXEDDEPOSIT_H


#include "accountType.h"

class FixedDeposit : public accountType {
private:
    float interest_rate;
    dateType dateof_termination;
public:
    FixedDeposit(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                 const dateType &creationDate, float rate, const dateType &terminationDate);

    void set(const string &accID, const string &userID, const string &custID, const balanceType &bal,
             const dateType &creationDate, float rate, const dateType &terminationDate);

    void get(string &accID, string &userID, string &custID, balanceType &bal, dateType &creationDate, float &rate,
             dateType &terminationDate) const;

    void display() const;

    const void search(const string &query);

};


#endif //BUTT_FIXEDDEPOSIT_H
