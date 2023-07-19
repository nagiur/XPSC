#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;

        cin >> n;
        vector<long long> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());

        cout << nums[nums.size() - 1] + nums[nums.size() - 2] << endl;
    }

    return 0;
}