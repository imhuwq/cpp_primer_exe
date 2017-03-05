#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    if (line1 > line2) {
        cout << line1 << endl;
    } else if (line2 > line1) {
        cout << line2 << endl;
    };

    if (line1.size() > line2.size()) {
        cout << line1 << endl;
    } else if (line2.size() > line1.size()) {
        cout << line2 << endl;
    }
}