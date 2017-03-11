#include <string>
#include <forward_list>
#include <iostream>

using namespace std;

void func(forward_list <string> &sfl, const string str1, const string str2) {
    auto prev = sfl.before_begin();
    auto curr = sfl.begin();

    while (curr != sfl.end()) {
        if (*curr == str1) {
            sfl.insert_after(curr, str2);
            return;
        } else {
            prev = curr;
            ++curr;
        }
    }

    sfl.insert_after(prev, str2);
}

int main() {
    forward_list <string> sfl1 = {"this", "is", "a", "c++", "file"};
    forward_list <string> sfl2 = {"this", "is", "a", "forward", "list", "of", "string"};

    string s1 = "c++";
    string s2 = "source";
    func(sfl1, s1, s2);
    func(sfl2, s1, s2);

    for (auto item : sfl1) {
        cout << item << " ";
    }
    cout << endl;

    for (auto item : sfl2) {
        cout << item << " ";
    }
    cout << endl;
}