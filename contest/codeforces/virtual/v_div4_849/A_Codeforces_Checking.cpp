#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;
    unordered_map<char, bool> mp;
    mp['c'] = true;
    mp['o'] = true;
    mp['d'] = true;
    mp['e'] = true;
    mp['f'] = true;
    mp['o'] = true;
    mp['r'] = true;
    mp['c'] = true;
    mp['e'] = true;
    mp['s'] = true;

    while (kase--) {
        char ch;
        cin >> ch;

        if (mp[ch]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}