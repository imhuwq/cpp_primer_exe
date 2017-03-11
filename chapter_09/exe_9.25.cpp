#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5};
    vector<int>::iterator begin = vi.begin();
    vector<int>::iterator end = vi.end();

    vector<int>::iterator elem1 = begin;
    vector<int>::iterator elem2 = begin;

    vi.erase(elem1, elem2);

    for (auto item : vi) {
        cout << item << " ";
    }
    cout << endl;

    elem1 = end;
    elem2 = end;
    vi.erase(elem1, elem2);

    for (auto item : vi) {
        cout << item << " ";
    }
    cout << endl;

    elem1 = begin;
    elem2 = end;
    vi.erase(elem1, elem2);

    for (auto item : vi) {
        cout << item << " ";
    }
    cout << endl;

}