#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<const char *> s1 = {"hi", "there"};
    vector<const char *> s2 = {"hi", "there", "this", "is", "jh"};
    vector<const char *> s3 = {"hi", "theare", "this", "is", "jh"};

    cout << equal(s1.cbegin(), s1.cend(), s2.cbegin()) << endl;
    cout << equal(s1.cbegin(), s1.cend(), s3.cbegin()) << endl;


}