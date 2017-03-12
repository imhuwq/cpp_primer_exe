#include <vector>
#include <iostream>
#include <memory>

using namespace std;

shared_ptr <vector<int>> CreateVI() {
    shared_ptr <vector<int>> vip = make_shared<vector<int>> ();
    return vip;
}

void FillVI(istream &is, shared_ptr <vector<int>> vip) {
    int num;
    while (is >> num) {
        vip->push_back(num);
    }
}

void PrintVI(shared_ptr <vector<int>> vip) {
    for (auto num:*vip) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    shared_ptr<vector<int>>vip = CreateVI();
    FillVI(cin, vip);
    PrintVI(vip);
}