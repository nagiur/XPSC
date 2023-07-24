#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long x, y;
        cin >> x >> y;

        long long d = abs(x - y);

        if (d >= 2) {
            if (x > y) {
                cout << "Chef";
            } else {
                cout << "Chefina";
            }
        } else {
            if (x == y) {
                if (x % 2) {
                    cout << "Chef";
                } else {
                    cout << "Chefina";
                }
            } else {
                if ((min(x, y)) % 2) {
                    cout << "Chef";
                } else {
                    cout << "Chefina";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}