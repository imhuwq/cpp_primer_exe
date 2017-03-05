#include <iostream>

using namespace std;

int abs(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

int main() {
    cout << "Please Enter a Number:" << endl;
    int num;
    cin >> num;
    cout << "The abs is: " << abs(num) << endl;
}