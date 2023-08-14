#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        long long sum = 0;
        for (auto &v : vec) {
            cin >> v;
            sum += v;
        }

        if (sum >= n) {
            cout << sum - n << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}