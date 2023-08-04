#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    string str;
    cin >> str;
    int cnt = 0;

    for (int i = 1; i < n; i += 2) {
        if (str[i - 1] == str[i]) {
            str[i - 1] = (str[i] == 'a') ? 'b' : 'a';
            cnt++;
        }
    }

    cout << cnt << endl;
    cout << str << endl;

    return 0;
}