#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    long long coutn = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            coutn++;
        }
    }

    cout << coutn << endl;

    return 0;
}