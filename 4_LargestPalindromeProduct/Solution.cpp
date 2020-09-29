/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <iostream>
#include <chrono>

bool isPalindrome(int number);

int main() {
    u_long maxPalindrome = 0;
    unsigned multiplierA = 0;
    unsigned multiplierB = 0;
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (int i = 100L; i < 1000; i++) {
        for (int j = 100L; j < 1000; j++) {
            if (isPalindrome(i * j) && i * j > maxPalindrome) {
                multiplierA = i;
                multiplierB = j;
                maxPalindrome = i * j;
            }
        }
    }
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "Palindrome found " << multiplierA << " * " << multiplierB << " = " << maxPalindrome << std::endl;
    std::cout << "It took: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << "[ms]" << std::endl;
    return 0;
}

bool isPalindrome(int number) {
    std::string s = std::to_string(number);
    char const *pchar = s.c_str();
    int size = strlen(pchar);
    for (int i = 0; i <= size / 2; i++) {
        if (pchar[i] != pchar[size - 1 - i])
            return false;
    }
    return true;
}

/*
 * Notes: this is actually slower than exactly the same Kotlin code. Big O is worse than implementation in Kotlin
 */
