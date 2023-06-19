#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, q;
        cin >> n >> q;

        vector<int> candies(n);
        vector<int> prefix_sum(n);

        for (auto &can : candies) {
            cin >> (can);
        }

        sort(candies.rbegin(), candies.rend());

        for (size_t i = 0; i < n; i++) {
            prefix_sum[i] = (i ? prefix_sum[i - 1] : 0) + candies[i];
        }

        for (auto ps : prefix_sum) {
            watch(ps);
        }

        long long in;
        while (q--) {
            cin >> in;

            int coutn = -1;
            int l = 1, r = n;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (prefix_sum[mid - 1] >= in) {
                    coutn = mid;
                    r     = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << coutn << endl;
        }
    }

    return 0;
}