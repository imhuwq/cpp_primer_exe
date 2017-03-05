#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

struct matrix;
bool compare(matrix a, matrix b);

vector<int>::iterator change_val(vector<int>, int index);

int main() {
    vector<int> v;
    cout << typeid(v.begin()).name() << endl;
}