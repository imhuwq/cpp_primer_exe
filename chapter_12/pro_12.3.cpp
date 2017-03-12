#include "textquery.h"

using namespace std;


void runQueries(ifstream &inFile) {
    TextQuery tq(inFile);

    cout << "Enter the word to look for, press Ctrl+D to quit" << endl;
    string word;
    while (cin >> word) {
        print(cout, tq.query(word));
        cout << endl;
    }
}

int main(int argc, char *argv[]) {
    string file = argv[1];
    ifstream inFile(file);
    runQueries(inFile);
    inFile.close();
}