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

ll sumf(ll n) {
  return (n * (n + 1)) / 2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    ll l, r, sum = 0;
    while (t--) {
        cin >> l >> r;

        // for (ll j = l; j <= r; j++) {
        //     sum += j;
        // // }
        // cout << sumf(l-1) <<" - " <<sumf(r)<< " = ";
        // cout<<sumf(r) - sumf(l-1)<<endl;
        l--;
        // cout<< (l*(l+1))/2<<" - "<<(r*(r+1))/2<<" = ";
        cout<<abs(((l*(l+1))/2) - ((r * (r + 1)) / 2) )<<endl;
     
    }

    return 0;
}