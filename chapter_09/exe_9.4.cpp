#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator find_num(int num, vector<int>::const_iterator begin, vector<int>::const_iterator end) {
    while (begin != end) {
        if (num == *begin) {
            return begin;
        }
        ++begin;
    }
    return end;
}

int main() {
    vector<int> vi = {1, 3, 5, 7, 9};

    vector<int>::const_iterator begin = vi.cbegin();
    vector<int>::const_iterator end = vi.end();

    cout << *begin << endl;
    cout << *find_num(3, begin, end) << endl;
    cout << *begin << endl;
    cout << *find_num(2, begin, end) << endl;
}