#include <iostream>
#include <string>

using namespace std;

bool ContainsUpper(const string str) {
    for (auto c:str) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void ToUpper(string str) {
    for (auto &c:str) {
        c = toupper(c);
    }
}

int main() {
    cout << ContainsUpper("Hello") << endl;
    string str = "hello";
    ToUpper(str);
    cout << str << endl;
}