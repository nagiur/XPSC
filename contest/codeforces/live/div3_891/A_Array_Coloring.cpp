#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (auto &v : nums) cin >> v;
        sort(nums.begin(), nums.end());

        // for (auto v : nums) cout << v << " ";
        // cout << endl;

        vector<int> prefixSum(nums.size());
        prefixSum[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        // for (auto v : prefixSum) cout << v << " ";
        // cout << endl;

        int l = 0, r = 0;
        bool f = false;
        for (int i = n - 1; i >= 0; i--) {
            r += nums[i];
            l = prefixSum[n - 1] - r;

            // cout << l << " - " << r << endl;

            if ((r % 2 == 1) && (l % 2 == 1)) {
                f = true;
                break;
            } else if ((r % 2 == 0) && (l % 2 == 0)) {
                f = true;
                break;
            }
        }

        if (f) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}