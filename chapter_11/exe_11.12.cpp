#include <utility>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

typedef pair<string, int> string_info;

int main() {
    string word;
    vector <string_info> str_info;
    while (cin >> word) {
        string_info info = {word, word.size()};
        str_info.push_back(info);
    }

    for (auto item : str_info) {
        cout << item.first << " "  << item.second << endl;
    }
}