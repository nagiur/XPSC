#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n;
        cin >> n;

        if (n & (n - 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n" ;
        }
    }

    return 0;
}