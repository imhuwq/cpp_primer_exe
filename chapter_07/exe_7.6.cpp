#include <iostream>
#include <string>

using namespace std;

struct Person {
    string Name;
    string Address;

    string GetName() {
        return Name;
    }

    string GetAddress() {
        return Address;
    }
};

istream &read(istream &is, Person &ps) {
    is >> ps.Name >> ps.Address;
}

ostream &print(ostream &os, Person &ps) {
    os << ps.Name << " lives in " << ps.Address;
}

int main() {
    Person p;
    read(cin, p);
    print(cout, p);
}