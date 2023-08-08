#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        vector<int> card(n);

        for (auto &c : card) cin >> c;

        vector<int> deck;
        int total_army = 0;

        for (auto c : card) {
            if (c > 0) {
                // deck.push_back(c);
                // int sz = deck.size() - 1;
                // while (sz > 0 && (deck[sz] < deck[sz - 1])) {
                //     swap(deck[sz], deck[sz - 1]);
                //     sz--;
                // }
            } else {
                total_army += deck.back();
                deck.pop_back();
            }
        }
        cout << total_army << endl;
    }

    return 0;
}
// buffs.push_back(e);
// int j = buffs.size() - 1;
// while (j > 0 && buffs[j] < buffs[j - 1]) {
//     std::swap(buffs[j], buffs[j - 1]);
//     j--;
// }