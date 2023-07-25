#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int x, y, h, a;

        cin >> h >> x >> y;

        if (y >= h) {
            a = 1;
        }
        a = ceil((h - y) / (x * 1.0)) + 1;

        cout << a << endl;
    }

    return 0;
}