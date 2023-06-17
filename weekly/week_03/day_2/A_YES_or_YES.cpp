#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int kase;
    cin >> kase;

    while (kase--) {
        cin >> str;

        for (int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }

        if (str == "yes") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}