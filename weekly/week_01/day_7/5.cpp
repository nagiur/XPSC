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
  string str;
  cin >> str;

  for (int i = 0; i < str.length(); i++) {
    if (str.substr(i, 5) == "EGYPT") {
      str.replace(i, 5, " ");
    }
  }

  cout << str << endl;

  return 0;
}
