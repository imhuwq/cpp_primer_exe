#include <iostream>
#include <string>

using namespace std;

int main() {
    string result_word = "";
    int result_count = 0;

    string last_word = "";
    int last_count = 0;

    string accepting_word = "";

    while (cin >> accepting_word) {
        if (accepting_word != last_word) {
            last_count = 1;
            last_word = accepting_word;
        } else {
            ++last_count;
        }

        if (last_count > result_count) {
            result_word = last_word;
            result_count = last_count;
        }
    }
    cout << result_word << "  " << result_count << endl;
}