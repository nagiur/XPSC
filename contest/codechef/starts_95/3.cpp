#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        string in;
        vector<int> bl;
        for (int i = 0; i < n; i++) {
            cin >> in;
            if (in == "A") {
                bl.push_back(1);
            } else if (in == "B") {
                bl.push_back(2);
            } else if (in == "AB") {
                bl.push_back(3);
            } else if (in == "O") {
                bl.push_back(4);
            }
        }

        sort(bl.begin(), bl.end());

        for (auto b : bl) {
            cout << b << " ";
        }
        
        cout << endl;
    }

    return 0;
}