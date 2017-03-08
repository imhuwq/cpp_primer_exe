#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char *argv[]) {
    vector <string> lines;
    string line;

    ifstream ifs(argv[1]);
    while (ifs) {
        getline(ifs, line);
        lines.push_back(line);
    }
    ifs.close();

    string word;
    for (auto line: lines) {
        istringstream iss(line);
        while (iss) {
            iss >> word;
            cout << word << " ";
        }
        cout << endl;
    }

}