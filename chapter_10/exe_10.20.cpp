#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    vector <string> words;

    while (cin >> word) {
        words.push_back(word);
    }

    int num = count_if(words.begin(), words.end(), [](const string &str) -> bool { return str.size() > 6; });

    cout << num << endl;
}