#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ln cout << endl;
#define pln(val) cout << val << endl;

int main() {
    string str;
    cin >> str;

    int feq[26 + 1];
    for (int i = 0; i < 26; i++) {
        feq[i] = 0;
    }

    for (char ch : str) {
        feq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (feq[i] == 0) {
            char ch = 'a' + i;
            cout << ch << "\n";
            return 0;
        }
    }

    cout << "None\n";

    return 0;
}