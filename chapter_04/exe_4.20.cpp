#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello";

    auto sbeg = s.begin();

//    auto c = ++*sbeg;  I
    auto c2 = *++sbeg; // e

    cout << c2 << endl;
}