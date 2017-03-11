#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

void ElimDups(vector <string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(vector <string> &words, int sz) {
    ElimDups(words);
    stable_sort(words.begin(), words.end(),
                [](const string str1, const string str2) -> bool { return str1.size() < str2.size(); });

    auto after = partition(words.begin(), words.end(), [sz](const string str) -> bool { return str.size() < sz; });

    for_each(after, words.end(), [](const string str) -> void {
        cout << str << " ";
    });
    cout << endl;
}

int main() {
    string word;
    vector <string> words;

    while (cin >> word) {
        words.push_back(word);
    }

    biggies(words, 4);
}