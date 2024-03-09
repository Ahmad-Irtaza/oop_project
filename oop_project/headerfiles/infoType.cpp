#include "addressType.h"
#include "infoType.h"
#include <iostream>
#include <string>
using namespace std;

infoType::infoType(string n, addressType a, string e, int p, int c, string i) {
  setinfo(n, a, e, p, c, i);
}

void infoType::setinfo(const string &n, const addressType &a, const string &e,
                       const int &p, const int &c, const string &i) {
  Name = n;
  Address = a;
  EmailAddress = e;
  Phone_num = p;
  Cnic = c;
  id = i;
}

void infoType::getinfo(string &n, addressType &a, string &e, int &p, int &c,
                       string &i) const {
  n = name;
  address.get(a.street, a.city, a.area, a.postal_code, a.country);
  e = email_address;
  p = phone_num;
  c = cnic;
  i = id;
}

void infoType::display() {
  string s, c, area, country;
  int pc;
  Address.get(s, c, area, pc, country);

  cout << "Name: " << name << endl;
  cout << "Address: " << s << "\n " << c << "\n " << area << "\n " << pc << "\n"
       << country << endl;
  cout << "Email Address: " << email_address << endl;
  cout << "Phone Number: " << phone_num << endl;
  cout << "CNIC: " << cnic << endl;
  cout << "ID: " << id << endl;
}
