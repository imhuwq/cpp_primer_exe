#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    for (int *p = ia, i = 0;
         p != ia + size && i != size;
         ++p, ++i) {
        cout << *p << " " << ia[i] << ", ";
    }
    cout << endl;
}