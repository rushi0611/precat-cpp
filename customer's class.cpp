#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
   string name;
   string address;
   string phone;

public:

    void acceptData() {
        cout << "Enter customer name: ";
        getline(cin >>ws, name);

        cout << "Enter customer address: ";
        getline(cin >> ws, address);

        cout << "Enter customer phone number: ";
        getline (cin>>ws, phone);
    }

    void displayData() {
        cout << "Customer details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone number: " << phone << endl;
    }
};

int main() {
    Customer customer;

    cout << "Enter customer details:" << endl;
    customer.acceptData();

    cout << endl;

    customer.displayData();

    return 0;
}

