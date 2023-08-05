#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, k;
        cin >> n >> k;

        vector<int> vec(n);
        int r = n;
        int l = 1;
        for (size_t i = 0; i < n; i++) {
            if (i % 2 == 0) {
                vec[i] = r;
                r--;
            } else {
                vec[i] = l;
                l++;
            }
        }
        for (auto v : vec) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}