#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;

        if ((str[0] - '0') % 2 == 0) {
            cout << "1\n";
            continue;
        }

        if ((str.back() - '0') % 2 == 0) {
            cout << "0\n";
            continue;
        }

        int count_2 = count(str.begin(), str.end(), '2');
        int count_4 = count(str.begin(), str.end(), '4');
        int count_6 = count(str.begin(), str.end(), '6');
        int count_8 = count(str.begin(), str.end(), '8');

        if (count_2 > 0 || count_4 > 0 || count_6 > 0 || count_8 > 0) {
            cout << "2\n";
            continue;
        }

        cout << "-1\n";
    }

    return 0;
}