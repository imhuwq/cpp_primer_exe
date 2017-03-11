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
    vector<int> unq_nums;
    auto unq_nums_inst = back_inserter(unq_nums);
    unique_copy(nums.begin(), nums.end(), unq_nums_inst);

    ostream_iterator<int> int_oter(cout, " ");
    for (auto num :unq_nums) {
        int_oter = num;
    }
    cout << endl;
}