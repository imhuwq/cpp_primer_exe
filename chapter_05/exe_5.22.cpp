#include <iostream>

using namespace std;

int main() {
    begin:
    int sz = 5;
    if (sz < 0) {
        goto begin;
    }

    while (sz < 0) { ;
    }
}