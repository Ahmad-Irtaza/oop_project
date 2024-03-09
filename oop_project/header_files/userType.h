//#pragma once  //check this one

#include <iostream>
#include <string>

using namespace std;

class userType {
private:
    string emp_ID;

    string password;

public:
    userType(string, string);

    void set(string, string);

    void get(string &, string &) const;

    bool verify_password(string);

    void createLoan();

    void createAccount();

    void deleteAccount();

    void createEmployee();

    void deleteEmployee();

    void addCustomer();

    void deleteCustomer();
};


#ifndef UNTITLED_USERTYPE_H
#define UNTITLED_USERTYPE_H

#endif //UNTITLED_USERTYPE_H
