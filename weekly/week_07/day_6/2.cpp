#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int x, y;
        cin >> x >> y;

        if (y <= (x * 5)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}