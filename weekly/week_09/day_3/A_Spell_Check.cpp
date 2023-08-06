#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string timur = "Timur";
        int n;
        string str;
        cin >> n >> str;

        sort(timur.begin(), timur.end());
        sort(str.begin(), str.end());

        if (str == timur) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}