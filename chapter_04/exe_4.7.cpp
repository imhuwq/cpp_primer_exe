#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int max_int = pow(2, 31) - 1;
    unsigned max_unsigned = pow(2, 32) - 1;
    unsigned min_unsigned = 0;

    cout << max_int + 1 << endl;
    cout << max_unsigned + 1 << endl;
    cout << min_unsigned - 1 << endl;
}