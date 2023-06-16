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

ll fac(ll n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin>>t;

    while (t--)
    {
        cin>>n;
        cout<<fac(n)<<"\n";
    }
    
    return 0;
}