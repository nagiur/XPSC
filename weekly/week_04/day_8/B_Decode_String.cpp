#include <bits/stdc++.h>

using namespace std;

char itoch(int n) {
    return 'a' + n - 1;
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        string str, res;

        cin >> n;
        cin >> str;

        n--;
        while (n >= 0) {
            if (str[n] == '0') {
                res += itoch(stoi(str.substr(n - 2, 2)));
                n -= 3;
            } else {
                res += itoch(str[n] - '0');
                n--;
            }
        }
        reverse(res.begin(), res.end());
        cout << res;
        cout << endl;
    }

    return 0;
}