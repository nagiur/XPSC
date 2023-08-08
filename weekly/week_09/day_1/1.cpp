#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, long long> cnt;
    for (size_t i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
    }

    for (size_t i = 1; i <= n; i++) {
        cout << cnt[i] << " ";
    }
    cout << endl;
    long long sum = 0, ans = 0;

    for (auto [idx, val] : cnt) {
        sum += val;
        ans = max(ans, sum);
        cout << idx << " " << val << endl;
    }
cout<<endl;
    cout << sum << " " << ans << endl;
    return 0;
}