//prime.cpp​
#include "prime.hpp"
#include <cmath>
#include <iostream>

// TODO: Implement isPrimeHalf
bool isPrimeHalf(int n, long long* modOps) {
    // Your implementation here
    // Checks for divisibility up to n/2

    if (n < 2) return false;
    if (n == 2) return true;
    if (modOps) (*modOps)++;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= n / 2; i+=2) {
        if (modOps) (*modOps)++;
        if (n % i == 0) {
            return false;
        }
    }
    // return true if n is prime else return false
    return true;
    // count modulo operations when modOps is not nullptr
}

// TODO: Implement isPrimeSqrt
bool isPrimeSqrt(int n, long long* modOps) {
    // Your implementation here
    //Checks for divisibility up to square root of n

    if (n < 2) return false;
    if (n == 2) return true;
    if (modOps) (*modOps)++;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(n); i+=2) {
        if (modOps) (*modOps)++;
        if (n % i == 0) {
            return false;
        }
    }
    // return true if n is prime else return false
    return true;
    // Remember to count modulo operations when modOps is not nullptr
}

// TODO: Implement countModOps
long long countModOps(PrimeFn isPrime, int lo, int hi) {
    // Your implementation here
    // This should call the provided isPrime function for each number in range [lo, hi]
    long long modOps = 0;
    for (int i = lo; i <= hi; ++i) {
        isPrime(i, &modOps);
        // Accumulate the total number of modulo operations
    }
    // and return the total number of modulo operations performed
    return modOps;
}