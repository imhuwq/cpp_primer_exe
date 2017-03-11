#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    vector<int> vi = {1, 3, 5, 7, 9};
    int sum = accumulate(vi.cbegin(), vi.cend(), 0);
    cout << sum << endl;
}