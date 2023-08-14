#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        cout << ((a1 + a3 - 2 * a2) % 3 != 0) << endl;
    }

    return 0;
}