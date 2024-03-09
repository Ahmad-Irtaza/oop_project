
#include <iostream>
#include <string>

using namespace std;

class addressType {
private:
    string Street;

    string City;

    string Area;

    int PostalCode;

    string Country;

public:

    addressType(string, string, string, int, string);

    void set(string, string, string, int, string);

    void get(string &, string &, int &,string &);
};


#ifndef UNTITLED_ADDRESSTYPE_H
#define UNTITLED_ADDRESSTYPE_H

#endif //UNTITLED_ADDRESSTYPE_H
