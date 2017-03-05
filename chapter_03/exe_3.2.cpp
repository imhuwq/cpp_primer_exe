#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line;
    getline(cin, line);
    cout << line << endl;

    string word;
    while (cin >> word) {
        cout << word << " ";
    }
    cout << endl;
}
