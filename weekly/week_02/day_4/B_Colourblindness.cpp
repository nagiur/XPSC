#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        string str1, str2;
        cin >> str1;
        cin >> str2;

        for (int i = 0; i < n; i++) {
            if (str1[i] == 'B') {
                str1[i] = 'G';
            }

            if (str2[i] == 'B') {
                str2[i] = 'G';
            }
        }

        string res = (str1 == str2) ? "YES" : "NO";
        cout << res;
        cout << endl;
    }

    return 0;
}