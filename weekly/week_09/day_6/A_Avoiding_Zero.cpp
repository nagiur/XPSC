#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        int sum = 0;
        for (auto &v : vec) cin >> v;

        for (auto v : vec) sum += v;

        if (sum == 0) {
            cout << "NO\n";
            continue;
        }

        cout << "Yes" << endl;
        if (sum > 0) {
            vector<int> prefixsum(n);
            prefixsum[0] = vec[0];
            cout << prefixsum[0] << " ";
            for (size_t i = 1; i < n; i++) {
                prefixsum[i] = prefixsum[i - 1] + vec[i];
                cout << prefixsum[i] << " ";
            }
        } else {
            for (auto v : vec) cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}