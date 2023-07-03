#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    int a, b, c, res;
    while (kase--) {
        cin >> a >> b >> c;

        int left_1 = abs(a - 1);
        int left_2 = abs(b - c) + abs(c - 1);

        if (left_1 < left_2) {
            res = 1;
        } else if (left_1 > left_2) {
            res = 2;
        } else {
            res = 3;
        }

        cout << res << endl;
    }

    return 0;
}