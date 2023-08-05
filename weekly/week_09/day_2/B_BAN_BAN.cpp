#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        cout << n / 2 + n % 2 << endl;
        int left  = 1;
        int right = 3 * n;
        while (left < right) {
            cout << left << " " << right << endl;
            left += 3;
            right -= 3;
        }
    }

    return 0;
}