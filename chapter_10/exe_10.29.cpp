#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector <string> words;

    fstream fi("./te.text");
    istream_iterator <string> fit(fi), eof;
    while (fit != eof) {
        words.push_back(*fit++);
    }

    for (auto word: words) {
        cout << word << " ";
    }
    cout << endl;
}