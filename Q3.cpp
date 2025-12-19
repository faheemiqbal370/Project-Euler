// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<long long> primeFactors(long long n) {
    vector<long long> factors;

    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) {
                n /= i; //n=n/i || Jab hum i se divide karte hain, to hum i ke saare multiples hata dete hain. Taaki ek hi factor ko baar-baar alag se na store karna pade
            }
        }
    }

    if (n > 1) {
        factors.push_back(n); // agar loop mea koi factor na mile to number khud ka he factor hoga.
     }
    return factors;
}


long long largestPrimeFactor(long long n) {
    vector<long long> factors = primeFactors(n);
    if (factors.empty()) {
        return n; 
    }
    return *max_element(factors.begin(), factors.end());
}

int main() {
    long long n = 600851475143;
    cout << "Largest prime factor: "<< largestPrimeFactor(n) << endl;
    return 0;
}

