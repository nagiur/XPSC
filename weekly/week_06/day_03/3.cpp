#include <bits/stdc++.h>

using namespace std;

int scoreFind(vector<int> &vec, int &n) {
    int score = 0;

    for (int i = 0; i < n - 1; i++) {
        if (vec[i] != vec[1 + i]) {
            score++;
        }
    }

    return score;
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int score = scoreFind(arr, n);

        vector<int> crr(n, 0);

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                crr[i] = 1;
            } else if (arr[i] == 1) {
                crr[i] = 0;
            }
        }

        for (int a : crr) {
            cout << a << " ";
        }

        cout << endl;
    }

    return 0;
}