#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        map<char, int> freq;
        char ch;
        for (int i = 0; i < n; i++) {
            cin >> ch;
            freq[ch]++;
        }

        int a = 0, b = 0, sum = 0;

        for (auto c : freq) {
            if (c.second >= 2) {
                c.second = 2;
                sum += c.second;
                a++;
                b++;
            } else  {
                a++;
                sum++;
            }
            // cout <˝< c.first << " " << c.second << endl;
        }
        cout << a+b << endl;
    }

    return 0;
}