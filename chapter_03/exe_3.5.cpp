#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string word;
    string line1, line2;
    while (cin >> word) {
        line1 += word;
        line2 += word + " ";
    }

    cout << line1 << endl;
    cout << line2 << endl;
}