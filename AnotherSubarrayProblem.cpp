#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    ll curr = a[0], mx = a[0];
    for(int i=1;i<n;i++) {
        curr = max(curr + a[i], a[i]);
        mx = max(curr, mx);
    }
    cout << mx << endl;
 
}
