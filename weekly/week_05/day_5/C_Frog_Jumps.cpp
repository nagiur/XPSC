#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;

        vector<int> vec;
        vec.push_back(0);

        for (size_t i = 0; i < str.size(); i++) {
            if (str[i] == 'R') {
                vec.push_back(i + 1);
            }
        }

        vec.push_back(str.size() + 1);
        int result = 0;
        for (size_t i = 0; i < vec.size() - 1; i++) {
            result = max(result, vec[i + 1] - vec[i]);
        }

        cout << result << endl;
    }

    return 0;
}