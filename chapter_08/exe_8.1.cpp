#include <iostream>
#include <string>
#include <vector>

using namespace std;

istream &get_input(istream &is) {
    string word;
    vector <string> words;
    cout << "reading... " << endl;

    while (is >> word) {
        cout << "reading... " << endl;
        words.push_back(word);
    }

    for (auto word: words) {
        cout << word << " ";
    }

    cout << endl;

    is.clear();

    return is;
}

int main() {
    get_input(cin);
}