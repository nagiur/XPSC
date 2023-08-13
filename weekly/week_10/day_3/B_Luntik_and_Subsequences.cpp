#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        int x;
        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 0) a++;
            if (x == 1) b++;
        }

        cout << (1ll << a) * b << endl;
    }

    return 0;
}