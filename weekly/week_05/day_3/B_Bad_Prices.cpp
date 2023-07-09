#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        vector<int> prices(n);

        for (int i = 0; i < n; i++) {
            cin >> prices[i];
        }

        int cnt  = 0;
        int minn = INT_MAX;

        for (int i = n - 1; i >= 0; i--) {
            if (prices[i] > minn) {
                cnt++;
            }
            minn = min(minn, prices[i]);
        }

        cout << cnt << endl;
    }
    return 0;
}