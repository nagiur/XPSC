#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, a, b, sum = 0;
        cin >> n >> a >> b;
        for (size_t i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                sum += a;
            } else {
                sum += b;
            }
        }

        cout << sum << endl;
    }

    return 0;
}