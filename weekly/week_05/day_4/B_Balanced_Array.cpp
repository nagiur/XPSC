#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        n /= 2;
        if (n % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (size_t i = 1; i <= n; i++) {
            cout << i * 2 << " ";
        }
        for (size_t i = 1; i < n; i++) {
            cout << i * 2 - 1 << " ";
        }

        cout << 3 * n - 1 << endl;
    }

    return 0;
}