#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        int a[n];
        int so = 0, sa = 0, sd = 0;
        for(int i = 0; i<n; i++) {
            if(a[i] == 0) so++;
            else if(a[i] < 0) sa++;
            else sd++;
        }
        if(so != 0) cout<<"-1"<<endl;
        else cout<<min(sa,sd)<<endl;
    }
    return 0;
}