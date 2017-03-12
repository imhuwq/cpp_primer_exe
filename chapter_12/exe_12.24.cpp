#include <iostream>
#include <memory>

using namespace std;

typedef char c_str[10];

int main() {
    char* word = new c_str;
    while (cin >> word) {
        cout << word << endl;
    }
    c_str line = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
}