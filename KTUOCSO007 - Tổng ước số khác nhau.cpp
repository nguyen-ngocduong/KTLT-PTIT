#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n,m; cin>>n>>m;
        long long res = 0;
        for(int i = 1; i<=sqrt(n); i++) {
            if(n%i==0) {
                if(m%i!=0) res += i;
                if(n/i!=i && m%(n/i)!=0) res += n/i;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}