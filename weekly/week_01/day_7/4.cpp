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

void reverse_words(string &str) {
  int n = str.length();
  for (int i = 0, j = 0; i < n; i++) {
    if (str[i] == ' ' || i == n - 1) {
      reverse(str.begin() + j, str.begin() + i + 1);
      j = i + 1;
    }
  }
}

int main() {
    string str;
    cin >> str;
    reverse_words(str);
    cout << str << endl;
    return 0;
}
