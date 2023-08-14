#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        int result = 0, x;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            result = max(result, x - i);
        }
        cout << result << endl;
    }

    return 0;
}