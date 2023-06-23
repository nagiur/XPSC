#include <bits/stdc++.h>

using namespace std;

// Problem: EVacuate to Moon

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n, m, h;
        cin >> n >> m >> h;
        vector<long long> car(n), power(m);

        for (int i = 0; i < n; i++) {
            cin >> car[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> power[i];
        }

        sort(car.rbegin(), car.rbegin() + n);
        sort(power.rbegin(), power.rbegin() + m);


        long long result = 0;
        for (int i = 0, j = 0; i < n && j < m; i++, j++) {
            if (power[j] * h > car[i]) {
                result += car[i];
            } else {
                result += power[j] * h;
            }
        }

        cout << result << endl;
    }

    return 0;
}