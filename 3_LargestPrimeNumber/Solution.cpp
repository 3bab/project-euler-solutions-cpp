/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <vector>

std::vector<long> findPrimeFactor(long number) {
    std::vector<long> primeFactors;
    long divider = 2;
    // Use prime factorization https://www.mathsisfun.com/prime-factorization.html
    while (true) {
        if (number % divider == 0) {
            primeFactors.push_back(divider);
            number /= divider;
            if (number == 1) break;
        } else {
            divider++;
        }
    }
    return primeFactors;
}

int main() {
    for (auto i : findPrimeFactor(15)) std::cout << i << " ";
    std::cout << std::endl;
    for (auto i : findPrimeFactor(8)) std::cout << i << " ";
    std::cout << std::endl;
    for (auto i : findPrimeFactor(600851475143)) std::cout << i << " ";
    return 0;
}