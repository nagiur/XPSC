#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, in;
        cin >> n;
        vector<long long> boxes(n + 0, 0);

        for (int i = 0; i < n; i++) {
            cin >> boxes[i];
        }
        sort(boxes.begin(), boxes.end());

        int min = boxes[0];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            // cout<< boxes[i]<<" ";
            sum += boxes[i] - min;
        }
        cout<<sum;
        cout<<endl;
    }

    return 0;
}