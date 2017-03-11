#include <list>
#include <forward_list>
#include <iostream>

using namespace std;

int main() {
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = li.begin();

    while (iter != li.end()) {
        if (*iter % 2) {
            iter = li.insert(iter, *iter);
            iter++;
            iter++;
        } else {
            iter = li.erase(iter);
        }
    }

    for (auto item: li) {
        cout << item << " ";
    }
    cout << endl;

    forward_list<int> fli = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = fli.before_begin();
    auto curr = fli.begin();

    while (curr != fli.end()) {
        if (*curr % 2) {
            curr = fli.insert_after(prev, *curr);
            curr++;
            prev = curr;
            curr++;
        } else {
            curr = fli.erase_after(prev);
        }
    }

    for (auto item: fli) {
        cout << item << " ";
    }
    cout << endl;
}