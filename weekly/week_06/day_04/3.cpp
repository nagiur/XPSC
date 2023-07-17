#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;

        int a = 10 * (str[0] - '0') + (str[1] - '0');
        int b = 10 * (str[3] - '0') + (str[4] - '0');
        // cout << a << " " << b << endl;

        if (a > 12 and b <= 12) {
            cout << "DD/MM/YYYY\n";
        } else if (a <= 12 and b > 12) {
            cout << "MM/DD/YYYY\n";
        } else {
            cout << "BOTH\n";
        }
    }

    return 0;
}