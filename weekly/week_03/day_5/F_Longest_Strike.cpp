#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, k;
        cin >> n >> k;

        vector<int> vec(n), sub_arr;
        map<int, int> feq;
        for (size_t i = 0; i < n; i++) {
            cin >> vec[i];
            feq[vec[i]]++;
        }

        for (auto f : feq) {
            if (f.second >= k) {
                sub_arr.push_back(f.first);
            }
        }

        if (sub_arr.size() == 0) {
            cout << -1 << endl;
            continue;
        }

        sort(sub_arr.begin(), sub_arr.end());

        int maxx = 0, l = sub_arr[0];
        int left  = sub_arr[0];
        int right = sub_arr[0];

        for (int i = 1; i < sub_arr.size(); i++) {
            if (sub_arr[i] - 1 == sub_arr[i - 1]) {
                if (sub_arr[i] - l > maxx) {
                    left  = l;
                    right = sub_arr[i];
                    maxx  = sub_arr[i] - 1;
                }

            } else {
                l = sub_arr[i];
            }
        }

        cout << left << " " << right << endl;
    }

    return 0;
}