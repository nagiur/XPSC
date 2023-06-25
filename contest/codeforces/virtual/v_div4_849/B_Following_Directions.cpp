#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        
        string str;
        cin >> str;


        bool found = false;
        int i = 0, j = 0;
        for (char ch : str) {
            if (ch == 'U') {
                i++;
            } else if (ch == 'D') {
                i--;
            } else if (ch == 'L') {
                j--;
            } else if (ch == 'R') {
                j++;
            }

            if (i == 1 && j == 1) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}