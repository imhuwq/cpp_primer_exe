#include <iostream>

using namespace std;

int main() {
    char in;
    unsigned a = 0, e = 0, i = 0, o = 0, u = 0;
    while (cin >> in) {
        switch (in) {
            case 'a':
                ++a;
                break;
            case 'e':
                ++e;
                break;
            case 'i':
                ++i;
                break;
            case 'o':
                ++o;
                break;
            case 'u':
                ++u;
                break;
            case 'A':
                ++a;
                break;
            case 'E':
                ++e;
                break;
            case 'I':
                ++i;
                break;
            case 'O':
                ++o;
                break;
            case 'U':
                ++u;
                break;
        }
    }

    cout << a << " " << e << " " << i << " " << o << " " << u << endl;
}