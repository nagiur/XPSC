#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, total = 0;
        string str;

        cin >> n;
        cin >> str;

        stack<char> stk;

        for (char ch : str) {
            if (!stk.empty() && stk.top() != ch) {
                stk.pop();
                total++;
            } else {
                stk.push(ch);
            }
        }

        if (total % 2 == 0) {
            cout << "Ramos\n";
        } else {
            cout << "Zlatan\n";
        }
    }

    return 0;
}