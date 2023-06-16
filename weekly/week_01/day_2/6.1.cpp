#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

// Problem: Counting Elements

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vi nums(n);
    vi feq(1000+9, 0);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        feq[nums[i]]++;
    }

    // sort(nums.begin(), nums.end());
    // for (int i = 0; i < n; i++) {
    //     cout << feq[i] << " ";
    // }
    // cout << endl;

    int coutn = 0;

    for (int i = 0; i < n; i++) {
        int n_val = 1 + nums[i];
        if (feq[n_val]) {
            // cout << n_val << endl;
            coutn++;
        }
    }
    // cout << endl;
    cout << coutn << endl;
    return 0;
}