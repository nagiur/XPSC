#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, b;
        cin >> n >> b;

        vector<int> vec(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> vec[i];
        }

        bool found = false;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (vec[i] != vec[j]) {
                    if ((vec[i] & vec[j]) == b) {
                        // cout << (vec[i] & vec[j]) << "\n";
                        found = true;
                        break;
                    }
                }
            }
        }

        if (found) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}