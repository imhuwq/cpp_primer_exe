#include <vector>
#include <list>
#include <iostream>

using namespace std;


int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> iv;
    list<int> il;

    for (int num: ia) {
        iv.push_back(num);
        il.push_back(num);
    }

    auto it_iv = iv.begin();
    while (it_iv != iv.end()) {
        if (*it_iv % 2 == 0) {
            it_iv = iv.erase(it_iv);
        } else {
            ++it_iv;
        }
    }

    auto it_il = il.begin();
    while (it_il != il.end()) {
        if (*it_il % 2 != 0) {
            it_il = il.erase(it_il);
        } else {
            ++it_il;
        }
    }

    for (auto item : iv) {
        cout << item << " ";
    }
    cout << endl;
    for (auto item : il) {
        cout << item << " ";
    }
    cout << endl;

}