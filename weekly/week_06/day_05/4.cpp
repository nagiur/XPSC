#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, m;

        cin >> n >> m;

        m = m * 6 * 6;
        if (m >= n) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}