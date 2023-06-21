#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int row, col;
        cin >> row >> col;

        char mtx[row][col];
        char ch;

        for (size_t i = 0; i < row; i++) {
            for (size_t j = 0; j < col; j++) {
                cin >> mtx[i][j];
            }
        }

        for (int i = 0; i < col; i++) {
            int point = row - 1;
            for (int j = row - 1; j >= 0; j--) {
                if (mtx[j][i] == 'o') {
                    point = j - 1;
                } else if (mtx[j][i] == '*') {
                    swap(mtx[j][i], mtx[point][i]);
                    point--;
                }
            }
        }

        for (size_t i = 0; i < row; i++) {
            for (size_t j = 0; j < col; j++) {
                cout << mtx[i][j];
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
