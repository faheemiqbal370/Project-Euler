#include <bits/stdc++.h>
using namespace std;

int main() {
    int limit = 200000;   // Big enough to find 10001st prime
    vector<bool> isPrime(limit, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    int answer = -1;
    for (int i = 2; i < limit; i++) {
        if (isPrime[i]) {
            count++;
            if (count == 10001) {
                answer = i;
                break;
            }
        }
    }

    cout << "The 10001st prime number is: " << answer << endl;
    return 0;
}
