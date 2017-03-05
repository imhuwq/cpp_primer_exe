#include <iostream>
#include <string>

using namespace std;

int main() {
    string in;
    unsigned a = 0;
    while (cin >> in) {
        int ch = in == "ff"? 1 : in == "fi" ? 2 : in == "fl" ? 3 : 4;
        switch (ch) {
            case 1:
            case 2:
            case 3:
                ++a;
                break;
        }
    }

    cout << a << endl;
}