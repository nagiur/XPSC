#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, k;
        cin >> n >> k;

        int total = n - (n % k);
        total += min(n % k, k / 2);
        cout << total << endl;
    }

    return 0;
}