#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin>>n;

        int total = (n*(n+1))/2;
        
        if(total%n == 0){
            cout<<-1<<endl;
        }else {
            for(int i = 1; i <= n; i = i + 2){
                cout<<i+1 <<" "<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}