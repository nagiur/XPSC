#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007

long long to_pow(long long n, long long k) {
    long long result = 1;

    while (k) {
        if (k % 2 == 1) {
            result = (result * n) % mod;
            k--;
        } else {
            n = (n * n) % mod;
            k /= 2;
        }
    }

    return (result % mod);
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n, k;

        cin >> n >> k;

        cout << to_pow(n, k) << endl;
    }

    return 0;
}