#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int x;
        cin >> x;

        if (x <= 3) {
            cout << "BRONZE\n";
        } else if (x > 3 and x <= 6) {
            cout << "SILVER\n";
        } else if (x > 6) {
            cout << "GOLD\n";
        }
    }

    return 0;
}