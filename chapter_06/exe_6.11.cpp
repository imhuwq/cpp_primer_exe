#include <iostream>

using namespace std;


void reset (int& num) {
    num = 0;
}

int main() {
    int a = 10;
    reset(a);
    cout << a << endl;
}