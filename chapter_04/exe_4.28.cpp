#include <iostream>

using namespace std;

int main() {
    cout << sizeof(char) << endl;  // 1
    cout << sizeof(short) << endl; // 2
    cout << sizeof(int) << endl;   // 4
    cout << sizeof(long) << endl;  // 8
    cout << sizeof(long long) << endl;  // 8

    cout << sizeof(bool) << endl;  // 1

    cout << sizeof(unsigned int) << endl;  // 4
    cout << sizeof(unsigned long) << endl; // 8
}