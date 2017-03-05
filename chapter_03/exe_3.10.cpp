#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line = "Hello ! You!";
    string result;
    for (auto c : line) {
        if (!ispunct(c)) {
            result += c;
        };
    };

    cout << result << endl;
}