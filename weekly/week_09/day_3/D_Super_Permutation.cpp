#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "1" << endl;
            continue;
        }

        if (n % 2 == 1) {
            cout << "-1" << endl;
            continue;
        }

        vector<int> prefix_sum;
        for (size_t i = 0; i < n; i++) {
            if (i % 2 == 1) {
                cout << i << " ";
                prefix_sum.push_back(i);
            } else {
                cout << n - i << " ";
                prefix_sum.push_back(n - i);
            }
        }
        cout << endl;

        // for (size_t i = 1; i < prefix_sum.size(); i++) {
        //     prefix_sum[i] = prefix_sum[i - 1] + prefix_sum[i];
        // }
        // cout << endl;
        // for (auto x : prefix_sum) {
        //     cout << 1 + (x % n) << " ";
        // }
        // cout << endl;
    }

    return 0;
}
