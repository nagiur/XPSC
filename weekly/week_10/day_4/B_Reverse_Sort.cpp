#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        string str;
        cin >> n;
        cin >> str;

        string str_s = str;
        sort(str_s.begin(), str_s.end());

        vector<int> vec;
        for (int i = 0; i < n; i++) {
            if (str[i] != str_s[i]) {
                vec.push_back(i + 1);
            }
        }

        if (vec.size() == 0) {
            cout << "0\n";
        } else {
            cout << "1\n";
            cout << vec.size() << " ";
            for (int v : vec) {
                cout << v << " ";
            }
            cout << endl;
        }
    }

    return 0;
}