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

        bool yes = false;
        if (n % 2 == 0) {
            yes = true;
        } else {
            for (int i = 1; i < n; i++) {
                if (vec[i] <= vec[i - 1]) {
                    yes = true;
                    break;
                }
            }
        }

        if (yes) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}