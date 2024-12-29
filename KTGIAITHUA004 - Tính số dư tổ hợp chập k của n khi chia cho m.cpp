#include<bits/stdc++.h>
using namespace std;
long long c[100001];
int solve(int n, int k, int m){
    memset(c, 0, sizeof(c));
    c[0] = 1;
    for(int i = 1; i<=n; i++){
        for(int j = min(i, k); j>=0; j--){
            c[j] = (c[j] + c[j-1]) % m;
        }
    }
    return c[k];
}
int main(){
    int tc; cin>>tc;
    while(tc--) {
        int n, k, m; cin>>n>>k>>m; cout<<solve(n, k, m)<<endl;
    }
    return 0;
}