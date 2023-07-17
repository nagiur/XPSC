#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, x;
        cin >> n >> x;

        if (n % 2 == 1) {
            n++;
        }

        n = n / 2;
        // cout << n << " " << x << " ";
        if (x >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}