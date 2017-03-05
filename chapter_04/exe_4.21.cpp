#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> nums;

    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    for (auto &n :nums) {
        if (n % 2 != 0) {
            n *= 2;
        }
    }

    for (auto n: nums) {
        cout << n << " ";
    }
    cout << endl;
}