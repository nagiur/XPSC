#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    int n;
    while (kase--) {
        string str, bi;
        int n;
        cin >> n;
        cin >> str;

        bi = str;
        unordered_map<char, bool> mp;
        char bl = '0';

        for (int c = 0; c < n; c++) {
            char ch = str[c];
            if (mp[ch] == false) {
                mp[ch] = true;
                cout << "bl: " <<ch<<" - " << bl << endl;

                for (int i = 0; i < n; i++) {
                    if (str[i] == ch) {
                        bi[i] = bl;
                    }
                }

                if (bl == '0') {
                    bl = '1';
                } else if (bl == '1') {
                    bl = '0';
                }
            }

            // cout << str << endl;
            cout << bi << endl;
        }
        cout << endl;
    }

    return 0;
}

// 010101 101010
