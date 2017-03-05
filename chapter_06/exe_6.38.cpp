#include <iostream>

using namespace std;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
int (&odd_ref)[5] = odd;

decltype(odd) &arrRef(int i) {
    return (i % 2) ? odd : even;
}

int main() {
    int (&ar)[5] = arrRef(2);
    ar[2] = 12;
    for (int i = 0; i < 5; ++i) {
        cout << ar[i] << endl;
    }

    for (int i = 0; i < 5; ++i) {
        cout << even[i] << endl;
    }
}