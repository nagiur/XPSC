#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> vec(n);
    long long signed int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        ans ^= vec[i];
        // ans = ans | vec[i];
    }

    cout << ans << endl;

    return 0;
}