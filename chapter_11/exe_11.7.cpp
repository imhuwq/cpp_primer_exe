#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    map <string, vector<string>> family;
    family["hu"].push_back("john");

    map <string, int> test;
    cout << test["hou"] << endl;
}