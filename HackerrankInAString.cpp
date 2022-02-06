#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        string hr = "hackerrank";
        int j = 0;
        for(int i=0;i<(int)s.size();i++) {
            if (hr[j] == s[i]) j++;
        }
        if (j == (int)hr.size()) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}
