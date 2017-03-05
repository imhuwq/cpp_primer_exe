#include <vector>
#include <string>
#include <iostream>

using std::cin;
using std::vector;
using std::string;

int main() {
    vector <string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }
}