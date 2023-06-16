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

const int N = 1e3 + 5;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    string bl_space = "", stars = "";
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 0; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
