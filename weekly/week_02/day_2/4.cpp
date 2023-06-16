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
    int S, T;
    cin >> S >> T;

    int cnt = 0;
    for (int a = 0; a <= S; a++) {
        for (int b = 0; a + b <= S; b++) {
            for (int c = 0; a + b + c <= S; c++) {
                if (a * b * c <= T) cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}