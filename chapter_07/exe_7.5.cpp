#include <iostream>

struct Person {
    std::string Name;
    std::string Address;

    std::string GetName() {
        return Name;
    }

    std::string GetAddress() {
        return Address;
    }
};

int main() {
    return 0;
}