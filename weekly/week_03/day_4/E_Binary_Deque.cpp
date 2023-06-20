#include <bits/stdc++.h>

using namespace std;

// Problem: Find the Pair Whose sum is equal to x

#define lb cerr << "============" << endl
#define watch(x) cerr << (#x) << " - " << (x) << endl
#define wln cerr << endl;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, s;
        cin >> n >> s;

        vector<int> nums(n);
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            total += nums[i];
        }

        int left  = 0;
        int right = n - 1;
        int cnt   = 0;
        watch(s);
        lb;

        if (s > total) {
            cout << "-1\n";
            continue;
        }

        while (left < right) {
            // while (s <= total) {
            if (total == s) {
                break;
            } else if (nums[left] > nums[right]) {
                total -= nums[left];
                left++;
                watch("L");
            } else {
                total -= nums[right];
                right--;
                watch("R");
            }
            cnt++;

            // cout << total << endl;
            watch("---");
            watch(cnt);
            watch(total);
        }

        wln;
        cout << cnt << endl;
    }

    return 0;
}