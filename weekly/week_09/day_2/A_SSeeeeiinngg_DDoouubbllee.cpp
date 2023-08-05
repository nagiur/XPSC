#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str, rev_str;
        cin >> str;
        rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        cout << rev_str << str << endl;
    }

    return 0;
}