#include <list>
#include <deque>
#include <iostream>

using namespace std;

void print_deque(deque<int> d) {
    for (int num: d) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    list<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> odds, evens;

    for (int num: nums) {
        if (num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }

    print_deque(evens);
    print_deque(odds);
}