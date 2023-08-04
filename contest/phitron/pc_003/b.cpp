#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    int kase;
    cin >> kase;

    while (kase--) {
        long long n, m;
        cin>>n>>m;

        m = m * 6 * 6;
        // cout << m << " - ";
        if (n <= m) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}