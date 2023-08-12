#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        long long h;
        cin >> n >> h;

        vector<long long> vec(n);
        for (auto &v : vec) cin >> v;

        sort(vec.rbegin(), vec.rend());
        int times = 0;

        long long sum = vec[0] + vec[1];

        if (h % sum == 0) {
            times = 2 * (h / sum);
        } else if (h % sum <= vec[0]) {
            times = 2 * (h / sum) + 1;

        } else {
            times = 2 * (h / sum) + 2;
        }

        cout << times << endl;
    }

    return 0;
}