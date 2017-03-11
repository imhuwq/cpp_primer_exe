#include <vector>
#include <list>
#include <string>
#include <iostream>

using namespace std;

int main() {
    list<char const *> lc = {"hello", "world"};
    vector <string> vs;
    vs.assign(lc.cbegin(), lc.cend());

    for (auto s: vs) {
        cout << s << endl;
    }

}