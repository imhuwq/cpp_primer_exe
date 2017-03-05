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
    int num;
    cout << "Please enter a number: " << endl;
    cin >> num;
    cout << "The result is " << fact(num) << endl;
}