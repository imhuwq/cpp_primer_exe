#include <list>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string word;
    list <string> words;
    while (cin >> word) {
        words.push_back(word);
    }

    for (auto word: words) {
        cout << word << " ";
    }
    cout << endl;
}

