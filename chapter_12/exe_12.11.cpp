#include <memory>
#include <iostream>

using namespace std;

void process(shared_ptr<int> ptr) {

}

int main() {
    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p.get()));
    cout << *p << endl;
}