
#ifndef BUTT_CURRENT_H
#define BUTT_CURRENT_H


#include "accountType.h"

class Current : public accountType {
private:
    int transaction_limit;
public:
    Current(const string &accID, const string &userID, const string &custID, const balanceType &bal,
            const dateType &creationDate, int limit);

    void set(const string &accID, const string &userID, const string &custID, const balanceType &bal,
             const dateType &creationDate, int limit);

    void get(string &accID, string &userID, string &custID, balanceType &bal, dateType &creationDate, int &limit) const;

    void display() const;

    const void search(const string &query);

};


#endif //BUTT_CURRENT_H
