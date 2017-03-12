#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    multiset <string> c = {"hi", "this", "this", "is", "s", "jh"};
    vector <string> v = {"ok", "fine", "i", "will", "be", "there"};

//    copy(v.begin(), v.end(), inserter(c, c.end()));  ok
//    copy(v.begin(), v.end(), back_inserter(c));  fail, no member named push_back
//    copy(c.begin(), c.end(), inserter(v, v.end()));  ok
//    copy(c.begin(), c.end(), back_inserter(v));  ok
}

