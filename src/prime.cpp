//prime.cpp​
#include "prime.hpp"
#include <cmath>
#include <iostream>

// TODO: Implement isPrimeHalf
bool isPrimeHalf(int n, long long* modOps) {
    // Your implementation here
    // Checks for divisibility up to n/2
    if (modOps) (*modOps)++;
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i <= n / 2; ++i) {
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

    if (modOps) (*modOps)++;
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i <= std::sqrt(n); ++i) {
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
    long long totalModOps = 0;
    for (int i = lo; i <= hi; ++i) {
        long long modOps = 0;
        isPrime(i, &modOps);
        totalModOps += modOps;
        // Accumulate the total number of modulo operations
    }
    // and return the total number of modulo operations performed
    return totalModOps;
}