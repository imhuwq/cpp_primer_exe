#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


void answerA() {
    vector<int> nums;

    int num;

    while (cin >> num) {
        nums.push_back(num);
    };

    bool is_even = true;
    int last_num = 0;

    for (auto iter = nums.cbegin(); iter != nums.cend(); ++iter) {
        is_even = !is_even;
        if (is_even) {
            cout << *iter + last_num << endl;
        } else {
            last_num = *iter;
        }
    }

    if (!is_even) {
        cout << last_num << endl;
    }
}

void answerB() {
    vector<int> nums;

    int num;

    while (cin >> num) {
        nums.push_back(num);
    };

    auto begin = nums.cbegin();
    auto end = nums.cend() - 1;

    while (begin < end) {
        cout << *begin + *end << endl;
        ++begin;
        --end;
    };

    if (begin == end) {
        cout << *begin << endl;
    }


}

int main() {
//    answerA();
    answerB();
}