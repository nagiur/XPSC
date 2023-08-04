#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        float cur;
        if (n < 50) {
            cur = 50 - n;
            cout << cur << endl;
            int time = 0;
            while (true) {
                if (cur > 50) {
                    break;
                }

                cur += (cur * 0.02);
                cout << cur * 0.02 << " " << cur << endl;
                time++;
            }

            cout << time << endl;
        }

        /*
            1 ... 2
            2 ...


        */
    }

    return 0;
}