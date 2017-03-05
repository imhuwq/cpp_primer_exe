#include <iostream>

int main () {
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    };
    std::cout << sum << std::endl;

    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    };

    std::cout << "Please enter two INTEGERS: " << std::endl;
    int max, min;
    std::cin >> max >> min;
    if (max < min) {
        std::swap(max, min);
    };

    for (int i = min; i <= max; ++i) {
        std::cout << i << std::endl;
    };

}