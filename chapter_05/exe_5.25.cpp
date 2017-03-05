#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    int num1, num2;
    string retry = "n";

    do {
        try {
            cin >> num1 >> num2;
            if (num2 == 0) {
                throw runtime_error("the second number should not be ZERO");
            }
            cout << num1 / num2 << endl;
            retry = "n";
        } catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "Try again? (y / n)" << endl;
            cin >> retry;
        }
    } while (retry == "y");

}