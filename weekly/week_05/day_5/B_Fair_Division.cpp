#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        int total_1 = 0;
        int total_2 = 0;
        int in      = 0;

        for (size_t i = 0; i < n; i++) {
            cin >> in;

            if (in == 1) {
                total_1++;
            } else {
                total_2++;
            }
        }


        if ((total_1 + 2 * total_2) % 2 != 0) {
            cout << "NO\n";
        } else {
            int mid = (total_1 + 2 * total_2) / 2;
            if (mid % 2 == 0 || (mid % 2 == 1 && total_1 != 0)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}