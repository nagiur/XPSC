#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;

    cin >> n;

    int cnt = 0;
    for (size_t i = 0; i < n; i++) {
        cin >> x;
        cnt += x & 1;
        // cout << cnt << " ";
    }
    cout << min(cnt, n - cnt);
    cout << endl;

    return 0;
}