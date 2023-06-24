#include <bits/stdc++.h>

using namespace std;

void accum(int l, int r, long long k, vector<long long> arr) {
    long long sum = 0;
    long long b_sum = 0, q_sum = 0, a_sum = 0;
    
    for (size_t i = 1; i < l; i++) {
        b_sum += arr[i];
    }

    q_sum = (r - l - 1) * k;

    for (size_t i = r + 1; i < arr.size(); i++) {
        a_sum += arr[i];
    }

    sum = b_sum + q_sum + a_sum;
    if (sum % 2 == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, q;
        cin >> n >> q;

        vector<long long> num(n + 1);
        for (size_t i = 1; i <= n; i++) {
            cin >> num[i];
        }

        int l, r;
        long long k;

        while (q--) {
            cin >> l >> r >> k;
            accum(l, r, k, num);
        }
    }

    return 0;
}