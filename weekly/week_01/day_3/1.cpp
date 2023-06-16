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
#define ln printf("\n")
#define pln(val) cout << val << endl;

// Problem:

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, coutn = 0;
    cin >> a >> b >> c;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}