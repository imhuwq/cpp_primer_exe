#include <iostream>
#include <vector>

using namespace std;

void cout_vector_int(const vector<int> &vi, int index) {
    if (index >= vi.size()) {
        return;
    }
    cout << vi[index] << endl;
    cout_vector_int(vi, ++index);
}

int main() {
    vector<int> vi = {1, 3, 5, 7, 8};
    cout_vector_int(vi, 0);
}
