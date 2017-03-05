#include <iostream>

using namespace std;

void exchange(int &a, int &b) {
    int mid = a;
    a = b;
    b = mid;
}

int main() {
    int a = 4;
    int b = 2;
    exchange(a, b);
    cout << a << ' ' << b << endl;
}