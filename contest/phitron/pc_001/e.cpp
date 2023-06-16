#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, in;
        cin >> n;
        vector<int> arr(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> in;
            arr[i] = in % 2;
        }
        // // cout<<endl;
        // for (auto a : arr) {
        //     // cout << a << " ";
        // }
        // // cout << endl;

        int zeros = 0;
        int one   = 0;
        for (auto a : arr) {
            if (a == 0) {
                zeros++;
            }
            if (a == 1) {
                one++;
            }
        }
        if (n == zeros || n == one) {
            cout << "Yes\n";
            continue;
        }

        int flag = true;
        if (arr[0] == 0) {
            int track = 0;
            for (int i = 1; i < n; i++) {
                if (arr[i] == track) {
                    cout << "No\n";
                    break;
                }
                track = arr[i];
            }
            cout << "Yes\n";
        } else if (arr[0] == 1) {
            int track = 1;
            for (int i = 1; i < n; i++) {
                if (arr[i] == track) {
                    cout << "No\n";
                    break;
                }
                track = arr[i];
            }
            cout << "Yes\n";
        }
    }

    return 0;
}