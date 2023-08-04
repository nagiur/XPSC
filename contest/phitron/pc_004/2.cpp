#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    long long mx    = nums[n - 1];
    long long abs_d = 0;
    int coin        = 0;
    
    for (int i = 0; i < n; i++) {
        abs_d = mx - nums[i];
        // cout << abs_d << endl;

        if ((abs_d) % 2 != 0) {
            nums[i] = nums[i] + abs_d;
        }
    }

    // cout << mx;
    // cout << endl;
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << endl;
    cout << coin << endl;

    return 0;
}