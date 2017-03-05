#include <iostream>
#include <string>

using namespace std;

string make_plural(int size, const string &word, const string &suffix = "s") {
    if (size > 1) {
        return word + suffix;
    }
    return word;
}

int main() {
    string s = "success";
    string f = "failure";

    cout << make_plural(1, s, "es") << endl;
    cout << make_plural(2, s, "es") << endl;
    cout << make_plural(1, f, "s") << endl;
    cout << make_plural(2, f, "s") << endl;

}