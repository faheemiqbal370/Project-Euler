// How to calculate prime factors nd avoid duplicates
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> allFactors(long long n) {
    vector<long long> factors;

    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            factors.push_back(i);          // chhota factor like 2
            if (i != n / i) {              // duplicate avoid karne ke liye like agafr nmber perfect square hoga like 36/6=6 to 6 2 baar ayega
                factors.push_back(n / i);  // bada factor like 18
            }
        }
    }
    return factors;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    vector<long long> factors = allFactors(n);

    cout << "Factors of " << n << " are: ";
    for (auto f : factors) {
        cout << f << " ";
    }
    cout << endl;
    return 0;
}
