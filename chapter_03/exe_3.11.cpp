#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    const string line = "hello world!";
    for (auto &c : line) {
        c = toupper(c);
        cout << c << endl;
    }
}