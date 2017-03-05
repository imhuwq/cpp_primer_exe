#include <iostream>
#include <string>

using namespace std;

struct Person {
    Person(const string &n, const string &a) : Name(n), Address(a) {}

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
    Person p = Person("John", "GZ");
    print(cout, p);
    cout << endl;
}