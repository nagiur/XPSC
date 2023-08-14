#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (auto &v : vec) cin >> v;

        sort(vec.begin(), vec.end());

        int first, last, minn = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            if (vec[i + 1] - vec[i] < minn) {
                minn  = vec[i + 1] - vec[i];
                first = i;
                last  = i + 1;
            }
        }

        if (n == 2) {
            cout << vec[0] << " " << vec[1] << endl;
        } else {
            for (int i = last; i < n; i++) {
                cout << vec[i] << " ";
            }

            for (int i = 0; i <= first; i++) {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}