#include <iterator>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string inFile = "./exe_10.33.txt";
    string oddFile = "./exe_10.33_odds.txt";
    string evenFile = "./exe_10.33_evens.txt";

    fstream ifs(inFile);
    fstream odd_ifs(oddFile, ofstream::out);
    fstream even_ifs(evenFile, ofstream::out);

    istream_iterator<int> int_iter(ifs), eof;
    ostream_iterator<int> odd_int_iter(odd_ifs, " ");
    ostream_iterator<int> even_int_iter(even_ifs, "\n");

    while (int_iter != eof) {
        if (*int_iter % 2) {
            odd_int_iter = *int_iter;
        } else {
            even_int_iter = *int_iter;
        }

        ++int_iter;
    }

    ifs.close();
    odd_ifs.close();
    even_ifs.close();
}