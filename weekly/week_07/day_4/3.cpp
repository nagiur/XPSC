#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        for (int i = n; i >= 2; i -= 2) {
            cout << i << " ";
        }

        for (int i = 1; i <= n - 1; i += 2) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}