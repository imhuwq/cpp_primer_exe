#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;


void display_int_vector(vector<int> vec) {
    for (auto v : vec) {
        cout << v << endl;
    };
    cout << "=====" << endl;
}

void display_str_vector(vector<string> vec) {
    for (auto v : vec) {
        cout << v << endl;
    };
    cout << "=====" << endl;
}

int main() {
    vector<int> v1;  // null
    vector<int> v2(10);  // 0 * 10
    vector<int> v3(10, 42);  // 42 * 10
    vector<int> v4{10};  // 10
    vector<int> v5{10, 42};  // 10, 42
    vector <string> v6{10};  // "" * 10
    vector <string> v7{10, "hi"};  // "hi" * 10

    display_int_vector(v1);
    display_int_vector(v2);
    display_int_vector(v3);
    display_int_vector(v4);
    display_int_vector(v5);
    display_str_vector(v6);
    display_str_vector(v7);

}