#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    int n, l;
    while (kase--) {
        cin >> l;
        set<int> nums;
        for (int i = 0; i < l; i++) {
            cin >> n;
            nums.insert(n);
        }

        int len = nums.size();
        
        if((l-len)%2 == 1){
            len--;
        }

        cout<<len<<endl;
    }

    return 0;
}