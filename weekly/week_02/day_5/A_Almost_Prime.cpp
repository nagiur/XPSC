#include <bits/stdc++.h>

using namespace std;

int countAlmostPrimes(int n) {
    // Create a boolean array to store whether a number is prime or not.
    bool prime[n + 1];
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }

    // Mark all the multiples of 2 as not prime.
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    // Count the number of numbers that have exactly two prime divisors.
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (prime[i] && prime[n / i]) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    int count = countAlmostPrimes(n);
    cout << count << endl;
    return 0;
}
