#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long sum = 0, x;

        cin >> x;
        sum += x;
        cin >> x;
        sum += 2 * x;
        cin >> x;
        sum += 3 * x;

        cout << sum % 2 << endl;
    }

    return 0;
}