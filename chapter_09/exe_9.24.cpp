#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi;

    vector<int>::iterator begin = vi.begin();

    cout << vi[0] << endl;
    cout << vi.front() << endl;
    cout << *begin << endl;
    cout << vi.at(0) << endl;

    //Segmentation fault

}