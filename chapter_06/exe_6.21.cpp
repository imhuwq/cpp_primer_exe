#include <iostream>

using namespace std;

int compare(const int a, const int *b) {
    if (a > *b) {
        return a;
    }
    return *b;
}

int main() {
    int a = 2;
    int b = 5;
    int *bp = &b;
    cout << compare(a, bp) << endl;
}