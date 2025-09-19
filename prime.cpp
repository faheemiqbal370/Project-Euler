// How to calculate prime factors nd avoid duplicates
#include <bits/stdc++.h>
using namespace std;

void primeFactors(long long n) {
    for (long long i = 2; i<=sqrt(n); i++) {
        while (n % i == 0) {  
            cout << i << " ";
            while (n % i == 0)// Remove this while if you dont want repetation .
            n /= i;
        }
    }
    if (n > 1) cout << n;  // agar end me prime bacha
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factors: ";
    primeFactors(n);
    cout << endl;

    return 0;
}
