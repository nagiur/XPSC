#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl
#define lnwd cerr << endl

int main() {
    int kase;
    cin >> kase;

    int n, m;

    while (kase--) {
        cin >> n >> m;

        int board[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }


        int maxx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int sum = 0;
                int ii = i, jj = j;

                while (ii >= 0 && ii < n && jj >= 0 && jj < m) {
                    sum += board[ii][jj];
                    ii--;
                    jj--;
                }

                ii = i, jj = j;
                while (ii >= 0 && ii < n && jj >= 0 && jj < m) {
                    sum += board[ii][jj];
                    ii++;
                    jj--;
                }

                ii = i, jj = j;
                while (ii >= 0 && ii < n && jj >= 0 && jj < m) {
                    sum += board[ii][jj];
                    ii--;
                    jj++;
                }

                ii = i, jj = j;
                while (ii >= 0 && ii < n && jj >= 0 && jj < m) {
                    sum += board[ii][jj];
                    ii++;
                    jj++;
                }


                sum -= 3*board[i][j];
                maxx = max(maxx, sum);

                // watch(maxx);
                // watch(sum);
            }
            // lnwd;
        }

        cout << maxx << endl;
    }

    return 0;
}