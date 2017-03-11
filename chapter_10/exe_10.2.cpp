#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    list <string> ls;
    string word;
    while (cin >> word) {
        ls.push_back(word);
    }
    cout << count(ls.cbegin(), ls.cend(), "hi") << endl;
}