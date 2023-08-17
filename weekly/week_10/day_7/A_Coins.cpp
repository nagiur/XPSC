#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, k;
        cin >> n >> k;


        if (!(n & 1))
            cout << "YES\n";
        else if (n % k == 0)
            cout << "YES\n";
        else if ((n - k) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";

        // bool get = false;
        // if (!(n & 1) || (n % k == 0 || (n - k) % 2 == 0)) {
        //     get = true;
        // }

        // if (get) {
        //     cout << "YES\n";
        // } else {
        //     cout << "NO\n";
        // }
    }

    return 0;
}
