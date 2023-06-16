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
    deque<char> deq_str;
    string str;

    cin >> str;

    for (char ch : str) {
        deq_str.push_back(ch);
    }

    while (!deq_str.empty()) {
        if (deq_str.front() != deq_str.back()) {
            cout << "NO\n";
            return 0;
        }
        deq_str.pop_front();
        if (deq_str.size() == 0) {
            break;
        }
        deq_str.pop_back();
    }

    cout << "YES\n";

    return 0;
}