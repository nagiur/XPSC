#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, x;
        cin >> n;
        int mi_sum = 0, bi_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x % 2 == 0) {
                mi_sum += x;
            } else {
                bi_sum += x;
            }
        }
        // cout << mi_sum << " " << bi_sum << endl;
        if (mi_sum > bi_sum) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}