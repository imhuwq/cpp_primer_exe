#include <iostream>

int main () {
    std::cout << "Please enter twi INTEGERS: " << std::endl;
    int min = 0, max = 0;
    std::cin >> min >> max;
    if (max < min) {
        std::swap(max, min);
    };

    while (max >= min) {
        std::cout << max << std::endl;
        --max;
    };

    return 0;
}