#include <memory>
#include <string>
#include <iostream>

using namespace std;

int main() {
    typedef const char *c_str;
    c_str a = "one";
    c_str b = "two";
    unique_ptr < c_str[] > ca(new c_str[2]);
    ca[0] = a;
    ca[1] = b;
    cout << ca[1] << endl;
}