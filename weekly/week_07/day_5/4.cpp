#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, in;
        cin >> n;

        vector<int> ops(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> in;
            ops[in]++;
        }
        sort(ops.begin(), ops.end());

        cout << (n - ops[n]) << endl;
    }

    return 0;
}