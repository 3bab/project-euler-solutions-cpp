/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <iostream>

bool isDivisible(long number);

int main() {
    bool notFound = true;
    long number  = 19;
    while (notFound) {
        number++;
        if (isDivisible(number)) notFound = false;
    }
    std::cout << "Number found " << number << std::endl;
    return 0;
}

bool isDivisible(long number) {
    for (unsigned i = 2; i <= 20; i++) {
        if (number % i != 0) return false;
    }
    return true;
}

/*
 * Notes: can also be done with recursive function. Check Kotlin implementation.
 */

