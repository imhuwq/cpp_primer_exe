#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5};
    cout << count(vi.cbegin(), vi.cend(), 3) << endl;
}