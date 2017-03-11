#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void print_vs(vector <string> &vs) {
    for (string word: vs) {
        cout << word << " ";
    }
    cout << endl;

}

int main() {
    vector <string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }

    print_vs(words);
    auto end_unique = unique(words.begin(), words.end());
    print_vs(words);

    words.erase(end_unique, words.end());
    print_vs(words);

}