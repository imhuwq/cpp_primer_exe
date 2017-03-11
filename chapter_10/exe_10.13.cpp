#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool IsLongerThanFive(const string &str) {
    return str.size() >= 5;
}

int main() {
    vector <string> words;

    string word;
    while (cin >> word) {
        words.push_back(word);
    }

    auto after = partition(words.begin(), words.end(), IsLongerThanFive);
    for (auto iter = words.begin(); iter != after; ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}