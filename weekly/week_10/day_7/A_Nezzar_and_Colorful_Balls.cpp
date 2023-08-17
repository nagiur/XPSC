#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 1; i <= n; i++) {
            vec[i] = 0;
        }
        int x;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            vec[x]++;
        }

        int maxx = 0;
        for (int i = 1; i <= n; i++) {
            maxx = max(maxx, vec[i]);
        }

        cout << maxx << endl;
    }

    return 0;
}