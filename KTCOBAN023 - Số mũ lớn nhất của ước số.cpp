#include<bits/stdc++.h>
using namespace std;
long long power(long long n, long long p) {
    if(n==1) return 0;
    long long tong = 0;
    int x = 1;
    while(pow(p,x) <= n) {
        tong += n/pow(p,x);
        x++;
    }
    return tong;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n,p;
        cin>>n>>p;
        cout<<power(n,p)<<endl;
    }
    return 0;
}