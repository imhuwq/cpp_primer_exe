#include <string>
#include <memory>
#include <iostream>

using namespace std;

int main() {
    allocator <string> alloc;
    auto p = alloc.allocate(10);
    auto q = p;
    auto s = p;

    string word;
    while (cin >> word) {
        alloc.construct(p++, word);
    }

    while (p != q) {
        cout << *q << " ";
        alloc.destroy(q++);
    }
    cout << endl;
    alloc.deallocate(s, 10);
}