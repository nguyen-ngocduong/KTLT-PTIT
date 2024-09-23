#include<bits/stdc++.h>
using namespace std;
long long count(long long n) {
    long long dem = 0;
    for(long long L = 1; L*(L+1) < 2*n; L++) {
        double a = (1.0*n - L*(L+1)/2) / (L+1); //đếm số ko nguyên a
        if(a - (long)a == 0.0) dem++;
    }
    return dem;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        cout<<count(n)<<endl;
    }
    return 0;
}