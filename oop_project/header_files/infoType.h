#include <iostream>
#include <string>
#include "addressType.h"

using namespace std;

class infoType {

protected:
    string Name;

    addressType Address;

    string EmailAddress;

    int Phone_num;

    int Cnic;

    string ID;

public:
    infoType(string, addressType, string, int, int);

    //void display();  !!!!double declaration mistake

    void setinfo(const string &, const addressType &, const string &, const int &, const int &);

    void getinfo(string &, addressType &, string &, int &, int &);

    void display();

    string search(string);
};


#ifndef UNTITLED_INFOTYPE_H
#define UNTITLED_INFOTYPE_H

#endif //UNTITLED_INFOTYPE_H
