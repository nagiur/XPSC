#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, m;

        cin >> n >> m;

        float nn = n - (n * 0.10);
        // cout << nn << " ";

        if (nn < m) {
            cout << "ONLINE\n";
        } else if (nn > m) {
            cout << "DINING\n";
        } else {
            cout << "EITHER\n";
        }
    }

    return 0;
}