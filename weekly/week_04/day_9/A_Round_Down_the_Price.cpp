#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int m;
        cin >> m;

        int len = size(to_string(m)) - 1;
        int n   = 1;

        while (len--) {
            n = n * 10;
        }

        cout << m - n << endl;
    }

    return 0;
}