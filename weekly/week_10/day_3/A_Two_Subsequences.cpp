#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;

        string s = str;
        sort(str.begin(), str.end());

        char ch = str[0];
        int idx = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ch) {
                idx = i;
                break;
            }
        }

        cout << ch << " ";
        s.substr(0,idx);
        cout << s.substr(0,idx) << s.substr(1+idx)<<endl;
    }

    return 0;
}