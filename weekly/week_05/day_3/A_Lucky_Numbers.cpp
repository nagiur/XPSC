#include <bits/stdc++.h>

using namespace std;
int findLuckyNumber(int l, int r) {
    if (r - l >= 100) {
        int k = l + (90 - (l % 100));
        return k;
    } else {
        for (int i = l; i <= r; i++) {
            if (i % 10 == 9) {
                return i;
            }
        }
    }
    return -1; 
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int l, r;
        cin >> l >> r;
        cout << findLuckyNumber(l, r) << endl;
    }

    return 0;
}