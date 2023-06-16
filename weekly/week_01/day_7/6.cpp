#include <bits/stdc++.h>
using namespace std;

int Balloons(string s) {
    int balloons = 0;
    set<char> seen;
    for (char c : s) {
        if (seen.count(c) == 0) {
            balloons += 2;
            seen.insert(c);
        } else {
            balloons++;
        }
    }
    return balloons;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        cout << Balloons(str) << endl;
    }
    return 0;
}
