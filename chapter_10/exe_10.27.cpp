#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vi = {1, 1, 2, 3, 5, 5, 10, 15};
    list<int> li;
    unique_copy(vi.begin(), vi.end(), back_inserter(li));

    for (auto item : li) {
        cout << item << " ";
    }
    cout << endl;
}