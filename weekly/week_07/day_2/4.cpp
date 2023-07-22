#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> num(n);

        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }

        int minn = INT_MAX;
        for (int i = 1; i < n; i++) { 
            int val = abs(num[i - 1] - num[i]);
            minn    = min(minn, val);
        }


        cout << minn << endl;
    }

    return 0;
}