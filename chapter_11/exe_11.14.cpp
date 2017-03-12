#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

typedef pair<string, int> kid_info;

int main() {
    map <string, vector<kid_info>> family;
    family["hu"].push_back({"john", 19910917});

}