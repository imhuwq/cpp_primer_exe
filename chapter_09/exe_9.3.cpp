#include <iostream>
#include <vector>

using namespace std;

bool find_num(int num, vector<int>::const_iterator begin, vector<int>::const_iterator end) {
    while (begin != end) {
        if (num == *begin) {
            return true;
        }
        ++begin;
    }
    return false;
}

int main() {
    vector<int> vi = {1, 3, 5, 7, 9};
    cout << find_num(3, vi.cbegin(), vi.cend()) << endl;

    cout << find_num(2, vi.cbegin(), vi.cend()) << endl;
}