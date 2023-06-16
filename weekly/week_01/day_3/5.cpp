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

vector<ll> lucky_numbers;

void all_ways(int n, string s = "") {
    if (n == 0) {
        ll temp = 0;
        int i   = 0;
        while ((i != s.size())) {
            temp = temp * 10 + (s[i] - '0');
            i++;
        }
        lucky_numbers.pb(temp);
        return;
    }
    all_ways(n - 1, s + '4');
    all_ways(n - 1, s + '7');
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 5; i++) {
        all_ways(i);
    }

    int a, b;
    bool find = false;
    cin >> a >> b;

    for (auto lucky : lucky_numbers) {
        if (a <= lucky && lucky <= b) {
            cout << lucky << " ";
            find = true;
        }
    }
    if (!find) {
        cout << "-1";
    }
    cout << endl;

    return 0;
}