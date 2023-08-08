#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, a, b;
        cin >> n;

        cin >> a >> b;
        int x = n / 2;
        int y = x + 1;

        if (a > y || b < x) {
            cout << "-1" << endl;
        } else if ((a == y && b != x) || (b == x && a != y)) {
            cout << "-1" << endl;
        } else {
            cout << a << " ";
            for (size_t i = y; i <= n; i++) {
                if (i == b || i == a) {
                    continue;
                }
                cout << i << " ";
            }
            cout << b << " ";
            for (size_t i = 1; i <= x; i++) {
                if (i == a || i == b) {
                    continue;
                }
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
