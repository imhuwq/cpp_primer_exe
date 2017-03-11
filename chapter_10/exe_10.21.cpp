#include <iostream>

using namespace std;

int main() {
    int a = 5;
    auto f = [&]() -> bool {
        return a == 0 ? true : --a == 0;
    };

    f();
    f();
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;

}
