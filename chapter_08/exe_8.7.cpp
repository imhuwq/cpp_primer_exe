#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    string word;
    vector <string> words;

    string in_file = argv[1];
    string out_file = argv[2];

    ifstream ifs(in_file);
    while (ifs) {
        ifs >> word;
        words.push_back(word);
    }
    ifs.close();

    ofstream ofs(out_file, fstream::app);
    if (ofs) {
        for (auto word : words) {
            ofs << word << " ";
        }
    }

    ofs << endl;
    ofs.close();

}