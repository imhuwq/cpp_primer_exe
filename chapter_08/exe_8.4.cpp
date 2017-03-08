#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    string line;
    vector <string> lines;

    string file = "/home/john/dsk/c++/chapter_08/exe_8.1.cpp";
    ifstream ifs(file);
    while (ifs) {
        getline(ifs, line);
        lines.push_back(line);
    }
    ifs.close();

    for (auto line : lines) {
        cout << line << endl;
    }

}