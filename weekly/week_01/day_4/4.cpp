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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                cout << "X";
            } else if (i % 2 == 0 && j % 2 == 0) {
                cout << "/";
            } else if (i % 2 == 1 && j % 2 == 1) {
                cout << "\\";
            } else {
                cout << "*";
            }

            if(i == 0 && j == 0)
        }
        cout << endl;
    }

    return 0;
}