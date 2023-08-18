#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (auto &v : vec) cin >> v;

        long long result = 0, total;
        for (int i = 29; i >= 0; i--) {
            total = 0;
            for (int j = 0; j < n; j++) {
                if (vec[j] >= (1 << i) && vec[j] < (1 << (i + 1))) total++;
            }
            result += total * (total - 1) / 2;
        }
        cout << result << endl;
    }

    return 0;
}
