#include <iostream>
#include <string>

using namespace std;

int main() {
    string last = "";
    string accepting = "";
    bool got_repeated = false;

    while (cin >> accepting) {
        if (accepting == last) {
            cout << accepting << endl;
            got_repeated = true;
            break;
        } else {
            last = accepting;
        }
    }

    if (!got_repeated) {
        cout << "no repeated words got input" << endl;
    }
}