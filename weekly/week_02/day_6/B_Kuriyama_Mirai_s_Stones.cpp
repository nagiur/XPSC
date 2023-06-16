#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> vec(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> vec[i];
    }

    vector<long long> unsorted_sum(n + 1);
    vector<long long> sorted_sum(n + 1);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            unsorted_sum[i] = vec[i];
        } else {
            unsorted_sum[i] = unsorted_sum[i - 1] + vec[i];
        }
    }

    sort(vec.begin(), vec.end());

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sorted_sum[i] = vec[i];
        } else {
            sorted_sum[i] = sorted_sum[i - 1] + vec[i];
        }
    }


    int m, type, left, right;
    cin >> m;

    while (m--) {
        cin >> type >> left >> right;

        long long ans;

        if (type == 1) {
            ans = unsorted_sum[right] - unsorted_sum[left - 1];
        } else if (type == 2) {
            ans = sorted_sum[right] - sorted_sum[left - 1];
        }

        cout << ans << endl;
    }

    return 0;
}