#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        bool bl = false;
        int cnt = 0, in;

        for (int i = 0; i < n; i++) {
            cin >> in;
            if (in == 0) {
                cnt++;
            } else if (in >= 2) {
                bl = true;
            }
        }

        if (cnt <= (n + 1) / 2) {
            cout << "0\n";
        } else if (bl || cnt == n) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }

    return 0;
}