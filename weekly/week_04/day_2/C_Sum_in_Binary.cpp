#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n, sum = 0;
        cin >> n;

        while (n > 0) {
            sum += n;
            n /= 2;
        }

        cout << sum << endl;
    }

    return 0;
}