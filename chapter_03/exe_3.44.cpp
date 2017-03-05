#include <iostream>

using namespace std;

int main() {
    int ai[3][4] = {{0, 1, 2,  3},
                    {4, 5, 6,  7},
                    {8, 9, 10, 11}};

    for (int (&row)[4]: ai) {
        for (int col: row) {
            cout << col << " ";
        }
        cout << endl;
    };

    for (int i = 0; i != 3; ++i) {
        for (int j = 0; j != 4; ++j) {
            cout << ai[i][j] << " ";
        }
        cout << endl;
    };

    using int_array = int[4];
    for (int_array *beg = begin(ai); beg != end(ai); ++beg) {
        for (int *inbeg = begin(*beg); inbeg != end(*beg); ++inbeg) {
            cout << *inbeg << " ";
        }
        cout << endl;
    }

}