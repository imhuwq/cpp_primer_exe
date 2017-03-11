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

void ElimDups(vector <string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool IsShorter(const string &word1, const string &word2) {
    return word1.size() < word2.size();
}


void StableSortWords(vector <string> &words) {
    stable_sort(words.begin(), words.end(), IsShorter);
}

int main() {
    vector <string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }
    print_vs(words);

    ElimDups(words);
    print_vs(words);

    StableSortWords(words);
    print_vs(words);

}