#include <iostream>

int main() {
    int sum = 0, value = 0;

    while (std::cin >> value) {
        std::cout << "Get " << value << "." << std::endl;
        sum += value;
    };
    std::cout << sum << std::endl;
    return 0;
}