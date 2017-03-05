#include <iostream>

using namespace std;

int fact(int num) {
    int ret = 1;
    while (num > 1) {
        ret = ret * num;
        --num;
    }
}

int main() {
    int a = fact(5);
    cout << "The result is " << a << endl;
}