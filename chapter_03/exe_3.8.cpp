#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line = "Hello World";
    string line2 = "Hello World ";

    decltype(line.size()) index = 0;

    while (index < line.size()) {
        line[index] = 'X';
        ++index;
    };
    cout << line << endl;

    for (decltype(line2.size()) i = 0; i < line2.size(); ++i) {
        line2[i] = 'Y';
    };
    cout << line2 << endl;

}