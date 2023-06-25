#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int kase;
    cin >> kase;
    
    while (kase--) {
        int m;
        cin>>m;

        string str = to_string(m);
        string s = "1";

        for (size_t i = 1; i < str.size(); i++)
        {
            s += '0';
        }

        int num = stoi(s);
        cout<<m-num<<endl;
        
    }
      
    return 0;
}