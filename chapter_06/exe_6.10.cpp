#include <iostream>

using namespace std;

void exchange(int *a, int *b) {
    int mid = *a;
    *a = *b;
    *b = mid;
}

int main() {
    int a = 10;
    int b = 1;
    exchange(&a, &b);

    cout << a << ',' << b << endl;
}