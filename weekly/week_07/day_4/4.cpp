#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long x, y;
        cin >> x >> y;

        if (y % 2 == 1) {
            y++;
        }

        if (x % 2 == 0) {
            cout << (y - x) / 2 << endl;
        } else if (x == 9) {
            cout << (y - (x + 3)) / 2 + 1 << endl;
        } else {
            cout << (y - (2 * x)) / 2 + 1 << endl;
        }
    }

    return 0;
}