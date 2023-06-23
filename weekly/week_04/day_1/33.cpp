#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n;
        cin >> n;
        unordered_map<string, long long> track;

        for (long long i = 0; i < n; i++) {
            string in;
            cin >> in;
            track[in]++;
        }

        cout << track["O"] + max(track["A"], track["B"]) + track["AB"] << endl;
    }

    return 0;
}