#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    string word;
    vector <string> words;

    string file = "/home/john/dsk/c++/chapter_08/exe_8.1.cpp";
    ifstream ifs(file);
    while (ifs) {
        ifs >> word;
        words.push_back(word);
    }
    ifs.close();

    for (auto word : words) {
        cout << word << " ";
    }

    cout << endl;

}