#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main() {
    vector<unsigned> scores(11, 0);

    int score;
    while (cin >> score) {
        auto iter = scores.begin();
        int grade = score / 10;
        *(iter + grade) += 1;
    };

    for (auto iter = scores.cbegin(); iter != scores.cend(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}