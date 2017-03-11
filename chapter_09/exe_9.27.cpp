#include <forward_list>
#include <iostream>

using namespace std;

int main() {
    forward_list<int> ifl = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    auto bf_begin = ifl.before_begin();
    auto begin = ifl.begin();

    while (begin != ifl.end()) {
        if (*begin % 2 != 0) {
            begin = ifl.erase_after(bf_begin);
        } else {
            bf_begin = begin;
            ++begin;
        }
    }

    for (auto item : ifl) {
        cout << item << " ";
    }
    cout << endl;
}