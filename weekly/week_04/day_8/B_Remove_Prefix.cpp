#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int found = 0;
        set<int> track;
        for (int i = n - 1; i >= 0; i--) {
            if (track.count(nums[i])) {
                found = i + 1;
                break;
            }
            track.insert(nums[i]);
        }

        cout << found << endl;
    }

    return 0;
}