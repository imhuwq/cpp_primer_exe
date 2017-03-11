#include <iostream>

using namespace std;

int main() {
    auto f = [](const int &a, const int &b) -> int { return a + b; };

    int a = f(2, 3);
    cout << a << endl;
}