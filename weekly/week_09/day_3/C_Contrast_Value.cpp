#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n;
        cin >> n;
        vector<long long> a(n);

        for (auto &val : a) {
            cin >> val;
        }

        n       = unique(a.begin(), a.end()) - a.begin();
        int res = n;
        for (int i = 0; i + 2 < n; i++) {
            res -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
            res -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
        }
        cout << res << endl;
    }

    return 0;
}

