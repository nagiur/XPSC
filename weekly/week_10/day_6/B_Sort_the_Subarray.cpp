#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec_1(n);
        vector<int> vec_2(n);
        for (auto &v : vec_1) cin >> v;
        for (auto &v : vec_2) cin >> v;

        int left  = -1;
        int right = -1;
        for (int i = 0; i < n; i++) {
            if (vec_1[i] != vec_2[i]) {
                right = i;
                if (left == -1) {
                    left = i;
                }
            }
        }

        while (left > 0 && vec_2[left - 1] <= vec_2[left]) {
            left--;
        }

        while (right < n - 1 && vec_2[right + 1] >= vec_2[right]) {
            right++;
        }
        cout << left + 1 << " " << right + 1 << endl;
    }

    return 0;
}