#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b) == c) {
            cout << "+\n";
        } else {
            cout << "-\n";
        }
    }

    return 0;
}