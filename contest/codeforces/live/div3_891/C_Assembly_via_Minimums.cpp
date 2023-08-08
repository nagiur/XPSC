#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;
    
    while (kase--) {
        int n;
        cin>>n;
        int l = (n*(n-1))/2;

        cout<<l<<endl;
        vector<int> vec(l);
        for(auto &v:vec) cin>>v;
    }
      
    return 0;
}