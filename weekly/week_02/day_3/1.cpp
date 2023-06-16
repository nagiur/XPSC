#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int k;
            cin >> k;
            cout << ans << " " << k - i << endl;

            ans = max(ans, k - i);
        }
        cout << ans << '\n';
        cout<<"\n";
    }
    return 0;
}