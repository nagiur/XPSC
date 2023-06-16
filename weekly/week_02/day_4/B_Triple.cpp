#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, in;
        cin >> n;
        vector<int> arr(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> in;
            arr[in]++;
        }

        bool found = false;
        for (int i = 0; i <= n; i++) {
            if (arr[i] >= 3) {
                cout << i << " ";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}
