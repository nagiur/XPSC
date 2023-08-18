#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<long long> vec(n);
        for (auto &v : vec) cin >> v;

        long long xor_cnt = 0;
        for (auto v : vec) xor_cnt ^= v;

        // cout<<"H: "<<xor_cnt<<endl;

        if (xor_cnt == 0) {
            cout << 0 << endl;
        } else {
            if (n % 2 == 1) {
                cout << xor_cnt << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}