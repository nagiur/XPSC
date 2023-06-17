#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;

    int kase;
    cin >> kase;

    while (kase--) {
        cin >> a >> b >> c >> d;

        int reuslt = (b > a) + (c > a) + (d > a);

        cout << reuslt << endl;
    }

    return 0;
}