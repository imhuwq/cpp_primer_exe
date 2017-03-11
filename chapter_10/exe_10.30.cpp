#include <iterator>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    istream_iterator<int> int_iter(cin), eof;
    while (int_iter != eof) {
        nums.push_back(*int_iter++);
    }

    sort(nums.begin(), nums.end());

    ostream_iterator<int> int_oter(cout, " ");
    for (auto num :nums) {
        int_oter = num;
    }
    cout << endl;
}