#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void capitalize_str_vector(vector <string> *vec) {
    for (auto &word : *vec) {
        for (auto &character : word) {
            character = toupper(character);
        };
    };
}

void display_str_vector(vector <string> vec) {
    for (auto word : vec) {
        cout << word << endl;
    };
}

int main() {
    vector <string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    };

    capitalize_str_vector(&words);
    display_str_vector(words);
}