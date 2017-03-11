#include <iostream>

using namespace std;

int main() {
    auto f = [](const int &a, const int &b) -> int { return a + b; };

    int a = f(2, 3);

    auto ff = [a](const int &c) -> int { return a + c; };
    int d = ff(5);
    cout << d << endl;
}