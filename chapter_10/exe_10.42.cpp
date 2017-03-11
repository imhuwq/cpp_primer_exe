#include <list>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void ElimDups(list <string> &ls) {
    ls.unique();
}

int main() {
    list <string> ls = {"hi", "hi", "this", "is", "john", "john"};
    ElimDups(ls);
    for (auto item : ls) {
        cout << item << " ";
    }
    cout << endl;
}