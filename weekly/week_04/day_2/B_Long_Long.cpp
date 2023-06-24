#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n, opt = 0, sum = 0, in;
        cin >> n;
        bool flag = false;

        for (long long i = 0; i < n; i++) {
            cin >> in;
            sum += abs(in);
            if (in < 0 and !flag) {
                opt++;
                flag = true;
            }

            if (in > 0) {
                flag = false;
            }
        }

        cout << sum << " " << opt << endl;
    }

    return 0;
}