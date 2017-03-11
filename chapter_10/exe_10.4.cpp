#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    vector<double> vi = {1.2, 3, 5, 7, 9};
    double sum = accumulate(vi.cbegin(), vi.cend(), 0.0);
    cout << sum << endl;
}