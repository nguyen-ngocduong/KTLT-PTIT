#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long k,s;
    cin>>k>>s;
    int dem = 0;
    for(int i = 0; i<=k ;i++) {
        long long tmp = s-i;
        for(int j = 0; j<=k; j++) {
            if(tmp-j <= k && tmp - j >= 0) dem++;
        }
    }
    cout<<dem<<endl;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}