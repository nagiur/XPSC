#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec_a(n + 1);
        vector<int> vec_b(n + 1);

        for (int v = 1; v <= n; v++) cin >> vec_a[v];
        for (int v = 1; v <= n; v++) cin >> vec_b[v];

        int maxx  = INT_MIN;
        int total = 0;
        for (int i = 1; i <= n; i++) {
            maxx = max(maxx, vec_a[i] - vec_b[i]);
        }

        for (int i = 1; i <= n; i++) {
            total += (vec_a[i] - vec_b[i] == maxx);
        }
        cout << total << endl;

        for (int i = 1; i <= n; i++) {
            if (vec_a[i] - vec_b[i] == maxx) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
