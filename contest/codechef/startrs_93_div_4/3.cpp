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
    int t, a, b;

    cin >> t;
    while (t--) {
        cin >> a >> b;

        if (a > b) {
            // cout << "NO\n";
            // break;
        } 
         if (a == b) {
            cout << "YES\n";
            break;
        }

        while (a < b) {
            a += 3;
            b -= 1;
            cout<<a<<" "<<b<<endl;
        }

        if (a == b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}