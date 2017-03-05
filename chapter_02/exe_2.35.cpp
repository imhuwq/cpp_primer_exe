#include <iostream>

int main() {
    using namespace std;

    const int i = 42;
    auto j = i;  //int
    const auto &k = i;  //int
    auto *p = &i;  //int
    const auto j2 = i, &k2 = i; //int
//    const auto j3 = i, p2 = &i; //int
}