#include "factorialcomputer.h"

int FactorialComputer::compute(int n) const {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }

    return n * compute(n-1);
}
