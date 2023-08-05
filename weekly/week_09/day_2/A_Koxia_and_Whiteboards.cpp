#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n + m);

        for (auto &e : a) {
            cin >> e;
        }

        sort(a.begin(), a.end() - 1);
        reverse(a.begin(), a.end());

        long long sum = 0;
        for (size_t i = 0; i < n; i++) {

            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}
