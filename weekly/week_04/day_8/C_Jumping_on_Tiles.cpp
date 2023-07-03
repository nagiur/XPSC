#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;

        int len = str.size();
        map<char, vector<int>> track;
        vector<int> res;

        for (size_t i = 0; i < len; i++) {
            track[str[i]].push_back(i);
        }

        int direction = (str[0] < str[len - 1]) ? 1 : -1;

        for (char i = str[0]; i != (str[len - 1] + direction); i += direction) {
            for (auto t : track[i]) {
                res.push_back(t);
            }
        }

        int cost = 0;
        for (int i = 1; i < res.size(); i++) {
            cost += abs(str[res[i]] - str[res[i - 1]]);
        }

        cout << cost << " " << res.size() <<endl;
        for (auto r : res) {
            cout << r + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}