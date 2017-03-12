#include "pro_12.1.h"

#include <iostream>

using namespace std;

int main() {
    StrBlob b2 = {"a", "an", "the"};
    b2.push_back("about");

    cout << b2.size() << endl;

    const string s = b2.front();
    cout << s << endl;
}