#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        deque<char> deq(str.begin(), str.end());
        bool f = false;
        while (deq.size() != 0) {

            if (deq.front() == deq.back()) {
                f = true;
                break;
            }
            deq.pop_front();
            deq.pop_back();
        }

        if (f) {
            cout << deq.size() << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}