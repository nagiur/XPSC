#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> p_list;
    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;
        p_list.push_back(str);
    }

    reverse(p_list.begin(), p_list.end());

    unordered_set<string> st;
    for (string pl : p_list) {
        if (st.find(pl) == st.end()) {
            st.insert(pl);
            int len = pl.size() - 1;
            cout << pl[len-1]<<pl[len];
        }
    }

    cout<<endl;
    return 0;
}