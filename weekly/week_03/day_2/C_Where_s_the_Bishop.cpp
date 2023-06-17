#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        char board[9][9];

        for (size_t i = 0; i < 8; i++) {
            for (size_t j = 0; j < 8; j++) {
                cin >> board[i][j];
            }
        }

        bool found = false;
        for (size_t i = 0; i <= 7; i++) {
            for (size_t j = 0; j <= 7; j++) {
                if (board[i][j] == '#' && board[i - 1][j - 1] == '#' && board[i - 1][j + 1] == '#' && board[i + 1][j - 1] == '#' && board[i + 1][j + 1] == '#') {
                    cout << 1 + i << " " << 1 + j << endl;
                    found = true;
                    break;
                }
                watch(j);
            }
            if (found) {
                break;
            }
            watch(i);
        }
    }

    return 0;
}