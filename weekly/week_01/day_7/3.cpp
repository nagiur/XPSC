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

// sorting a long string
void str_sort(string str, long long len) {
    long long feq[26];

    for (int i = 0; i < 26; i++) {
        feq[i] = 0;
    }

    for (ll i = 0; i < len; i++) {
        feq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (feq[i] != 0) {
            char ch = i + 'a';
            // cout << ch << " - " << feq[i] << "\n";
            for (int j = 0; j < feq[i]; j++) {
                cout << ch;
            }
        }
    }
    cout << endl;
}

int main() {
    long long n;
    cin >> n;

    string str;
    cin >> str;
    str_sort(str, n);

    return 0;
}