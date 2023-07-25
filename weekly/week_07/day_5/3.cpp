#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int happy_day = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= 2 * b[i] && b[i] <= 2 * a[i]) {
                happy_day++;
            }
        }

        cout << happy_day << "\n";
    }

    return 0;
}