#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

typedef int (*fp)(int, int);

int madd(int a, int b) {
    return a + b;
}

int mminus(int a, int b) {
    return a - b;
}

int mmultiply(int a, int b) {
    return a * b;
}

int mdivid(int a, int b) {
    if (b == 0) {
        throw invalid_argument("The second argument can't be ZERO");
    }
    return a / b;
}

int main() {
    vector <fp> vf = {madd, mminus, mmultiply, mdivid};
    for (auto f: vf) {
        cout << f(4, 2) << endl;
    }
}
