#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;
        set<char> st;

        int result = 0;

        for (int i = 0; i < str.size(); i++) {
            st.insert(str[i]);
            if (st.size() > 3) {
                result++;
                st.clear();
                st.insert(str[i]);
            }
        }

        if (!st.empty()) {
            result++;
        }

        cout << result << endl;
    }

    return 0;
}