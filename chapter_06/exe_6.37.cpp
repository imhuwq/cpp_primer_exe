#include <iostream>
#include <string>

using namespace std;

typedef string (&tenStrRef)[10];

tenStrRef gen_str();

auto gen_str2() -> string (&)[10];

string str_arr[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};

decltype(str_arr) &gen_str3();

int main() {
    return 0;
}