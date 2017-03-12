#include <vector>
#include <iostream>

using namespace std;

vector<int> *CreateVI() {
    vector<int> *vip = new vector<int>;
    return vip;
}

void FillVI(istream &is, vector<int> *vip) {
    int num;
    while (is >> num) {
        vip->push_back(num);
    }
}

void PrintVI(vector<int> *vip) {
    for (auto num:*vip) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> *vip = CreateVI();
    FillVI(cin, vip);
    PrintVI(vip);
    delete vip;
}