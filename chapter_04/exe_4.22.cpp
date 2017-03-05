#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;

    string result = num > 90 ? "high pass" : num > 75 ? "pass" : num > 60 ? "low pass" : "fail";
    cout << result << endl;

    string rv;
    if (num > 90) {
        rv = "high pass";
    } else if (num > 75) {
        rv = "pass";
    } else {
        rv = num > 60 ? "low pass" : "fail";
    }

    cout << rv << endl;
}