#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<long long> om(n + 1), addy(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> om[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> addy[i];
        }

        int cnt_om = 0, cnt_addy = 0, cnt = 0;
        
        for (int i = 1; i <= n; i++) {
            if (om[i] == 0) {
                cnt_om = max(cnt, cnt_om);
                cnt    = 0;
            } else {
                cnt++;
            }
        }
        cnt_om = max(cnt, cnt_om);

        cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (addy[i] == 0) {
                cnt_addy = max(cnt, cnt_addy);
                cnt      = 0;
            } else {
                cnt++;
            }
        }
        cnt_addy = max(cnt, cnt_addy);

        // cout << cnt_addy << " : " << cnt_om << endl;
        // cout << max(cnt_addy, cnt_om) << endl;

        if (cnt_om > cnt_addy) {
            cout << "Om\n";
        } else if (cnt_om < cnt_addy) {
            cout << "Addy\n";
        } else {
            cout << "Draw\n";
        }
    }

    return 0;
}