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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, i = 3;
    cin >> n;

    string str = "0000";

    while (n) {
        str[i] = 48 + n % 10;
        n      = n / 10;
        i--;
    }

    cout << str << endl;

    return 0;
}