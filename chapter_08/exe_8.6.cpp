#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    string word;
    vector <string> words;

    string file = argv[1];
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