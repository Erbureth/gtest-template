#include <iostream>
#include "src/factorialcomputer.h"

int main(int argc, char **argv) {
    std::cout << "Insert number: " << std::endl;
    int i;
    FactorialComputer computer;
    std::cin >> i;
    std::cout << "Factorial of " << i << " is " << computer.compute(i) << "." << std::endl;
    return 0;
}
