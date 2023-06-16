#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, in;
    cin >> n >> x;

    vector<int> nums;

    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in != x) {
            nums.push_back(in);
        }
    }

    for (auto i : nums) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}