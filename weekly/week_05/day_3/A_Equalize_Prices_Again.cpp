#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        int sum = 0;

        for (size_t i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        cout << (sum + n - 1) / n << endl;
    }

    return 0;
}