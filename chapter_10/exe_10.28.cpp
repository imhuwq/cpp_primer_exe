#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> vi1, vi2, vi3;

    auto bk_ins = back_inserter(vi1);
    auto fr_ins = front_inserter(vi2);
    auto inst = inserter(vi3, vi3.end());

    for_each(vi.begin(), vi.end(), [&](int num) -> void {
        bk_ins = num;
        fr_ins = num;
        inst = num;
    });

    for (auto item : vi1) {
        cout << item << " ";
    }
    cout << endl;

    for (auto item : vi2) {
        cout << item << " ";
    }
    cout << endl;

    for (auto item : vi3) {
        cout << item << " ";
    }
    cout << endl;
}