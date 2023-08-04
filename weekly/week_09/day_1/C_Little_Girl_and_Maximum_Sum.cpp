#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> vec(n);

    for (size_t i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l, r;
    for (size_t i = 0; i < q; i++) {
        cin >> l >> r;
        l--;
        r--;
        vec[l]++;
        if (r < n - 1) {
            vec[r + 1]--;
        }
    }
    int val = 0;
    for (size_t i = 0; i < n; i++) {
        val += vec[i];
        b[i] = val;
    }

    sort(b.begin(), b.end());
    long long ans = 0;
    for (size_t i = 0; i < n; i++) {
        ans += (b[i] * a[i]);
    }
    cout << ans << endl;

    return 0;
}