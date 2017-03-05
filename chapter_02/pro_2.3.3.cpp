#include <iostream>

int main() {
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
    int *&rpi = pi;

    std::cout << ival << " " << pi << " " << ppi << std::endl;

    std::cout << **ppi << std::endl;
    std::cout << rpi << std::endl;

}