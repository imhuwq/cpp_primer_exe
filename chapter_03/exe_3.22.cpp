#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> texts = {"Hello world"};

    for (auto it = texts.begin(); it != texts.end() && !it->empty(); ++it) {
        for (auto &c : *it) {
            c = toupper(c);
        }
        cout << *it << endl;
    };
}