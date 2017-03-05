#include <iostream>

using namespace std;

void exchange(int *&a, int *&b) {
    int *mid = a;
    a = b;
    b = mid;
}

int main() {
    int a = 10;
    int b = 20;
    int *ap = &a;
    int *bp = &b;
    cout << "a :" << ap << " b: " << bp << endl;
    exchange(ap, bp);
    cout << "a :" << ap << " b: " << bp << endl;
}