#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        n = n + 1;
        vector<long long> vec(n);
        for (int i = 1; i <= n; i++) {
            cin >> vec[i];
        }

        int len_1 = 1;
        int len_2 = 1;

        while (len_1 < n && (vec[len_1] <= vec[len_1 + 1])) {
            len_1++;
        }

        while (len_2 < n && (vec[n - len_2] >= vec[n - len_2 + 1])) {
            len_2++;
        }

        // cout << len_1 << " " << len_2 << endl;
        if (len_1 + len_2 >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}