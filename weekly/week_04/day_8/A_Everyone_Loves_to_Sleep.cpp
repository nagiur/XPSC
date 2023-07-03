#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int h, m, n;
        cin >> n;
        cin >> h >> m;

        int time = (60 * h) + m;
        int res  = 24 * 60;
        int t;

        for (size_t i = 0; i < n; i++) {
            cin >> h >> m;
            t = 60 * h + m - time;
            if (t < 0) {
                t += 24 * 60;
            }
            res = min(res, t);
        }
        cout << res / 60 << " " << res % 60 << endl;
    }

    return 0;
}