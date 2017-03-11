#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    list<int> li= {0, 1, 2, 0, 3, 4, 5};
    cout << *find(li.crbegin(), li.crend(), 0) << endl;
}