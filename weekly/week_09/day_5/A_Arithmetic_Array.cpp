#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (auto &v : vec) cin >> v;

        int sum = 0;
        for (auto v : vec) sum += v;

        if (sum == n) {
            cout << 0 << endl;
        } else if (sum < n) {
            cout << 1 << endl;
        } else {
            cout << sum - n << endl;
        }
    }

    return 0;
}