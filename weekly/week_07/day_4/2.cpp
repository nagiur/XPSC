#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int a, b;
        cin >> a >> b;

        a = 100 - a;
        b = 200 - (2 * b);

        // cout << a << " " << b << endl;

        if (a < b) {
            cout << "FIRST\n";
        } else if (a > b) {
            cout << "SECOND\n";
        } else {
            cout << "BOTH\n";
        }
    }

    return 0;
}