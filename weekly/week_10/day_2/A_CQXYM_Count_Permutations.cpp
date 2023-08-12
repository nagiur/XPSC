#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n, cnt = 1;
        cin >> n;
        n = 2 * n;

        for (size_t i = 3; i <= n; i++) {
            cnt = cnt * i;
            cnt = cnt % 1000000007;
        }
        cout << cnt << endl;
    }

    return 0;
}