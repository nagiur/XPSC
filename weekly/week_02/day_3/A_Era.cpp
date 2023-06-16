#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        int result = 0;
        for (int i = 1; i <= n; i++) {
            int k;
            cin >> k;
            result = max(result, k - i);
        }
        cout << result << endl;
    }

    return 0;
}