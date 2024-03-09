
#ifndef BUTT_BALANCETYPE_H
#define BUTT_BALANCETYPE_H


class balanceType {
private:
    double balance;

public:
    balanceType(double initialBalance = 0.0);

    double getBalance() const;

    void setBalance(double balance);

    void display() const;

    void getDate() const;

};


#endif //BUTT_BALANCETYPE_H
