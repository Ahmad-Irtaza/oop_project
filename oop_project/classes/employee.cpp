#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string address;
    int cnic;
    int phone_number;
//ak log in ki bnai ha user_acc ki
public:
//

    Employee(string n, string a, int c, int p) {
        name = n;
        address = a;
        cnic = c;
        phone_number = p;
    }

    void add() 
    {
        cout << "Employee added: " << name << endl;
    }
//idr abi delete bnani ha user_acc ki
    /*void remove() {
        cout << "Employee removed: " << name << endl;
    }*/

    void verify(string n) {
        if (n == name) {
            cout << "Employee " << name << " verified." << endl;
        } else {
            cout << "Employee not found." << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Phone Number: " << phone_number << endl;
    }
};
