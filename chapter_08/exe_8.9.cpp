#include <iostream>
#include <string>
#include <vector>
#include <istringstream>

using namespace std;

istream &get_input(istream &is) {
    string word;
    vector <string> words;

    while (is >> word) {
        words.push_back(word);
    }

    is.clear();

    return is;
}

int main() {
    istringstream iss;
    get_input(iss);
}