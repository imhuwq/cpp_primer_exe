#include <iostream>

using namespace std;

int main() {
    int pi  = 10;
    int *p = &pi;

    cout << sizeof(p) << endl;
    cout << sizeof(pi) << endl;
}