#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line = "Hello World";
    for (auto &c : line) {
        c = 'X';
    }
    cout << line << endl;

}